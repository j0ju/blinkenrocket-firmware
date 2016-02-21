#include <avr/io.h>
#include <stdlib.h>

#include "storage.h"

Storage storage;

/*
 * EEPROM data structure ("file system"):
 *
 * Organized as 64B-pages, all animations/texts are page-aligned.  Byte 0 ..
 * 255 : storage metadata. Byte 0 contains the number of animations, byte 1 the
 * page offset of the first animation, byte 2 of the second, and so on.
 * Byte 256+: texts/animations without additional storage metadata, aligned
 * to 64B. So, a maximum of 256-(256/64) = 252 texts/animations can be stored,
 * and a maximum of 255 * 64 = 16320 Bytes (almost 16 kB / 128 kbit) can be
 * addressed.  To support larger EEPROMS, change the metadate area to Byte 2 ..
 * 511 and use 16bit page pointers.
 *
 * The text/animation size is not limited by this approach.
 *
 * Example:
 * Byte     0 = 3 -> we've got a total of three animations
 * Byte     1 = 4 -> first text/animation starts at byte 64*4 = 256
 * Byte     2 = 8 -> second starts at byte 64*8 = 512
 * Byte     3 = 9 -> third starts at 64*9 * 576
 * Byte     4 = whatever
 *            .
 *            .
 *            .
 * Byte 256ff = first text/animation. Has a header encoding its length in bytes.
 * Byte 512ff = second
 * Byte 576ff = third
 *            .
 *            .
 *            .
 */

void Storage::enable()
{
	/*
	 * Set I2C clock frequency to 100kHz.
	 * freq = F_CPU / (16 + (2 * TWBR * TWPS) )
	 * let TWPS = "00" = 1
	 * -> TWBR = (F_CPU / 100000) - 16 / 2
	 */
	TWSR = 0; // the lower two bits control TWPS
	TWBR = ((F_CPU / 100000UL) - 16) / 2;

	i2c_read(0, 1, &num_anims);
}


/*
 * Send an I2C (re)start condition and the EEPROM address in read mode. Returns
 * after it has been transmitted successfully.
 */
uint8_t Storage::i2c_start_read()
{
	TWCR = _BV(TWINT) | _BV(TWSTA) | _BV(TWEN);
	while (!(TWCR & _BV(TWINT)));
	if (!(TWSR & 0x18)) // 0x08 == START ok, 0x10 == RESTART ok
		return I2C_START_ERR;

	// Note: The R byte ("... | 1") causes the TWI momodule to switch to
	// Master Receive mode
	TWDR = (I2C_EEPROM_ADDR << 1) | 1;
	TWCR = _BV(TWINT) | _BV(TWEN);
	while (!(TWCR & _BV(TWINT)));
	if (TWSR != 0x40) // 0x40 == SLA+R transmitted, ACK receveid
		return I2C_ADDR_ERR;

	return I2C_OK;
}

/*
 * Send an I2C (re)start condition and the EEPROM address in write mode.
 * Returns after it has been transmitted successfully.
 */
uint8_t Storage::i2c_start_write()
{
	TWCR = _BV(TWINT) | _BV(TWSTA) | _BV(TWEN);
	while (!(TWCR & _BV(TWINT)));
	if (!(TWSR & 0x18)) // 0x08 == START ok, 0x10 == RESTART ok
		return I2C_START_ERR;

	TWDR = (I2C_EEPROM_ADDR << 1) | 0;
	TWCR = _BV(TWINT) | _BV(TWEN);
	while (!(TWCR & _BV(TWINT)));
	if (TWSR != 0x18) // 0x18 == SLA+W transmitted, ACK received
		return I2C_ADDR_ERR;

	return I2C_OK;
}

/*
 * Send an I2C stop condition.
 */
void Storage::i2c_stop()
{
	TWCR = _BV(TWINT) | _BV(TWSTO) | _BV(TWEN);
}

/*
 * Sends len bytes to the EEPROM. Note that this method does NOT
 * send I2C start or stop conditions.
 */
uint8_t Storage::i2c_send(uint8_t len, uint8_t *data)
{
	uint8_t pos = 0;

	for (pos = 0; pos < len; pos++) {
		TWDR = data[pos];
		TWCR = _BV(TWINT) | _BV(TWEN);
		while (!(TWCR & _BV(TWINT)));
		if (TWSR != 0x28) // 0x28 == byte transmitted, ACK received
			return pos;
	}

	return pos + 1;
}

/*
 * Receives len bytes from the EEPROM into data. Note that this method does
 * NOT send I2C start or stop conditions.
 */
uint8_t Storage::i2c_receive(uint8_t len, uint8_t *data)
{
	uint8_t pos = 0;

	for (pos = 0; pos < len; pos++) {
		if (pos == len-1) {
			// Don't ACK the last byte
			TWCR = _BV(TWINT) | _BV(TWEN);
		} else {
			// Automatically send ACK
			TWCR = _BV(TWINT) | _BV(TWEN) | _BV(TWEA);
		}
		while (!(TWCR & _BV(TWINT)));
		data[pos] = TWDR;
	}

	return pos + 1;
}

/*
 * Writes len bytes of data into the EEPROM, starting at byte number pos.
 * Does not check for page boundaries yet.
 * Includes a complete I2C transaction.
 */
uint8_t Storage::i2c_write(uint16_t pos, uint8_t len, uint8_t *data)
{
	uint8_t addr_buf[2];

	addr_buf[0] = pos >> 8;
	addr_buf[1] = pos & 0xff;

	i2c_start_write();
	i2c_send(2, addr_buf);
	i2c_send(len, data);
	i2c_stop();

	return 0; // TODO proper return code to indicate write errors
}

/*
 * Reads len bytes of data from the EEPROM, starting at byte number pos.
 * Does not check for page boundaries yet.
 * Includes a complete I2C transaction.
 */
uint8_t Storage::i2c_read(uint16_t pos, uint8_t len, uint8_t *data)
{
	uint8_t addr_buf[2];
	addr_buf[0] = pos >> 8;
	addr_buf[1] = pos & 0xff;

	i2c_start_write();
	i2c_send(2, addr_buf);
	i2c_start_read();
	i2c_receive(len, data);
	i2c_stop();

	return 0; // TODO proper return code to indicate read/write errors
}

void Storage::reset()
{
	first_free_page = 0;
	num_anims = 0xff;
	i2c_write(0, 1, &num_anims); // pretend the EEPROM was never written to
	num_anims = 0;
}

bool Storage::hasData()
{
	// Unprogrammed EEPROM pages always read 0xff
	if (num_anims == 0xff)
		return false;
	return true;
}

void Storage::load(uint16_t idx, uint8_t *data)
{
	uint8_t page_offset;
	uint8_t header[2];
	i2c_read(1 + idx, 1, &page_offset);

	i2c_read(256 + (64 * (uint16_t)page_offset), 2, header);
	i2c_read(256 + (64 * (uint16_t)page_offset), header[1] + 2, data);
}

void Storage::save(uint8_t *data)
{
	num_anims++;
	i2c_write(0, 1, &num_anims);
	i2c_write(num_anims, 1, &first_free_page);
	append(data);
}

void Storage::append(uint8_t *data)
{
	// the header indicates the length of the data, but we really don't care
	// - it's easier to just write the whole page and skip the trailing
	// garbage when reading.
	i2c_write(256 + (64 * (uint16_t)first_free_page), 64, data);
	first_free_page++;
}
