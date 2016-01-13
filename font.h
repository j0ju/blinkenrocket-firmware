#ifndef FONT_H_
#define FONT_H_

#include <avr/pgmspace.h>

const unsigned char PROGMEM chr_001[] = {0x08, 0x00, 0x20, 0x44, 0x40, 0x44, 0x20, 0x00, 0x00};	// happy smiley
const unsigned char PROGMEM chr_002[] = {0x08, 0x00, 0x40, 0x24, 0x20, 0x24, 0x40, 0x00, 0x00};	// sad smiley
const unsigned char PROGMEM chr_003[] = {0x05, 0x18, 0xEC, 0x5C, 0xEC, 0x18};	// skull
const unsigned char PROGMEM chr_004[] = {0x05, 0x18, 0x24, 0x48, 0x24, 0x18};	// heart
const unsigned char PROGMEM chr_005[] = {0x05, 0xD8, 0x34, 0xDE, 0x34, 0xD8};	// invader1
const unsigned char PROGMEM chr_006[] = {0x05, 0xFA, 0xB4, 0x3C, 0xB4, 0xFA};	// invader2
const unsigned char PROGMEM chr_007[] = {0x05, 0x9C, 0xF6, 0x1E, 0xF6, 0x9C};	// invader3
const unsigned char PROGMEM chr_008[] = {0x05, 0xF8, 0x74, 0xFC, 0x74, 0xF8};	// ghost
const unsigned char PROGMEM chr_009[] = {0x05, 0x3C, 0x68, 0xF8, 0x68, 0x3C};	// fox
const unsigned char PROGMEM chr_010[] = {0x07, 0x7C, 0x40, 0x40, 0x00, 0x7C, 0x14, 0x04};	// <LF>
const unsigned char PROGMEM chr_011[] = {0x05, 0x60, 0x60, 0x3E, 0xCA, 0xFC};	// 2 musical notes
const unsigned char PROGMEM chr_012[] = {0x04, 0xC0, 0xFE, 0x04, 0x18};	// musical note
const unsigned char PROGMEM chr_013[] = {0x07, 0x38, 0x44, 0x44, 0x00, 0x7C, 0x14, 0x68};	// <CR>
const unsigned char PROGMEM chr_014[] = {0x05, 0x06, 0x8A, 0xF2, 0x8A, 0x06};	// glass
const unsigned char PROGMEM chr_015[] = {0x04, 0xFC, 0xF4, 0xF4, 0xFE};	// mobile
const unsigned char PROGMEM chr_016[] = {0x04, 0xE0, 0xCC, 0xAA, 0x19};	// flash
const unsigned char PROGMEM chr_017[] = {0x05, 0x0E, 0x71, 0xF9, 0x71, 0x0E};	// lightbulb
const unsigned char PROGMEM chr_018[] = {0x05, 0x10, 0x38, 0x54, 0x10, 0x10};	// <-
const unsigned char PROGMEM chr_019[] = {0x05, 0x10, 0x10, 0x54, 0x38, 0x10};	// ->
const unsigned char PROGMEM chr_020[] = {0x05, 0x60, 0x90, 0x9A, 0x66, 0x0E};	// male
const unsigned char PROGMEM chr_021[] = {0x05, 0x0C, 0x52, 0xF2, 0x52, 0x0C};	// female
const unsigned char PROGMEM chr_022[] = {0x07, 0x0C, 0xEE, 0xB2, 0x9A, 0xB2, 0xEE, 0x0C};	// telephone
const unsigned char PROGMEM chr_023[] = {0x05, 0x88, 0x48, 0x3A, 0x48, 0x88};	// stick figure
const unsigned char PROGMEM chr_024[] = {0x07, 0x10, 0x28, 0x54, 0xAA, 0x54, 0x28, 0x10};	// diamond
const unsigned char PROGMEM chr_025[] = {0x05, 0x38, 0x44, 0x5C, 0x54, 0x38};	// clock
const unsigned char PROGMEM chr_026[] = {0x05, 0x20, 0x3C, 0x7E, 0x3C, 0x20};	// bell
const unsigned char PROGMEM chr_027[] = {0x05, 0xC6, 0xAA, 0x92, 0x82, 0x82};	// sigma
const unsigned char PROGMEM chr_028[] = {0x05, 0xB8, 0xC4, 0x04, 0xC4, 0xB8};	// omega
const unsigned char PROGMEM chr_029[] = {0x06, 0x10, 0x38, 0x7C, 0xFE, 0xC6, 0x82};	// left
const unsigned char PROGMEM chr_030[] = {0x06, 0x82, 0xC6, 0xFE, 0x7C, 0x38, 0x10};	// right
const unsigned char PROGMEM chr_031[] = {0x07, 0x70, 0x88, 0x70, 0x00, 0xFE, 0x10, 0xEC};	// ok
const unsigned char PROGMEM chr_032[] = {0x03, 0x00, 0x00, 0x00};	// <space>
const unsigned char PROGMEM chr_033[] = {0x01, 0xBE};	// !
const unsigned char PROGMEM chr_034[] = {0x03, 0x06, 0x00, 0x06};	// "
const unsigned char PROGMEM chr_035[] = {0x05, 0x28, 0xFE, 0x28, 0xFE, 0x28};	// #
const unsigned char PROGMEM chr_036[] = {0x05, 0x48, 0x54, 0xFE, 0x54, 0x24};	// $
const unsigned char PROGMEM chr_037[] = {0x05, 0x46, 0x26, 0x10, 0xC8, 0xC4};	// %
const unsigned char PROGMEM chr_038[] = {0x05, 0x6C, 0x92, 0xAC, 0x40, 0xA0};	// &
const unsigned char PROGMEM chr_039[] = {0x02, 0x0A, 0x06};	// '
const unsigned char PROGMEM chr_040[] = {0x03, 0x38, 0x44, 0x82};	// (
const unsigned char PROGMEM chr_041[] = {0x03, 0x82, 0x44, 0x38};	// )
const unsigned char PROGMEM chr_042[] = {0x05, 0x44, 0x28, 0xD6, 0x28, 0x44};	// *
const unsigned char PROGMEM chr_043[] = {0x05, 0x10, 0x10, 0x7C, 0x10, 0x10};	// +
const unsigned char PROGMEM chr_044[] = {0x02, 0x80, 0x40};	// ,
const unsigned char PROGMEM chr_045[] = {0x04, 0x10, 0x10, 0x10, 0x10};	// -
const unsigned char PROGMEM chr_046[] = {0x01, 0x80};	// .
const unsigned char PROGMEM chr_047[] = {0x05, 0xC0, 0x20, 0x10, 0x08, 0x06};	// /
const unsigned char PROGMEM chr_048[] = {0x04, 0x7C, 0x82, 0x82, 0x7C};	// 0
const unsigned char PROGMEM chr_049[] = {0x03, 0x84, 0xFE, 0x80};	// 1
const unsigned char PROGMEM chr_050[] = {0x04, 0xC4, 0xA2, 0x92, 0x8C};	// 2
const unsigned char PROGMEM chr_051[] = {0x04, 0x44, 0x82, 0x92, 0x6C};	// 3
const unsigned char PROGMEM chr_052[] = {0x04, 0x30, 0x28, 0x24, 0xFE};	// 4
const unsigned char PROGMEM chr_053[] = {0x04, 0x4E, 0x8A, 0x8A, 0x72};	// 5
const unsigned char PROGMEM chr_054[] = {0x04, 0x78, 0x94, 0x92, 0x62};	// 6
const unsigned char PROGMEM chr_055[] = {0x04, 0x02, 0xE2, 0x1A, 0x06};	// 7
const unsigned char PROGMEM chr_056[] = {0x04, 0x6C, 0x92, 0x92, 0x6C};	// 8
const unsigned char PROGMEM chr_057[] = {0x04, 0x0C, 0x92, 0x52, 0x3C};	// 9
const unsigned char PROGMEM chr_058[] = {0x01, 0x50};	// :
const unsigned char PROGMEM chr_059[] = {0x02, 0x80, 0x50};	// ;
const unsigned char PROGMEM chr_060[] = {0x04, 0x10, 0x28, 0x44, 0x82};	// <
const unsigned char PROGMEM chr_061[] = {0x04, 0x28, 0x28, 0x28, 0x28};	// =
const unsigned char PROGMEM chr_062[] = {0x04, 0x82, 0x44, 0x28, 0x10};	// >
const unsigned char PROGMEM chr_063[] = {0x04, 0x04, 0xA2, 0x12, 0x0C};	// ?
const unsigned char PROGMEM chr_064[] = {0x05, 0x64, 0x92, 0xF2, 0x82, 0x7C};	// @
const unsigned char PROGMEM chr_065[] = {0x04, 0xFC, 0x12, 0x12, 0xFC};	// A
const unsigned char PROGMEM chr_066[] = {0x04, 0xFE, 0x92, 0x92, 0x6C};	// B
const unsigned char PROGMEM chr_067[] = {0x04, 0x7C, 0x82, 0x82, 0x44};	// C
const unsigned char PROGMEM chr_068[] = {0x04, 0xFE, 0x82, 0x82, 0x7C};	// D
const unsigned char PROGMEM chr_069[] = {0x04, 0xFE, 0x92, 0x92, 0x82};	// E
const unsigned char PROGMEM chr_070[] = {0x04, 0xFE, 0x12, 0x12, 0x02};	// F
const unsigned char PROGMEM chr_071[] = {0x04, 0x7C, 0x82, 0x92, 0x74};	// G
const unsigned char PROGMEM chr_072[] = {0x04, 0xFE, 0x10, 0x10, 0xFE};	// H
const unsigned char PROGMEM chr_073[] = {0x03, 0x82, 0xFE, 0x82};	// I
const unsigned char PROGMEM chr_074[] = {0x04, 0x40, 0x80, 0x80, 0x7E};	// J
const unsigned char PROGMEM chr_075[] = {0x04, 0xFE, 0x10, 0x28, 0xC6};	// K
const unsigned char PROGMEM chr_076[] = {0x04, 0xFE, 0x80, 0x80, 0x80};	// L
const unsigned char PROGMEM chr_077[] = {0x05, 0xFE, 0x04, 0x18, 0x04, 0xFE};	// M
const unsigned char PROGMEM chr_078[] = {0x04, 0xFE, 0x0C, 0x30, 0xFE};	// N
const unsigned char PROGMEM chr_079[] = {0x04, 0x7C, 0x82, 0x82, 0x7C};	// O
const unsigned char PROGMEM chr_080[] = {0x04, 0xFE, 0x12, 0x12, 0x0C};	// P
const unsigned char PROGMEM chr_081[] = {0x04, 0x7C, 0x82, 0x42, 0xBC};	// Q
const unsigned char PROGMEM chr_082[] = {0x04, 0xFE, 0x12, 0x32, 0xCC};	// R
const unsigned char PROGMEM chr_083[] = {0x04, 0x4C, 0x92, 0x92, 0x64};	// S
const unsigned char PROGMEM chr_084[] = {0x05, 0x02, 0x02, 0xFE, 0x02, 0x02};	// T
const unsigned char PROGMEM chr_085[] = {0x04, 0x7E, 0x80, 0x80, 0x7E};	// U
const unsigned char PROGMEM chr_086[] = {0x05, 0x0E, 0x30, 0xC0, 0x30, 0x0E};	// V
const unsigned char PROGMEM chr_087[] = {0x05, 0x7E, 0x80, 0x70, 0x80, 0x7E};	// W
const unsigned char PROGMEM chr_088[] = {0x05, 0xC6, 0x28, 0x10, 0x28, 0xC6};	// X
const unsigned char PROGMEM chr_089[] = {0x05, 0x06, 0x08, 0xF0, 0x08, 0x06};	// Y
const unsigned char PROGMEM chr_090[] = {0x04, 0xC2, 0xB2, 0x8A, 0x86};	// Z
const unsigned char PROGMEM chr_091[] = {0x03, 0xFE, 0x82, 0x82};	// [
const unsigned char PROGMEM chr_092[] = {0x05, 0x06, 0x08, 0x10, 0x20, 0xC0};	// backslash
const unsigned char PROGMEM chr_093[] = {0x03, 0x82, 0x82, 0xFE};	// ]
const unsigned char PROGMEM chr_094[] = {0x03, 0x04, 0x02, 0x04};	// ^
const unsigned char PROGMEM chr_095[] = {0x04, 0x80, 0x80, 0x80, 0x80};	// _
const unsigned char PROGMEM chr_096[] = {0x02, 0x06, 0x08};	// `
const unsigned char PROGMEM chr_097[] = {0x04, 0x40, 0xA8, 0xA8, 0xF0};	// a
const unsigned char PROGMEM chr_098[] = {0x04, 0xFE, 0x88, 0x88, 0x70};	// b
const unsigned char PROGMEM chr_099[] = {0x04, 0x70, 0x88, 0x88, 0x40};	// c
const unsigned char PROGMEM chr_100[] = {0x04, 0x70, 0x88, 0x88, 0xFE};	// d
const unsigned char PROGMEM chr_101[] = {0x04, 0x70, 0xA8, 0xA8, 0x90};	// e
const unsigned char PROGMEM chr_102[] = {0x04, 0x08, 0xFC, 0x0A, 0x02};	// f
const unsigned char PROGMEM chr_103[] = {0x04, 0x10, 0xA8, 0xA8, 0x78};	// g
const unsigned char PROGMEM chr_104[] = {0x04, 0xFE, 0x10, 0x10, 0xE0};	// h
const unsigned char PROGMEM chr_105[] = {0x01, 0xFA};	// i
const unsigned char PROGMEM chr_106[] = {0x03, 0x40, 0x80, 0x7A};	// j
const unsigned char PROGMEM chr_107[] = {0x04, 0xFE, 0x10, 0x28, 0xC4};	// k
const unsigned char PROGMEM chr_108[] = {0x03, 0x82, 0xFE, 0x80};	// l
const unsigned char PROGMEM chr_109[] = {0x05, 0xF8, 0x08, 0xF0, 0x08, 0xF0};	// m
const unsigned char PROGMEM chr_110[] = {0x04, 0xF8, 0x08, 0x08, 0xF0};	// n
const unsigned char PROGMEM chr_111[] = {0x04, 0x70, 0x88, 0x88, 0x70};	// o
const unsigned char PROGMEM chr_112[] = {0x04, 0xF8, 0x48, 0x48, 0x30};	// p
const unsigned char PROGMEM chr_113[] = {0x04, 0x30, 0x48, 0x48, 0xF8};	// q
const unsigned char PROGMEM chr_114[] = {0x03, 0xF0, 0x08, 0x08};	// r
const unsigned char PROGMEM chr_115[] = {0x04, 0x90, 0xA8, 0xA8, 0x48};	// s
const unsigned char PROGMEM chr_116[] = {0x04, 0x08, 0x7E, 0x88, 0x88};	// t
const unsigned char PROGMEM chr_117[] = {0x04, 0x78, 0x80, 0x80, 0xF8};	// u
const unsigned char PROGMEM chr_118[] = {0x05, 0x18, 0x60, 0x80, 0x60, 0x18};	// v
const unsigned char PROGMEM chr_119[] = {0x05, 0x78, 0x80, 0x60, 0x80, 0x78};	// w
const unsigned char PROGMEM chr_120[] = {0x05, 0x88, 0x50, 0x20, 0x50, 0x88};	// x
const unsigned char PROGMEM chr_121[] = {0x04, 0x18, 0xA0, 0xA0, 0x78};	// y
const unsigned char PROGMEM chr_122[] = {0x04, 0xC8, 0xA8, 0x98, 0x88};	// z
const unsigned char PROGMEM chr_123[] = {0x03, 0x10, 0x6C, 0x82};	// {
const unsigned char PROGMEM chr_124[] = {0x01, 0xFF};	// |
const unsigned char PROGMEM chr_125[] = {0x03, 0x82, 0x6C, 0x10};	// }
const unsigned char PROGMEM chr_126[] = {0x05, 0x10, 0x08, 0x10, 0x20, 0x10};	// ~


#endif /* FONT_H_ */