#include "Terminus.h"

static const unsigned char Terminus_data[] = {
  0x07, 0xA0, 0x5E, 0x24, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x58, 0x60, 0x00, 0x20, 0x30, 0x80, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x20, 0x02, 0x47, 0x8E, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x40, 
  0xF0, 0x3F, 0x20, 0x78, 0x1F, 0x90, 0x3C, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x03, 
  0x00, 0xF0, 0x3F, 0x07, 0x80, 0x78, 0x07, 0x83, 0xF0, 0x3C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x30, 0x00, 0x06, 0xC1, 0xF8, 0x1E, 0x00, 0xC0, 0x30, 0x07, 0x81, 0xF8, 0x36, 0x40, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x03, 0x08, 0x1E, 0x01, 0x80, 0x7C, 0x83, 0x60, 0x3E, 0x40, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x20, 0x02, 0x43, 0x0E, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 
  0x01, 0x80, 0x61, 0x43, 0x00, 0x30, 0x03, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x06, 
  0x00, 0x61, 0x40, 0xC0, 0x30, 0x0C, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0x80, 
  0x60, 0x3F, 0x01, 0x80, 0x78, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x40, 0x60, 0x3F, 
  0x20, 0x30, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x3C, 0x00, 0x40, 0x60, 0x18, 0x00, 0x00, 0x00, 
  0x15, 0xA1, 0x38, 0x00, 0x0F, 0xCB, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x3C, 0x00, 0x40, 0x61, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x40, 0x19, 0x00, 0xC4, 0x06, 0x10, 0x30, 0x40, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x81, 0x98, 0x37, 0x07, 0xE0, 0xEC, 0x83, 0x30, 0x3C, 0x40, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x03, 0x00, 0xE1, 0x61, 0x80, 0x78, 0x80, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x88, 0x33, 0x00, 0x60, 0x18, 0x06, 0x01, 0x80, 0x7E, 0x40, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x81, 0x98, 0x03, 0x01, 0xC4, 0x01, 0x83, 0x30, 
  0x3C, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x00, 0xC0, 0x38, 0x0F, 0x03, 0x60, 0xCC, 
  0x1F, 0x90, 0x06, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0xC8, 0x30, 0x07, 0xC4, 
  0x01, 0x83, 0x30, 0x3C, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x88, 0x30, 0x07, 
  0xC4, 0x99, 0x81, 0xE2, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0xC8, 0x03, 0x20, 0x18, 
  0x90, 0xC2, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x88, 0x33, 0x03, 0xC4, 0x99, 0x81, 
  0xE2, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x89, 0x33, 0x03, 0xE4, 0x01, 0x81, 0xE2, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x40, 0x61, 0x00, 0x04, 0x06, 0x10, 0x00, 0x00, 0x00, 
  0x15, 0xA1, 0x34, 0x00, 0x40, 0x61, 0x00, 0x04, 0x06, 0x01, 0x80, 0x00, 0x00, 0x00, 0x15, 0xA1, 
  0x32, 0x00, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x30, 0x03, 0x00, 0x32, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x34, 0x00, 0x0F, 0xC8, 0x00, 0x07, 0xE5, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x32, 0x00, 0x06, 
  0x00, 0x60, 0x06, 0x00, 0x60, 0x18, 0x06, 0x01, 0x82, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 
  0x07, 0x88, 0x33, 0x00, 0xC0, 0x30, 0x00, 0x10, 0x18, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 
  0x00, 0x07, 0x81, 0x98, 0x37, 0x20, 0xFC, 0x1B, 0x83, 0x00, 0x3E, 0x40, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x30, 0x00, 0x07, 0x89, 0x33, 0x07, 0xE4, 0x99, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 
  0x00, 0x0F, 0x88, 0x33, 0x07, 0xC4, 0x99, 0x83, 0xE2, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 
  0x07, 0x81, 0x99, 0x46, 0x00, 0xCC, 0x0F, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 
  0x01, 0xB1, 0x46, 0x60, 0xD8, 0x1E, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0xC8, 
  0x30, 0x07, 0xC4, 0x98, 0x03, 0xF2, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0xC8, 0x30, 
  0x07, 0xC5, 0x18, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x81, 0x99, 0x06, 0x00, 
  0xFC, 0x83, 0x30, 0x3C, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x49, 0x98, 0x3F, 0x28, 
  0xCC, 0x80, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x8C, 0x0C, 0x03, 0xC4, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x03, 0xCA, 0x06, 0x20, 0xD8, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x30, 0x00, 0x0C, 0xC1, 0xB0, 0x3C, 0x20, 0xE0, 0x1E, 0x03, 0x60, 0x66, 0x40, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x69, 0x80, 0x3F, 0x20, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 
  0x0C, 0xC9, 0x3F, 0x28, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x41, 0x98, 0x3B, 
  0x07, 0xE0, 0xDC, 0x93, 0x32, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x8C, 0x33, 0x03, 
  0xC4, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0x89, 0x33, 0x07, 0xC4, 0x98, 0x10, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x8B, 0x33, 0x07, 0xE0, 0x78, 0x01, 0x80, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0x89, 0x33, 0x07, 0xC0, 0xF0, 0x1B, 0x03, 0x32, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x81, 0x98, 0x30, 0x03, 0xC4, 0x01, 0x83, 0x30, 0x3C, 0x40, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x0F, 0xCD, 0x0C, 0x20, 0x00, 0x00, 0x00, 0x15, 0xA1, 
  0x30, 0x00, 0x69, 0x98, 0x1E, 0x20, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x49, 0x99, 0x23, 
  0xC4, 0x06, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x51, 0x99, 0x27, 0xE0, 0xCC, 0x80, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x41, 0x98, 0x1E, 0x20, 0x30, 0x0F, 0x10, 0x66, 0x40, 
  0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x41, 0x99, 0x03, 0xC5, 0x06, 0x10, 0x00, 0x00, 0x00, 
  0x15, 0xA1, 0x30, 0x00, 0x0F, 0xC0, 0x18, 0x06, 0x01, 0x80, 0x60, 0x83, 0x00, 0x7E, 0x40, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x8C, 0x18, 0x03, 0xC4, 0x00, 0x00, 0x00, 0x15, 0xA1, 
  0x30, 0x00, 0x40, 0xC1, 0x01, 0x84, 0x03, 0x10, 0x06, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 
  0x00, 0x07, 0x8C, 0x06, 0x03, 0xC4, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x20, 0x00, 0x18, 0x07, 0x81, 
  0x99, 0xC0, 0x00, 0x00, 0x15, 0xA1, 0x3E, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x15, 0xA1, 
  0x21, 0x80, 0x18, 0x78, 0x00, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0x80, 0x18, 0x1F, 
  0x20, 0xCC, 0x0F, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x41, 0x80, 0x3E, 0x28, 0xCC, 
  0x1F, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0x81, 0x99, 0x06, 0x00, 0xCC, 0x0F, 
  0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x40, 0x18, 0x1F, 0x28, 0xCC, 0x0F, 0x90, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0x81, 0x98, 0x3F, 0x20, 0xC0, 0x0F, 0x90, 0x00, 0x00, 
  0x00, 0x15, 0xA1, 0x30, 0x00, 0x01, 0xC0, 0x60, 0x1E, 0x2C, 0x30, 0x80, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x34, 0x00, 0x07, 0xCA, 0x33, 0x03, 0xE0, 0x0C, 0x0F, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 
  0x41, 0x80, 0x3E, 0x2C, 0xCC, 0x80, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x20, 0x02, 0x03, 0x00, 0x00, 
  0x1C, 0x28, 0x30, 0x0F, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x20, 0x02, 0x00, 0xC0, 0x00, 0x07, 
  0x2C, 0x0C, 0x0D, 0x80, 0xE0, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x40, 0xC0, 0x1B, 0x03, 0xC4, 
  0x0E, 0x01, 0xE0, 0x36, 0x40, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x07, 0x0C, 0x0C, 0x03, 
  0xC4, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x0F, 0x8B, 0x3F, 0x20, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x34, 0x00, 0x0F, 0x8B, 0x33, 0x20, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0x8A, 
  0x33, 0x03, 0xC4, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x0F, 0x8A, 0x33, 0x07, 0xC4, 0x18, 
  0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0xCA, 0x33, 0x03, 0xE4, 0x01, 0x80, 0x00, 0x15, 0xA1, 
  0x34, 0x00, 0x0F, 0xC1, 0xC1, 0x46, 0x04, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x07, 0xC1, 
  0x80, 0x1E, 0x20, 0x0C, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x40, 0x60, 0x1E, 
  0x28, 0x30, 0x03, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x59, 0x98, 0x1F, 0x20, 0x00, 
  0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x41, 0x99, 0x03, 0xC4, 0x06, 0x10, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x34, 0x00, 0x41, 0x99, 0x27, 0xE0, 0x78, 0x80, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 
  0x0C, 0xC0, 0xF1, 0x01, 0x80, 0x78, 0x19, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x59, 
  0x98, 0x1F, 0x00, 0x60, 0x78, 0x00, 0x00, 0x15, 0xA1, 0x34, 0x00, 0x0F, 0xC0, 0x30, 0x0C, 0x03, 
  0x00, 0xC0, 0x1F, 0x90, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x01, 0xC8, 0x0C, 0x03, 0x04, 
  0x86, 0x00, 0x72, 0x00, 0x00, 0x00, 0x15, 0xA1, 0x30, 0x00, 0x70, 0x61, 0x00, 0x00, 0x00, 0x15, 
  0xA1, 0x30, 0x00, 0x07, 0x08, 0x06, 0x00, 0x64, 0x83, 0x01, 0xC2, 0x00, 0x00, 0x00, 0x15, 0xA1, 
  0x20, 0x00, 0x36, 0x0F, 0xC1, 0xB1, 0xC0, 0x00, 0x00
};
/* Size: 1321 bytes */

static const unsigned char Terminus_index[] = {
  0x00, 0x00, 0x14, 0x09, 0x01, 0xB0, 0x56, 0x0F, 0xC2, 0x90, 0x63, 0x0D, 0x81, 0xEC, 0x45, 0x09, 
  0x91, 0x4C, 0x2C, 0x05, 0xC8, 0xC2, 0x1A, 0x23, 0x8C, 0x78, 0x90, 0x32, 0x2A, 0x49, 0xC9, 0xC1, 
  0x47, 0x2A, 0xA5, 0x90, 0xB9, 0x98, 0x03, 0x1C, 0x67, 0xCD, 0x59, 0xBC, 0x39, 0xA7, 0x7C, 0xF6, 
  0x9F, 0xC4, 0x16, 0x86, 0x91, 0x4A, 0x37, 0x49, 0x09, 0x55, 0x30, 0xA6, 0xF5, 0x02, 0xA3, 0x14, 
  0xCA, 0xA8, 0x56, 0x8B, 0x09, 0x68, 0xAE, 0x15, 0xE6, 0xBF, 0x98, 0x4B, 0x16, 0x64, 0x6C, 0xCD, 
  0xA0, 0x35, 0x26, 0xBC, 0xDB, 0x5B, 0xCB, 0x84, 0x71, 0xCE, 0x61, 0xD3, 0xBB, 0x57, 0x88, 0xF4, 
  0x9F, 0x0B, 0xEF, 0x7F, 0x90, 0x26, 0x0C, 0x42, 0x78, 0x71, 0x11, 0x22, 0x7C, 0x5A, 0x8C, 0xD1, 
  0xCA, 0x3F, 0x48, 0xA9, 0x33, 0x29, 0xE5, 0x94, 0xBF, 0x99, 0x93, 0x6E, 0x73, 0xCF, 0x7A, 0x0D, 
  0x43, 0xE8, 0xF0
};
/* Size: 131 bytes */

const ILI9341_t3_font_t Terminus = {
    Terminus_index,
    0,
    Terminus_data,
    1,
    0,
    32,
    126,
    0,
    0,
    11,
    4,
    4,
    2,
    2,
    4,
    0,
    13
};