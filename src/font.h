#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

typedef const unsigned char* glyph_t;

const unsigned char PROGMEM chr_001[] = {0x08,0x00,0x04,0x22,0x02,0x22,0x04,0x00,0x00}; // happy smiley
const unsigned char PROGMEM chr_002[] = {0x08,0x00,0x02,0x24,0x04,0x24,0x02,0x00,0x00}; // sad smiley
const unsigned char PROGMEM chr_003[] = {0x05,0x18,0x37,0x3a,0x37,0x18}; // skull
const unsigned char PROGMEM chr_004[] = {0x05,0x18,0x24,0x12,0x24,0x18}; // heart
const unsigned char PROGMEM chr_005[] = {0x05,0x1b,0x2c,0x7b,0x2c,0x1b}; // invader1
const unsigned char PROGMEM chr_006[] = {0x05,0x5f,0x2d,0x3c,0x2d,0x5f}; // invader2
const unsigned char PROGMEM chr_007[] = {0x05,0x39,0x6f,0x78,0x6f,0x39}; // invader3
const unsigned char PROGMEM chr_008[] = {0x05,0x1f,0x2e,0x3f,0x2e,0x1f}; // ghost
const unsigned char PROGMEM chr_009[] = {0x05,0x3c,0x16,0x1f,0x16,0x3c}; // fox
const unsigned char PROGMEM chr_010[] = {0x07,0x3e,0x02,0x02,0x00,0x3e,0x28,0x20}; // <LF>
const unsigned char PROGMEM chr_011[] = {0x05,0x06,0x06,0x7c,0x53,0x3f}; // 2 musical notes
const unsigned char PROGMEM chr_012[] = {0x04,0x03,0x7f,0x20,0x18}; // musical note
const unsigned char PROGMEM chr_013[] = {0x07,0x1c,0x22,0x22,0x00,0x3e,0x28,0x16}; // <CR>
const unsigned char PROGMEM chr_014[] = {0x05,0x60,0x51,0x4f,0x51,0x60}; // glass
const unsigned char PROGMEM chr_015[] = {0x04,0x3f,0x2f,0x2f,0x7f}; // mobile
const unsigned char PROGMEM chr_016[] = {0x04,0x07,0x33,0x55,0x98}; // flash
const unsigned char PROGMEM chr_017[] = {0x05,0x70,0x8e,0x9f,0x8e,0x70}; // lightbulb
const unsigned char PROGMEM chr_018[] = {0x05,0x08,0x1c,0x2a,0x08,0x08}; // <-
const unsigned char PROGMEM chr_019[] = {0x05,0x08,0x08,0x2a,0x1c,0x08}; // ->
const unsigned char PROGMEM chr_020[] = {0x05,0x06,0x09,0x59,0x66,0x70}; // male
const unsigned char PROGMEM chr_021[] = {0x05,0x30,0x4a,0x4f,0x4a,0x30}; // female
const unsigned char PROGMEM chr_022[] = {0x07,0x30,0x77,0x4d,0x59,0x4d,0x77,0x30}; // telephone
const unsigned char PROGMEM chr_023[] = {0x05,0x11,0x12,0x5c,0x12,0x11}; // stick figure
const unsigned char PROGMEM chr_024[] = {0x07,0x08,0x14,0x2a,0x55,0x2a,0x14,0x08}; // diamond
const unsigned char PROGMEM chr_025[] = {0x05,0x1c,0x22,0x3a,0x2a,0x1c}; // clock
const unsigned char PROGMEM chr_026[] = {0x05,0x04,0x3c,0x7e,0x3c,0x04}; // bell
const unsigned char PROGMEM chr_027[] = {0x05,0x63,0x55,0x49,0x41,0x41}; // sigma
const unsigned char PROGMEM chr_028[] = {0x05,0x1d,0x23,0x20,0x23,0x1d}; // omega
const unsigned char PROGMEM chr_029[] = {0x06,0x08,0x1c,0x3e,0x7f,0x63,0x41}; // left
const unsigned char PROGMEM chr_030[] = {0x06,0x41,0x63,0x7f,0x3e,0x1c,0x08}; // right
const unsigned char PROGMEM chr_031[] = {0x07,0x0e,0x11,0x0e,0x00,0x7f,0x08,0x37}; // ok
const unsigned char PROGMEM chr_032[] = {0x03,0x00,0x00,0x00}; // <space>
const unsigned char PROGMEM chr_033[] = {0x01,0x7d}; // !
const unsigned char PROGMEM chr_034[] = {0x03,0x60,0x00,0x60}; // "
const unsigned char PROGMEM chr_035[] = {0x05,0x14,0x7f,0x14,0x7f,0x14}; // #
const unsigned char PROGMEM chr_036[] = {0x05,0x12,0x2a,0x7f,0x2a,0x24}; // $
const unsigned char PROGMEM chr_037[] = {0x05,0x62,0x64,0x08,0x13,0x23}; // %
const unsigned char PROGMEM chr_038[] = {0x05,0x36,0x49,0x35,0x02,0x05}; // &
const unsigned char PROGMEM chr_039[] = {0x02,0x50,0x60}; // '
const unsigned char PROGMEM chr_040[] = {0x03,0x1c,0x22,0x41}; // (
const unsigned char PROGMEM chr_041[] = {0x03,0x41,0x22,0x1c}; // )
const unsigned char PROGMEM chr_042[] = {0x05,0x22,0x14,0x6b,0x14,0x22}; // *
const unsigned char PROGMEM chr_043[] = {0x05,0x08,0x08,0x3e,0x08,0x08}; // +
const unsigned char PROGMEM chr_044[] = {0x02,0x01,0x02}; // ,
const unsigned char PROGMEM chr_045[] = {0x04,0x08,0x08,0x08,0x08}; // -
const unsigned char PROGMEM chr_046[] = {0x01,0x01}; // .
const unsigned char PROGMEM chr_047[] = {0x05,0x03,0x04,0x08,0x10,0x60}; // /
const unsigned char PROGMEM chr_048[] = {0x04,0x3e,0x41,0x41,0x3e}; // 0
const unsigned char PROGMEM chr_049[] = {0x03,0x21,0x7f,0x01}; // 1
const unsigned char PROGMEM chr_050[] = {0x04,0x23,0x45,0x49,0x31}; // 2
const unsigned char PROGMEM chr_051[] = {0x04,0x22,0x41,0x49,0x36}; // 3
const unsigned char PROGMEM chr_052[] = {0x04,0x0c,0x14,0x24,0x7f}; // 4
const unsigned char PROGMEM chr_053[] = {0x04,0x72,0x51,0x51,0x4e}; // 5
const unsigned char PROGMEM chr_054[] = {0x04,0x1e,0x29,0x49,0x46}; // 6
const unsigned char PROGMEM chr_055[] = {0x04,0x40,0x47,0x58,0x60}; // 7
const unsigned char PROGMEM chr_056[] = {0x04,0x36,0x49,0x49,0x36}; // 8
const unsigned char PROGMEM chr_057[] = {0x04,0x30,0x49,0x4a,0x3c}; // 9
const unsigned char PROGMEM chr_058[] = {0x01,0x0a}; // :
const unsigned char PROGMEM chr_059[] = {0x02,0x01,0x0a}; // ;
const unsigned char PROGMEM chr_060[] = {0x04,0x08,0x14,0x22,0x41}; // <
const unsigned char PROGMEM chr_061[] = {0x04,0x14,0x14,0x14,0x14}; // =
const unsigned char PROGMEM chr_062[] = {0x04,0x41,0x22,0x14,0x08}; // >
const unsigned char PROGMEM chr_063[] = {0x04,0x20,0x45,0x48,0x30}; // ?
const unsigned char PROGMEM chr_064[] = {0x05,0x26,0x49,0x4f,0x41,0x3e}; // @
const unsigned char PROGMEM chr_065[] = {0x04,0x3f,0x48,0x48,0x3f}; // A
const unsigned char PROGMEM chr_066[] = {0x04,0x7f,0x49,0x49,0x36}; // B
const unsigned char PROGMEM chr_067[] = {0x04,0x3e,0x41,0x41,0x22}; // C
const unsigned char PROGMEM chr_068[] = {0x04,0x7f,0x41,0x41,0x3e}; // D
const unsigned char PROGMEM chr_069[] = {0x04,0x7f,0x49,0x49,0x41}; // E
const unsigned char PROGMEM chr_070[] = {0x04,0x7f,0x48,0x48,0x40}; // F
const unsigned char PROGMEM chr_071[] = {0x04,0x3e,0x41,0x49,0x2e}; // G
const unsigned char PROGMEM chr_072[] = {0x04,0x7f,0x08,0x08,0x7f}; // H
const unsigned char PROGMEM chr_073[] = {0x03,0x41,0x7f,0x41}; // I
const unsigned char PROGMEM chr_074[] = {0x04,0x02,0x01,0x01,0x7e}; // J
const unsigned char PROGMEM chr_075[] = {0x04,0x7f,0x08,0x14,0x63}; // K
const unsigned char PROGMEM chr_076[] = {0x04,0x7f,0x01,0x01,0x01}; // L
const unsigned char PROGMEM chr_077[] = {0x05,0x7f,0x20,0x18,0x20,0x7f}; // M
const unsigned char PROGMEM chr_078[] = {0x04,0x7f,0x30,0x0c,0x7f}; // N
const unsigned char PROGMEM chr_079[] = {0x04,0x3e,0x41,0x41,0x3e}; // O
const unsigned char PROGMEM chr_080[] = {0x04,0x7f,0x48,0x48,0x30}; // P
const unsigned char PROGMEM chr_081[] = {0x04,0x3e,0x41,0x42,0x3d}; // Q
const unsigned char PROGMEM chr_082[] = {0x04,0x7f,0x48,0x4c,0x33}; // R
const unsigned char PROGMEM chr_083[] = {0x04,0x32,0x49,0x49,0x26}; // S
const unsigned char PROGMEM chr_084[] = {0x05,0x40,0x40,0x7f,0x40,0x40}; // T
const unsigned char PROGMEM chr_085[] = {0x04,0x7e,0x01,0x01,0x7e}; // U
const unsigned char PROGMEM chr_086[] = {0x05,0x70,0x0c,0x03,0x0c,0x70}; // V
const unsigned char PROGMEM chr_087[] = {0x05,0x7e,0x01,0x0e,0x01,0x7e}; // W
const unsigned char PROGMEM chr_088[] = {0x05,0x63,0x14,0x08,0x14,0x63}; // X
const unsigned char PROGMEM chr_089[] = {0x05,0x60,0x10,0x0f,0x10,0x60}; // Y
const unsigned char PROGMEM chr_090[] = {0x04,0x43,0x4d,0x51,0x61}; // Z
const unsigned char PROGMEM chr_091[] = {0x03,0x7f,0x41,0x41}; // [
const unsigned char PROGMEM chr_092[] = {0x05,0x60,0x10,0x08,0x04,0x03}; // backslash
const unsigned char PROGMEM chr_093[] = {0x03,0x41,0x41,0x7f}; // ]
const unsigned char PROGMEM chr_094[] = {0x03,0x20,0x40,0x20}; // ^
const unsigned char PROGMEM chr_095[] = {0x04,0x01,0x01,0x01,0x01}; // _
const unsigned char PROGMEM chr_096[] = {0x02,0x60,0x10}; // `
const unsigned char PROGMEM chr_097[] = {0x04,0x02,0x15,0x15,0x0f}; // a
const unsigned char PROGMEM chr_098[] = {0x04,0x7f,0x11,0x11,0x0e}; // b
const unsigned char PROGMEM chr_099[] = {0x04,0x0e,0x11,0x11,0x02}; // c
const unsigned char PROGMEM chr_100[] = {0x04,0x0e,0x11,0x11,0x7f}; // d
const unsigned char PROGMEM chr_101[] = {0x04,0x0e,0x15,0x15,0x09}; // e
const unsigned char PROGMEM chr_102[] = {0x04,0x10,0x3f,0x50,0x40}; // f
const unsigned char PROGMEM chr_103[] = {0x04,0x08,0x15,0x15,0x1e}; // g
const unsigned char PROGMEM chr_104[] = {0x04,0x7f,0x08,0x08,0x07}; // h
const unsigned char PROGMEM chr_105[] = {0x01,0x5f}; // i
const unsigned char PROGMEM chr_106[] = {0x03,0x02,0x01,0x5e}; // j
const unsigned char PROGMEM chr_107[] = {0x04,0x7f,0x08,0x14,0x23}; // k
const unsigned char PROGMEM chr_108[] = {0x03,0x41,0x7f,0x01}; // l
const unsigned char PROGMEM chr_109[] = {0x05,0x1f,0x10,0x0f,0x10,0x0f}; // m
const unsigned char PROGMEM chr_110[] = {0x04,0x1f,0x10,0x10,0x0f}; // n
const unsigned char PROGMEM chr_111[] = {0x04,0x0e,0x11,0x11,0x0e}; // o
const unsigned char PROGMEM chr_112[] = {0x04,0x1f,0x12,0x12,0x0c}; // p
const unsigned char PROGMEM chr_113[] = {0x04,0x0c,0x12,0x12,0x1f}; // q
const unsigned char PROGMEM chr_114[] = {0x03,0x0f,0x10,0x10}; // r
const unsigned char PROGMEM chr_115[] = {0x04,0x09,0x15,0x15,0x12}; // s
const unsigned char PROGMEM chr_116[] = {0x04,0x10,0x7e,0x11,0x11}; // t
const unsigned char PROGMEM chr_117[] = {0x04,0x1e,0x01,0x01,0x1f}; // u
const unsigned char PROGMEM chr_118[] = {0x05,0x18,0x06,0x01,0x06,0x18}; // v
const unsigned char PROGMEM chr_119[] = {0x05,0x1e,0x01,0x06,0x01,0x1e}; // w
const unsigned char PROGMEM chr_120[] = {0x05,0x11,0x0a,0x04,0x0a,0x11}; // x
const unsigned char PROGMEM chr_121[] = {0x04,0x18,0x05,0x05,0x1e}; // y
const unsigned char PROGMEM chr_122[] = {0x04,0x13,0x15,0x19,0x11}; // z
const unsigned char PROGMEM chr_123[] = {0x03,0x08,0x36,0x41}; // {
const unsigned char PROGMEM chr_124[] = {0x01,0xff}; // |
const unsigned char PROGMEM chr_125[] = {0x03,0x41,0x36,0x08}; // }
const unsigned char PROGMEM chr_126[] = {0x05,0x08,0x10,0x08,0x04,0x08}; // ~

const glyph_t font[] PROGMEM = {
	chr_002, // special character for uncorrectable byte errors
	chr_001,
	chr_002,
	chr_003,
	chr_004,
	chr_005,
	chr_006,
	chr_007,
	chr_008,
	chr_009,
	chr_010,
	chr_011,
	chr_012,
	chr_013,
	chr_014,
	chr_015,
	chr_016,
	chr_017,
	chr_018,
	chr_019,
	chr_020,
	chr_021,
	chr_022,
	chr_023,
	chr_024,
	chr_025,
	chr_026,
	chr_027,
	chr_028,
	chr_029,
	chr_030,
	chr_031,
	chr_032,
	chr_033,
	chr_034,
	chr_035,
	chr_036,
	chr_037,
	chr_038,
	chr_039,
	chr_040,
	chr_041,
	chr_042,
	chr_043,
	chr_044,
	chr_045,
	chr_046,
	chr_047,
	chr_048,
	chr_049,
	chr_050,
	chr_051,
	chr_052,
	chr_053,
	chr_054,
	chr_055,
	chr_056,
	chr_057,
	chr_058,
	chr_059,
	chr_060,
	chr_061,
	chr_062,
	chr_063,
	chr_064,
	chr_065,
	chr_066,
	chr_067,
	chr_068,
	chr_069,
	chr_070,
	chr_071,
	chr_072,
	chr_073,
	chr_074,
	chr_075,
	chr_076,
	chr_077,
	chr_078,
	chr_079,
	chr_080,
	chr_081,
	chr_082,
	chr_083,
	chr_084,
	chr_085,
	chr_086,
	chr_087,
	chr_088,
	chr_089,
	chr_090,
	chr_091,
	chr_092,
	chr_093,
	chr_094,
	chr_095,
	chr_096,
	chr_097,
	chr_098,
	chr_099,
	chr_100,
	chr_101,
	chr_102,
	chr_103,
	chr_104,
	chr_105,
	chr_106,
	chr_107,
	chr_108,
	chr_109,
	chr_110,
	chr_111,
	chr_112,
	chr_113,
	chr_114,
	chr_115,
	chr_116,
	chr_117,
	chr_118,
	chr_119,
	chr_120,
	chr_121,
	chr_122,
	chr_123,
	chr_124,
	chr_125,
	chr_126
};



#endif /* FONT_H_ */
