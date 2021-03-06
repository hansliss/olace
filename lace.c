/*
 * Omega Lace
 */

#include <gb/gb.h>

unsigned char splashTiles[] = {
  // Tile 0
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x07,0x00,0x0F,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x3F,0x00,0xFF,0x00,0xE0,0x00,0x80,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xF0,0x00,0xFE,0x00,0x1F,0x00,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x01,
  0x00,0x1E,0x00,0x3C,0x00,0x78,0x00,0xF0,0x00,0xE1,0x00,0xE3,0x00,0xC7,0x00,0xC7,
  0x00,0x00,0x00,0x1F,0x00,0x7F,0x00,0xF8,0x00,0xC0,0x00,0x87,0x00,0x1F,0x00,0x3F,
  0x00,0x01,0x00,0xE0,0x00,0xF8,0x00,0x7C,0x00,0x0E,0x00,0x87,0x00,0xE3,0x00,0xF3,
  0x00,0xE0,0x00,0xFF,0x00,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8F,0x00,0x8F,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0xFE,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x1F,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0xF0,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x3F,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0xC0,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0xE0,

  // Tile 16
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x00,0x7F,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x70,0x00,0x70,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0xFC,
  0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x3F,
  0x00,0x00,0x00,0xFF,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x00,0xF8,
  0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,
  0x8E,0x00,0x8E,0x00,0x8E,0x00,0x8C,0x00,0x00,0x8C,0x00,0x8E,0x00,0x8E,0x00,0x8E,
  0x38,0x00,0x70,0x00,0x70,0x00,0x60,0x00,0x00,0x60,0x00,0x70,0x00,0x70,0x00,0x38,
  0x71,0x00,0x39,0x00,0x19,0x00,0x18,0x00,0x00,0x18,0x00,0x19,0x00,0x39,0x00,0x71,
  0xCC,0x00,0xCC,0x00,0xCC,0x00,0xCC,0x00,0x00,0xCC,0x00,0xCC,0x00,0xCC,0x00,0xCC,
  0x07,0x00,0x03,0x00,0x63,0x00,0x63,0x00,0x00,0x63,0x00,0x63,0x00,0x63,0x00,0x63,
  0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x1F,0x00,0x1F,0x00,0x1C,0x00,0x1C,
  0x00,0x00,0x00,0x00,0x01,0x00,0xF1,0x00,0x00,0xF1,0x00,0xF1,0x00,0x01,0x00,0x00,

  // Tile 32
  0x70,0x00,0xE0,0x00,0xC0,0x00,0x87,0x00,0x00,0x87,0x00,0x87,0x00,0xC0,0x00,0xE0,
  0x00,0x00,0x00,0x00,0x00,0x00,0xC1,0x00,0x00,0xC3,0x00,0xC3,0x00,0x07,0x00,0x07,
  0x70,0x00,0x70,0x00,0x38,0x00,0xF8,0x00,0x00,0x9C,0x00,0x9C,0x00,0x0E,0x00,0x0E,
  0x01,0x00,0x00,0x00,0x01,0x00,0x7F,0x00,0x00,0x7E,0x00,0x7F,0x00,0x61,0x00,0x60,
  0xC0,0x00,0xC0,0x00,0xC0,0x00,0x80,0x00,0x00,0x01,0x00,0x81,0x00,0xC3,0x00,0xC3,
  0x38,0x00,0x38,0x00,0x1C,0x00,0xFC,0x00,0x00,0xCE,0x00,0xCE,0x00,0x87,0x00,0x87,
  0x07,0x00,0x0E,0x00,0x1C,0x00,0x18,0x00,0x00,0x18,0x00,0x18,0x00,0x1C,0x00,0x0E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x3F,0x00,0x3F,0x00,0x38,0x00,0x38,
  0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0xE0,0x00,0xE0,0x00,0x00,0x00,0x00,
  0x01,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC7,0x00,0xC7,0x00,0xE3,0x00,0xF1,0x00,0xF0,0x00,0x78,0x00,0x3C,0x00,0x1F,0x00,
  0x3F,0x00,0x1F,0x00,0x83,0x00,0xC0,0x00,0xF8,0x00,0x7F,0x00,0x0F,0x00,0x00,0x00,
  0xF3,0x00,0xE3,0x00,0x07,0x00,0x0E,0x00,0x7C,0x00,0xF8,0x00,0xE0,0x00,0x03,0x00,
  0x8C,0x00,0x8C,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x63,0x00,0x63,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x1C,0x00,0x1F,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,

  // Tile 48
  0x00,0x00,0xF0,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x79,0x00,0x3F,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0xCE,0x00,0x8F,0x00,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x07,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x60,0x00,0x60,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0xC7,0x00,0xC7,0x00,0xCF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x03,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x87,0x00,0x83,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x80,0x00,0xFC,0x00,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0xFF,0x00,
  0x38,0x00,0x3F,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0xFE,0x00,
  0x00,0x00,0x80,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x0F,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x00,0xF8,0x00,0xFF,0x00,0x3F,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x03,0x00,0x7F,0x00,0xFE,0x00,0xF0,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  // Tile 64
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x02,0x02,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xE0,0x10,0x10,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x11,0x11,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE3,0xE3,0x14,0x14,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8C,0x8C,0x44,0x44,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,0x04,0x04,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0xD8,0x48,0x48,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC7,0xC7,0xC6,0xC6,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x23,0x23,0x01,0x01,
  0x04,0x04,0x05,0x05,0x05,0x05,0x04,0x04,0x02,0x02,0x01,0x01,0x00,0x00,0x00,0x00,
  0xE8,0xE8,0x08,0x08,0x28,0x28,0xC8,0xC8,0x10,0x10,0xE0,0xE0,0x00,0x00,0x00,0x00,
  0x11,0x11,0x11,0x11,0x10,0x10,0x10,0x10,0x10,0x10,0x39,0x39,0x00,0x00,0x00,0x00,
  0x14,0x14,0x13,0x13,0xF2,0xF2,0x24,0x24,0x64,0x64,0x83,0x83,0x00,0x00,0x00,0x00,
  0x44,0x44,0x84,0x84,0x84,0x84,0x44,0x44,0x44,0x44,0x8E,0x8E,0x00,0x00,0x00,0x00,
  0x04,0x04,0x07,0x07,0x04,0x04,0x04,0x04,0x04,0x04,0x0F,0x0F,0x00,0x00,0x00,0x00,

  // Tile 80
  0x40,0x40,0x8C,0x8C,0x42,0x42,0x4E,0x4E,0x52,0x52,0x8F,0x8F,0x00,0x00,0x00,0x00,
  0x48,0x48,0x4B,0x4B,0x49,0x49,0x49,0x49,0x48,0x48,0xFC,0xFC,0x00,0x00,0x03,0x03,
  0x00,0x00,0x70,0x70,0x20,0x20,0x40,0x40,0xC0,0xC0,0x81,0x81,0x80,0x80,0x00,0x00,
  0xC6,0xC6,0xAA,0xAA,0xAA,0xAA,0xAA,0xAA,0x92,0x92,0xD7,0xD7,0x00,0x00,0x00,0x00,
  0x01,0x01,0x67,0x67,0x29,0x29,0x29,0x29,0x29,0x29,0x77,0x77,0x00,0x00,0x00,0x00,
  0x00,0x00,0xDB,0xDB,0x4A,0x4A,0x5A,0x5A,0x24,0x24,0xA4,0xA4,0x00,0x00,0x00,0x00,
  0x00,0x00,0x66,0x66,0x12,0x12,0x72,0x72,0x91,0x91,0x79,0x79,0x01,0x01,0x06,0x06,
  0x00,0x00,0xE0,0xE0,0x40,0x40,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00
  };


// S0Palette 0
#define splashTilesS0P0C0 0
#define splashTilesS0P0C1 0
#define splashTilesS0P0C2 31
#define splashTilesS0P0C3 0


// S0Palette 1
#define splashTilesS0P1C0 0
#define splashTilesS0P1C1 31
#define splashTilesS0P1C2 1023
#define splashTilesS0P1C3 0


// S0Palette 2
#define splashTilesS0P2C0 0
#define splashTilesS0P2C1 1023
#define splashTilesS0P2C2 0
#define splashTilesS0P2C3 32767


// S0Palette 3
#define splashTilesS0P3C0 0
#define splashTilesS0P3C1 10570
#define splashTilesS0P3C2 22197
#define splashTilesS0P3C3 32767


// S0Palette 4
#define splashTilesS0P4C0 0
#define splashTilesS0P4C1 10570
#define splashTilesS0P4C2 22197
#define splashTilesS0P4C3 32767


// S0Palette 5
#define splashTilesS0P5C0 0
#define splashTilesS0P5C1 10570
#define splashTilesS0P5C2 22197
#define splashTilesS0P5C3 32767


// S0Palette 6
#define splashTilesS0P6C0 0
#define splashTilesS0P6C1 10570
#define splashTilesS0P6C2 22197
#define splashTilesS0P6C3 32767


// S0Palette 7
#define splashTilesS0P7C0 0
#define splashTilesS0P7C1 10570
#define splashTilesS0P7C2 22197
#define splashTilesS0P7C3 32767
// End include file

UWORD splashPalette[]=
{
  splashTilesS0P0C0,
  splashTilesS0P0C1,
  splashTilesS0P0C2,
  splashTilesS0P0C3,
  splashTilesS0P1C0,
  splashTilesS0P1C1,
  splashTilesS0P1C2,
  splashTilesS0P1C3,
  splashTilesS0P2C0,
  splashTilesS0P2C1,
  splashTilesS0P2C2,
  splashTilesS0P2C3,
  splashTilesS0P3C0,
  splashTilesS0P3C1,
  splashTilesS0P3C2,
  splashTilesS0P3C3,
  splashTilesS0P4C0,
  splashTilesS0P4C1,
  splashTilesS0P4C2,
  splashTilesS0P4C3,
  splashTilesS0P5C0,
  splashTilesS0P5C1,
  splashTilesS0P5C2,
  splashTilesS0P5C3,
  splashTilesS0P6C0,
  splashTilesS0P6C1,
  splashTilesS0P6C2,
  splashTilesS0P6C3,
  splashTilesS0P7C0,
  splashTilesS0P7C1,
  splashTilesS0P7C2,
  splashTilesS0P7C3
  };

// Map data - Graphics Studio


unsigned char splashMap[]=
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,
 0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,
 0x15,0x16,0x17,0x00,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x00,
 0x23,0x24,0x25,0x26,0x00,0x27,0x28,0x00,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,
 0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x00,0x00,0x3C,0x3D,0x3E,
 0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x40,0x41,0x42,0x43,0x44,0x45,0x40,0x46,0x47,0x48,0x49,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,
 0x53,0x54,0x55,0x56,0x57,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

unsigned char splashAttr[]=
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,
 0x01,0x01,0x01,0x01,0x00,0x01,0x01,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x02,0x02,0x02,
 0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x22,0x02,0x02,0x02,0x02,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,
 0x02,0x02,0x02,0x02,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

unsigned char stdAttr[]=
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };


unsigned char std_data[] = {

  /* Basic tiles (0xFC to 0xFF) */
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };

unsigned char std_data2[] = {

  /* Basic tiles (0xFC to 0xFF) */
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,
  0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
  };

unsigned char frame_data[] = {
  // Tile 0
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFF,0xFF,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x00,0x00,0x00,0x00,0x2A,0x2A,0x2A,0x2A,0x3A,0x3A,0x2A,0x2A,0x2A,0x2A,0x00,0x00,
  0x00,0x00,0x00,0x00,0xEE,0xEE,0x88,0x88,0xE8,0xE8,0x28,0x28,0xEE,0xEE,0x00,0x00,
  0x00,0x00,0x00,0x00,0xEE,0xEE,0xAA,0xAA,0xAE,0xAE,0xAC,0xAC,0xEA,0xEA,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0x84,0x84,0xC0,0xC0,0x84,0x84,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0xA0,0xA0,0xA0,0xA0,0xA0,0xA0,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0x40,0x40,0xC0,0xC0,0x40,0x40,0x40,0x40,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0x20,0x20,0xE0,0xE0,0x80,0x80,0xE0,0xE0,0x00,0x00,

  // Tile 16
  0x00,0x00,0x00,0x00,0xE0,0xE0,0x20,0x20,0x60,0x60,0x20,0x20,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0xA0,0xA0,0xA0,0xA0,0xE0,0xE0,0x20,0x20,0x20,0x20,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0x80,0x80,0xE0,0xE0,0x20,0x20,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,0xE0,0xE0,0xA0,0xA0,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0xA0,0xA0,0xE0,0xE0,0xA0,0xA0,0xE0,0xE0,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE0,0xE0,0xA0,0xA0,0xE0,0xE0,0x20,0x20,0x20,0x20,0x00,0x00,
  0x10,0x10,0x10,0x10,0x28,0x28,0x28,0x28,0x44,0x44,0x44,0x44,0xAA,0xAA,0x92,0x92,
  0x04,0x04,0x0C,0x0C,0x14,0x14,0x24,0x24,0x44,0x44,0xC4,0xC4,0x3C,0x3C,0x04,0x04,
  0x00,0x00,0x0E,0x0E,0x72,0x72,0x82,0x82,0x44,0x44,0x44,0x44,0x74,0x74,0x08,0x08,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0x42,0x42,0x44,0x44,0x48,0x48,0x30,0x30,0x20,0x20,
  0xC0,0xC0,0x30,0x30,0x4C,0x4C,0x83,0x83,0x4C,0x4C,0x30,0x30,0xC0,0xC0,0x00,0x00,
  0x20,0x20,0x30,0x30,0x48,0x48,0x44,0x44,0x42,0x42,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x08,0x08,0x74,0x74,0x44,0x44,0x44,0x44,0x82,0x82,0x72,0x72,0x0E,0x0E,0x00,0x00,
  0x04,0x04,0x3C,0x3C,0xC4,0xC4,0x44,0x44,0x24,0x24,0x14,0x14,0x0C,0x0C,0x04,0x04,
  0x49,0x49,0x55,0x55,0x22,0x22,0x22,0x22,0x14,0x14,0x14,0x14,0x08,0x08,0x08,0x08,

  // Tile 32
  0x20,0x20,0x3C,0x3C,0x23,0x23,0x22,0x22,0x24,0x24,0x28,0x28,0x30,0x30,0x20,0x20,
  0x10,0x10,0x2E,0x2E,0x22,0x22,0x22,0x22,0x41,0x41,0x4E,0x4E,0x70,0x70,0x00,0x00,
  0x04,0x04,0x0C,0x0C,0x12,0x12,0x22,0x22,0x42,0x42,0xFF,0xFF,0x00,0x00,0x00,0x00,
  0x00,0x00,0x03,0x03,0x0C,0x0C,0x32,0x32,0xC1,0xC1,0x32,0x32,0x0C,0x0C,0x03,0x03,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0x42,0x42,0x22,0x22,0x12,0x12,0x0C,0x0C,0x04,0x04,
  0x00,0x00,0x70,0x70,0x4E,0x4E,0x41,0x41,0x22,0x22,0x22,0x22,0x2E,0x2E,0x10,0x10,
  0x20,0x20,0x30,0x30,0x28,0x28,0x24,0x24,0x22,0x22,0x23,0x23,0x3C,0x3C,0x20,0x20,
  0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0x40,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x20,0x20,0x40,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x20,0x20,0xC0,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xC0,0xC0,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x80,0x40,0x40,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0x40,0x40,0x40,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

  // Tile 48
  0x40,0x40,0x40,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x20,0x20,0x40,0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x60,0x60,0x80,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x80,0x60,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x80,0x80,0x40,0x40,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x40,0x40,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x24,0x24,0x18,0x18,0x18,0x18,0x24,0x24,0x00,0x00,0x00,0x00,
  0x10,0x10,0x52,0x52,0x24,0x24,0xC8,0xC8,0x23,0x23,0x48,0x48,0x94,0x94,0x10,0x10,
  0xA9,0xA9,0x42,0x42,0x24,0x24,0x00,0x00,0xC3,0xC3,0x00,0x00,0x4A,0x4A,0x89,0x89,
  0x89,0x89,0x42,0x42,0x00,0x00,0x80,0x80,0x01,0x01,0x00,0x00,0x42,0x42,0x89,0x89,
  0x14,0x14,0x40,0x40,0x01,0x01,0x80,0x80,0x01,0x01,0x80,0x80,0x02,0x02,0x28,0x28,
  0x28,0x28,0x02,0x02,0x80,0x80,0x01,0x01,0x80,0x80,0x01,0x01,0x40,0x40,0x14,0x14,
  0x14,0x14,0x40,0x40,0x11,0x11,0xA8,0xA8,0x45,0x45,0xFE,0xFE,0x02,0x02,0x28,0x28,
  0x28,0x28,0x02,0x02,0x90,0x90,0x29,0x29,0xC4,0xC4,0xFF,0xFF,0x40,0x40,0x14,0x14,
  0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x38,0x5C,0x5C,0xFF,0xFF,0x42,0x42,0x81,0x81,

  // Tile 64
  0x02,0x02,0x04,0x04,0xD8,0xD8,0x38,0x38,0x54,0x54,0xFE,0xFE,0x08,0x08,0x04,0x04,
  0x40,0x40,0x20,0x20,0x10,0x10,0x2F,0x2F,0x54,0x54,0xFE,0xFE,0x20,0x20,0x20,0x20,
};

unsigned char bkg_tiles[] = {
  0x80
  };

/*
 */

unsigned char frame_tiles[] = {
  0x81,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x83,0x88,0xA3,
  0x80,0x80,0x80,0x80,0x80,0x8A,0x8B,0x8C,0x80,0x80,0x80,0x84,0x88,0x80,0x80,0xA3,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x84,0x88,0xA3,0x80,0x80,0x80,0x80,
  0x89,0x8A,0x8B,0x8C,0x80,0x80,0x80,0x84,0x87,0x86,0x86,0x86,0x86,0x86,0x86,0x86,
  0x86,0x86,0x86,0x86,0x86,0x85};

UWORD palettes1[]={
  RGB(0x00,0x00,0x00),
  RGB(0x0c,0x0c,0x0c),
  RGB(0x18,0x18,0x18),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x1f,0x1f,0x00),
  RGB(0x18,0x18,0x00),
  RGB(0x0c,0x0c,0x00),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x00,0x1f),
  RGB(0x18,0x00,0x18),
  RGB(0x0c,0x00,0x0c),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x00,0x00),
  RGB(0x18,0x00,0x00),
  RGB(0x0c,0x00,0x00),
  RGB(0x00,0x00,0x00),
  RGB(0x00,0x1f,0x1f),
  RGB(0x00,0x18,0x18),
  RGB(0x00,0x0c,0x0c),
  RGB(0x00,0x00,0x00),
  RGB(0x00,0x1f,0x00),
  RGB(0x00,0x18,0x00),
  RGB(0x00,0x0c,0x00),
  RGB(0x00,0x00,0x00),
  RGB(0x00,0x1f,0x1f),
  RGB(0x00,0x0c,0x18),
  RGB(0x00,0x04,0x0c),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x00),
  RGB(0x18,0x0c,0x00),
  RGB(0x0c,0x04,0x00),
  RGB(0x00,0x00,0x00),
};
UWORD palettes2[]={
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
  RGB(0x1f,0x1f,0x1f),
  RGB(0x00,0x08,0x1f),
  RGB(0x00,0x1f,0x08),
  RGB(0x00,0x00,0x00),
};

#define NBSFRAMES 0x07                  /* Nb frames for the sprite */
#define WINSZX    112L                  /* Size of the picture in the window */
#define WINSZY    40L
#define MINWINX   24L /* Bounds of the window origin */
#define MINWINY   48L
#define MAXWINX   MINWINX+WINSZX
#define MAXWINY   MINWINY+WINSZY
#define FADESTEP  0x10                  /* Nb steps for the fading effect */
#define STARTFADE (0x06*FADESTEP)       /* Initial value for the fading effect */

UBYTE time;         /* Global "time" value (counter) */
UBYTE color;        /* Current color for fading effect */
UBYTE sframe;       /* Current frame of the sprite */
struct item_coords
{
  UBYTE type;
  UBYTE sprite;
  UBYTE ind;
  UWORD pos_x, pos_y; /* Sprite position (fixed point) */
  signed long speed_x, speed_y;   /* Sprite speed (fixed point) */
} ship, enemies[30], myshots[4], theirshots[4], explosions[6];

void fade();
void scroll();
void place_sprite();

int scnt;

/* Fade the screen (off and on) */
void fade()
{
  if(color == 0)
    return;
  switch(color)
    {
    case STARTFADE:
    case STARTFADE-4*FADESTEP:
      BGP_REG = 0xF9U;
      break;
    case STARTFADE-FADESTEP:
    case STARTFADE-3*FADESTEP:
      BGP_REG = 0xFEU;
      break;
    case STARTFADE-2*FADESTEP:
      BGP_REG = 0xFFU;
      break;
    case STARTFADE-5*FADESTEP:
      BGP_REG = 0xE4U;
      break;
    }
  color--;
}

#define FP 7
#define SPRITEWIDTH (8L)
#define SPRITEHEIGHT (8L)
#define SWIDTH (160L)
#define SHEIGHT (144L)
#define MAXMARCH 150L
#define MAXSPEED 210L


/* Scroll the background, the window and the sprite */
void move_ship()
{
  int done_x=0, done_y=0;
  signed long old_x, new_x, old_y, new_y;

  old_x=(((signed long)ship.pos_x) >> FP)  - 8L;
  old_y=(((signed long)ship.pos_y) >> FP) - 16L;
  new_x=(((signed long)ship.pos_x + ship.speed_x) >> FP) - 8L;
  new_y=(((signed long)ship.pos_y + ship.speed_y) >> FP) - 16L;

  if (new_x < 0L)
    {
      ship.pos_x = (-new_x + 8L) << FP;
      ship.speed_x = -ship.speed_x;
      done_x = 1;
      ship.speed_x >>= 1;
    }
  if (new_y < 0L)
    {
      ship.pos_y = (-new_y + 16L) << FP;
      ship.speed_y = -ship.speed_y;
      done_y = 1;
      ship.speed_y >>= 1;
    }

  if ((new_x + SPRITEWIDTH) > SWIDTH)
    {
      ship.pos_x = (2*(SWIDTH - SPRITEWIDTH) - new_x + 8) << FP;
      ship.speed_x = - ship.speed_x;
      done_x = 1;
      ship.speed_x >>= 1;
    }
  if ((new_y + SPRITEHEIGHT) > SHEIGHT)
    {
      ship.pos_y = (2*(SHEIGHT - SPRITEHEIGHT) - new_y + 16) << FP;
      ship.speed_y = - ship.speed_y;
      done_y = 1;
      ship.speed_y >>= 1;
    }

  if (((old_y + SPRITEHEIGHT) < MINWINY) &&
      ((new_y + SPRITEHEIGHT) >= MINWINY) &&
      ((new_x + SPRITEWIDTH) >= MINWINX) &&
      (new_x <= MAXWINX))
    {
      ship.speed_y = - ship.speed_y;
      ship.speed_y >>= 1;
    }

  if (((old_x + SPRITEWIDTH) < MINWINX) &&
      ((new_x + SPRITEWIDTH) >= MINWINX) &&
      ((new_y + SPRITEHEIGHT) >= MINWINY) &&
      (new_y <= MAXWINY))
    {
      ship.speed_x = - ship.speed_x;
      ship.speed_x >>= 1;
    }

  if ((old_y > MAXWINY) &&
      (new_y <= MAXWINY) &&
      ((new_x + SPRITEWIDTH) >= MINWINX) &&
      (new_x <= MAXWINX))
    {
      ship.speed_y = - ship.speed_y;
      ship.speed_y >>= 1;
    }

  if ((old_x > MAXWINX) &&
      (new_x <= MAXWINX) &&
      ((new_y + SPRITEHEIGHT) >= MINWINY) &&
      (new_y <= MAXWINY))
    {
      ship.speed_x = 0 - ship.speed_x;
      ship.speed_x >>= 1;
    }

  if (!done_x)
    ship.pos_x += ship.speed_x;
  if (!done_y)
    ship.pos_y += ship.speed_y;

  move_sprite(0, (ship.pos_x >> FP), (ship.pos_y >> FP));
}

UBYTE startframes[]={0,59,61,63,55};
UBYTE endframes[]={0,60,62,65,58};

void move_enemies()
{
  int done_x, done_y;
  signed long old_x, new_x, old_y, new_y, dx,dy;
  int i;

  for (i=0;i<30;i++)
    if (enemies[i].type>0)
      {
	if (!(scnt--))
	  {
	    set_sprite_tile(enemies[i].sprite, enemies[i].ind);
	    
	    if (enemies[i].ind==endframes[enemies[i].type])
	      enemies[i].ind=startframes[enemies[i].type];
	    else
	      enemies[i].ind++;
	    scnt=4;
	  }
	
	done_x=done_y=0;
	old_x=(((signed long)enemies[i].pos_x) >> FP)  - 8L;
	old_y=(((signed long)enemies[i].pos_y) >> FP) - 16L;
	new_x=(((signed long)enemies[i].pos_x + enemies[i].speed_x) >> FP) - 8L;
	new_y=(((signed long)enemies[i].pos_y + enemies[i].speed_y) >> FP) - 16L;

	if (new_x < 0L)
	  {
	    enemies[i].pos_x = (-new_x + 8L) << FP;
	    enemies[i].speed_x = -enemies[i].speed_x;
	    done_x = 1;
	    enemies[i].speed_x >>= 1;
	  }
	if (new_y < 0L)
	  {
	    enemies[i].pos_y = (-new_y + 16L) << FP;
	    enemies[i].speed_y = -enemies[i].speed_y;
	    done_y = 1;
	    enemies[i].speed_y >>= 1;
	  }

	if ((new_x + SPRITEWIDTH) > SWIDTH)
	  {
	    enemies[i].pos_x = (2*(SWIDTH - SPRITEWIDTH) - new_x + 8) << FP;
	    enemies[i].speed_x = - enemies[i].speed_x;
	    done_x = 1;
	    enemies[i].speed_x >>= 1;
	  }
	if ((new_y + SPRITEHEIGHT) > SHEIGHT)
	  {
	    enemies[i].pos_y = (2*(SHEIGHT - SPRITEHEIGHT) - new_y + 16) << FP;
	    enemies[i].speed_y = - enemies[i].speed_y;
	    done_y = 1;
	    enemies[i].speed_y >>= 1;
	  }

	if (((old_y + SPRITEHEIGHT) < MINWINY) &&
	    ((new_y + SPRITEHEIGHT) >= MINWINY) &&
	    ((new_x + SPRITEWIDTH) >= MINWINX) &&
	    (new_x <= MAXWINX))
	  {
	    enemies[i].speed_y = - enemies[i].speed_y;
	    enemies[i].speed_y >>= 1;
	  }

	if (((old_x + SPRITEWIDTH) < MINWINX) &&
	    ((new_x + SPRITEWIDTH) >= MINWINX) &&
	    ((new_y + SPRITEHEIGHT) >= MINWINY) &&
	    (new_y <= MAXWINY))
	  {
	    enemies[i].speed_x = - enemies[i].speed_x;
	    enemies[i].speed_x >>= 1;
	  }

	if ((old_y > MAXWINY) &&
	    (new_y <= MAXWINY) &&
	    ((new_x + SPRITEWIDTH) >= MINWINX) &&
	    (new_x <= MAXWINX))
	  {
	    enemies[i].speed_y = - enemies[i].speed_y;
	    enemies[i].speed_y >>= 1;
	  }

	if ((old_x > MAXWINX) &&
	    (new_x <= MAXWINX) &&
	    ((new_y + SPRITEHEIGHT) >= MINWINY) &&
	    (new_y <= MAXWINY))
	  {
	    enemies[i].speed_x = 0 - enemies[i].speed_x;
	    enemies[i].speed_x >>= 1;
	  }

	if (!done_x)
	  enemies[i].pos_x += enemies[i].speed_x;
	if (!done_y)
	  enemies[i].pos_y += enemies[i].speed_y;

	move_sprite(enemies[i].sprite, (enemies[i].pos_x >> FP), (enemies[i].pos_y >> FP));
	if (enemies[i].type==3)
	  {
	    old_x=(((signed long)ship.pos_x) >> FP)  - 8L;
	    old_y=(((signed long)ship.pos_y) >> FP) - 16L;
	    dx=(signed long)old_x-new_x; // relative to FRIENDLY SHIP
	    dy=(signed long)old_y-new_y;
	    enemies[i].speed_x+=(dx>>6);
	    enemies[i].speed_y+=(dy>>6);
	    
	  }
      }
}

long rockx[]={0,   5,   8,  11, 12, 11, 8, 5,  0,  -5, -8, -11, -12, -11, -8, -5,  0};
long rocky[]={-12, -11, -8, -5, 0,  5,  8, 11, 12, 11, 8,  5,   0,   -5,  -8, -11, -12};

#define sign_l(x) (((x) > 0)?1:0 - ((x) < 0)?1:0)
#define abs_l(x) (((x) > 0)?(x):(0 -(x)))

void main()
{
  UBYTE i, j, lc=0, rc=0;
  UWORD sc=1024;
  long sdir=12;

  disable_interrupts();
  DISPLAY_OFF;
  LCDC_REG = 0x41;
  /*
   * LCD        = Off
   * WindowBank = 0x9C00
   * Window     = Off
   * BG Chr     = 0x8800
   * BG Bank    = 0x9800
   * OBJ        = 8x8
   * OBJ        = Off
   * BG         = On
   */

  BGP_REG = OBP0_REG = OBP1_REG = 0xE4U;
  set_bkg_palette(0, 8, splashPalette);
  set_bkg_data(0, 88, splashTiles);
  VBK_REG=1;
  set_bkg_tiles(0, 0, 20, 18, splashAttr);
  VBK_REG=0;
  set_bkg_tiles(0, 0, 20, 18, splashMap);

  SCX_REG = 0;
  SCY_REG = 0;
  DISPLAY_ON;
  enable_interrupts();

  while (1)
    {
      i = joypad();
      if (i&J_START)
	break;
    }
  while (joypad()&J_START);
  /* Set palettes */

  disable_interrupts();
  DISPLAY_OFF;

  LCDC_REG = 0x43;

  VBK_REG=1;
  for (i=0; i<32; i++)
    set_bkg_tiles(0, i, 32, 1, stdAttr);

  VBK_REG=0;

  set_bkg_palette(0,8,palettes1);
  set_sprite_palette(0,8,palettes1);

  /* Initialize the background */
  set_bkg_data(0xFC, 0x04, std_data);
  set_bkg_data(0x80, 66, frame_data);
  /*
   * Draw the background
   *
   * Width  = 0x100 = 0x20 * 8
   * Height = 0x100 = 0x20 * 8
   */
  for(i = 0; i < 32; i++)
    for(j = 0; j < 32; j++)
      set_bkg_tiles(i, j, 1, 1, bkg_tiles);
  SCX_REG = 0;
  SCY_REG = 0;

  VBK_REG=0;
  set_bkg_tiles(MINWINX/8, MINWINY/8, 14, 5, frame_tiles);

  /* Initialize the sprite */
  set_sprite_data(0x00, 66, frame_data);
  set_sprite_prop(0, 0x00);
  set_sprite_tile(0, 23);
  sframe = 0;
  ship.pos_x  = 145UL << FP;
  ship.pos_y  = 40UL << FP;
  ship.speed_x  = 0;
  ship.speed_y  = 0;
  move_sprite(0, (ship.pos_x >> FP), (ship.pos_y >> FP));

  for (i=0;i<30;i++)
    enemies[i].type=0;
  enemies[0].pos_x=30L << FP;
  enemies[0].pos_y=30L << FP;
  enemies[0].speed_x=100;
  enemies[0].speed_y=100;
  enemies[0].type=3;
  enemies[0].sprite=1;
  enemies[0].ind=startframes[enemies[0].type];
  set_sprite_prop(enemies[0].sprite, 0x00);
  set_sprite_tile(enemies[0].sprite, enemies[0].ind);
  move_sprite(1,(enemies[0].pos_x >> FP),(enemies[0].pos_y >> FP));

  DISPLAY_ON;
  enable_interrupts();

  while(1)
    {
      wait_vbl_done();
      time++;
      fade();
      move_ship();
      move_enemies();
      i = joypad();
      if(i & J_SELECT)
	color = STARTFADE;
      if(i & (J_UP|J_B))
	{
	  ship.speed_y += rocky[sdir];
	  ship.speed_x += rockx[sdir];
	  sc=1024;
	}
      else if (--sc)
	{
	  sc=1024;
	  if (abs_l(ship.speed_x) > MAXMARCH) {
	    ship.speed_x -= sign_l(ship.speed_x);
	  }
	  if (abs_l(ship.speed_y) > MAXMARCH) {
	    ship.speed_y -= sign_l(ship.speed_y);
	    }
	  }
      if(i & J_LEFT)
	{
	  if (!lc)
	    {
	      if (sdir>0)
		sdir-=1;
	      else
		sdir=15;
	      lc = 3;
	    }
	  else
	    lc--;
	}
      else
	lc=0;

      if(i & J_RIGHT)
	{
	  if (!rc)
	    {
	      sdir=(sdir+1)%16;
	      rc=4;
	    }
	  else
	    rc--;
	}
      else
	rc=0;

      set_sprite_tile(0, 23 + sdir);

      if (abs_l(ship.speed_x) > MAXSPEED) {
	if (ship.speed_x>0) {
	  ship.speed_x = MAXSPEED;
	} else {
	  ship.speed_x = 0-MAXSPEED;
	}
      }
      if (abs_l(ship.speed_y) > MAXSPEED) {
	if (ship.speed_y>0) {
	  ship.speed_y = MAXSPEED;
	} else {
	  ship.speed_y = 0-MAXSPEED;
	}
      }
    }
}
