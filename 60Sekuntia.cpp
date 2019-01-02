#include "60Sekuntia.h"

static const unsigned char Sekuntia_data[] = {
  0x04, 0x84, 0x0B, 0xC3, 0x00, 0x00, 0x07, 0x84, 0x16, 0x00, 0x69, 0x80, 0x08, 0x31, 0x20, 0x00, 
  0x00, 0x08, 0x84, 0x1A, 0x00, 0x20, 0xF0, 0x58, 0x20, 0x20, 0x00, 0x74, 0x00, 0x00, 0x0C, 0x84, 
  0x2A, 0xC0, 0x02, 0x8E, 0xA0, 0x30, 0x01, 0x68, 0x0F, 0x04, 0x80, 0x00, 0x00, 0x00, 0x0E, 0x84, 
  0x30, 0x00, 0x00, 0x08, 0x00, 0xFE, 0x03, 0xFC, 0x20, 0xF8, 0x00, 0xFE, 0x00, 0x7E, 0x00, 0x7C, 
  0x0E, 0xB8, 0x1F, 0xF0, 0x0F, 0x80, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x32, 0x00, 
  0x00, 0x0E, 0xE0, 0x3D, 0x40, 0x7E, 0x00, 0xF8, 0x00, 0xD0, 0x04, 0x7C, 0x08, 0xA8, 0x13, 0x50, 
  0x24, 0xE0, 0x40, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 0x00, 
  0x00, 0x10, 0x01, 0xF0, 0x91, 0xF8, 0x07, 0xC0, 0x3F, 0xE0, 0xFF, 0x03, 0xBC, 0x0F, 0xF8, 0x1F, 
  0x44, 0x80, 0x00, 0x00, 0x00, 0x06, 0x84, 0x12, 0x00, 0x82, 0x3C, 0x08, 0x00, 0x00, 0x07, 0x84, 
  0x16, 0x00, 0x04, 0x71, 0x80, 0x81, 0x08, 0x00, 0x00, 0x07, 0x84, 0x16, 0x00, 0x0C, 0x04, 0x58, 
  0xC0, 0x88, 0x31, 0x20, 0x00, 0x00, 0x18, 0x84, 0x58, 0x00, 0x01, 0x00, 0x00, 0x00, 0xC0, 0x00, 
  0x00, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0xE6, 0x00, 0x00, 0x59, 0x80, 0x00, 0x36, 0x40, 0x12, 
  0x7D, 0x00, 0x17, 0x95, 0xB0, 0x13, 0xFD, 0xC8, 0x1F, 0x93, 0x00, 0x0C, 0xA1, 0x6E, 0x03, 0xE0, 
  0x27, 0x00, 0xF0, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x84, 0x2A, 0x40, 0x02, 
  0x03, 0x82, 0x4F, 0xE2, 0x43, 0x82, 0x80, 0x00, 0x00, 0x00, 0x07, 0x84, 0x17, 0x40, 0x04, 0x00, 
  0x51, 0xC0, 0x80, 0x00, 0x00, 0x09, 0x84, 0x1F, 0x00, 0x10, 0x78, 0xD0, 0x00, 0x00, 0x08, 0x84, 
  0x1B, 0xC0, 0x06, 0x10, 0x71, 0x20, 0x00, 0x00, 0x08, 0x84, 0x1A, 0x00, 0x01, 0x12, 0x31, 0x02, 
  0x12, 0x60, 0x20, 0x90, 0x00, 0x00, 0x0C, 0x84, 0x28, 0x00, 0x00, 0xF0, 0x0F, 0xC0, 0x7F, 0x30, 
  0xE7, 0x03, 0xF0, 0x0F, 0x09, 0x00, 0x00, 0x00, 0x00, 0x09, 0x84, 0x1C, 0x00, 0x02, 0x01, 0xC0, 
  0xF2, 0x0F, 0x82, 0xE1, 0x39, 0x01, 0xC8, 0x2E, 0x40, 0x00, 0x20, 0x00, 0x00, 0x0B, 0x84, 0x26, 
  0x00, 0x00, 0x7C, 0x0F, 0xC0, 0xEE, 0x00, 0xE0, 0x1C, 0x03, 0xC0, 0x78, 0x07, 0xE4, 0x1F, 0xC9, 
  0x00, 0x00, 0x00, 0x09, 0x84, 0x1E, 0x40, 0x10, 0x78, 0x80, 0xC0, 0x78, 0x36, 0x0F, 0x83, 0xC5, 
  0x00, 0x00, 0x00, 0x0C, 0x84, 0x28, 0x00, 0x00, 0x30, 0x80, 0x70, 0x07, 0x80, 0x7C, 0x03, 0x60, 
  0x3F, 0x08, 0x3F, 0x80, 0x78, 0x00, 0xC2, 0x40, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x00, 0x04, 
  0x0F, 0x80, 0xD8, 0x0F, 0x81, 0xF8, 0x1D, 0x80, 0x18, 0x83, 0xF0, 0x0E, 0x00, 0x41, 0x00, 0x00, 
  0x00, 0x00, 0x0C, 0x84, 0x28, 0x00, 0x00, 0x78, 0x81, 0xFC, 0x1E, 0x00, 0xFE, 0x07, 0xF8, 0x3D, 
  0xC1, 0xCF, 0x0F, 0x70, 0x3F, 0x81, 0xF8, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x84, 0x28, 
  0x00, 0x14, 0x7F, 0x80, 0x38, 0x80, 0x70, 0x80, 0xF0, 0x07, 0x04, 0x8F, 0x00, 0x08, 0x00, 0x00, 
  0x0B, 0x84, 0x26, 0x00, 0x00, 0x7C, 0x0F, 0xC0, 0xCC, 0x0F, 0xC0, 0x7C, 0x0F, 0xC0, 0xEC, 0x0E, 
  0x80, 0xF8, 0x07, 0x84, 0x80, 0x00, 0x00, 0x0A, 0x84, 0x22, 0x40, 0x00, 0xF0, 0x36, 0x24, 0xCC, 
  0x0F, 0x80, 0x30, 0x64, 0x07, 0x80, 0x61, 0x00, 0x00, 0x00, 0x07, 0x84, 0x16, 0x80, 0x0C, 0x41, 
  0xC0, 0x08, 0x39, 0x60, 0x00, 0x00, 0x08, 0x84, 0x1A, 0x80, 0x24, 0xE2, 0x00, 0x20, 0xE0, 0x30, 
  0x30, 0x80, 0x00, 0x00, 0x0A, 0x84, 0x22, 0x00, 0x08, 0x10, 0x00, 0x40, 0x38, 0x1E, 0x03, 0x80, 
  0x7C, 0x03, 0x80, 0x90, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40, 0x00, 0x09, 0x84, 0x1F, 0x00, 0x14, 
  0x7C, 0xB0, 0x00, 0x00, 0x09, 0x84, 0x1E, 0x40, 0x00, 0x20, 0x80, 0x38, 0x0F, 0x80, 0xE0, 0x78, 
  0x38, 0x08, 0x14, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x00, 0x00, 0x7C, 0x0F, 0xC0, 0xEC, 0x01, 
  0xC0, 0x18, 0x03, 0x80, 0x30, 0x00, 0x04, 0x06, 0x09, 0x00, 0x00, 0x00, 0x13, 0x84, 0x46, 0x00, 
  0x00, 0x00, 0x60, 0x18, 0x04, 0x04, 0x80, 0xC8, 0xCC, 0x0D, 0xEE, 0xC0, 0xC6, 0xEC, 0x0D, 0xEC, 
  0xC0, 0xF6, 0xCC, 0x0F, 0xFE, 0xC0, 0x48, 0x69, 0x06, 0x01, 0x80, 0x00, 0x04, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0E, 0x84, 0x32, 0x00, 0x00, 0x03, 0x81, 0x21, 0xF0, 0x40, 0xEE, 0x10, 0x3F, 
  0x80, 0xEF, 0x81, 0xC7, 0x12, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 0x00, 0x00, 0x02, 0x20, 
  0xFF, 0x03, 0x9E, 0x0E, 0x71, 0x07, 0xF8, 0x1C, 0xF0, 0x7F, 0xC8, 0x3F, 0xC4, 0x80, 0x00, 0x00, 
  0x00, 0x0C, 0x84, 0x2A, 0x00, 0x00, 0x1E, 0x01, 0x98, 0x18, 0x40, 0xC0, 0x24, 0xC8, 0x06, 0x50, 
  0x1B, 0x80, 0xEC, 0x01, 0x00, 0x06, 0x00, 0x20, 0x00, 0x00, 0x0B, 0x84, 0x24, 0x24, 0x00, 0x02, 
  0x0F, 0xC5, 0x98, 0xC1, 0x99, 0x1F, 0x81, 0xF0, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0C, 0x84, 
  0x28, 0x00, 0x00, 0x20, 0x83, 0xFC, 0x1C, 0x04, 0x9F, 0xC4, 0x1C, 0x00, 0xFF, 0x07, 0xC9, 0x20, 
  0x00, 0x00, 0x00, 0x0A, 0x84, 0x22, 0x00, 0x08, 0x3E, 0x20, 0xC0, 0x1F, 0x14, 0x60, 0x50, 0x00, 
  0x00, 0x00, 0x0C, 0x84, 0x2A, 0x00, 0x00, 0x3E, 0x01, 0xF8, 0x1C, 0xC0, 0xC0, 0x20, 0xCF, 0x20, 
  0xC7, 0x03, 0xF8, 0x1F, 0x89, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x40, 0x04, 0x99, 0x88, 
  0x3F, 0x12, 0x66, 0x28, 0x00, 0x00, 0x00, 0x07, 0x84, 0x16, 0x00, 0x0E, 0x79, 0x89, 0x00, 0x00, 
  0x0A, 0x84, 0x22, 0x40, 0x00, 0x10, 0x06, 0x21, 0x18, 0x2B, 0x10, 0xBC, 0x12, 0x08, 0x40, 0x20, 
  0x00, 0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x00, 0x3C, 0xF0, 0xF7, 0x54, 0x3F, 0x20, 0xFE, 0x83, 
  0xBA, 0x0E, 0x68, 0x39, 0xE9, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x00, 0x06, 0x9C, 0x09, 
  0x3F, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x14, 0x84, 0x4A, 0x00, 0x00, 0x00, 0x7F, 0xDE, 
  0x10, 0x7F, 0xFF, 0x03, 0xFF, 0x78, 0x83, 0xCF, 0x78, 0xA3, 0xCE, 0x78, 0x90, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x00, 0x38, 0xE0, 0xF3, 0x90, 0x7D, 0xC8, 0x3F, 0xE0, 0xEF, 
  0x90, 0x73, 0xC1, 0xC7, 0x24, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x84, 0x34, 0x00, 0x00, 0x0F, 0x00, 
  0x3F, 0xC0, 0x7F, 0xE0, 0x71, 0xE0, 0x70, 0xE0, 0xF0, 0xF0, 0xF0, 0xE0, 0x70, 0xE0, 0x79, 0xE0, 
  0x7F, 0xE0, 0x3F, 0xC0, 0x0F, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x84, 0x22, 0x00, 0x01, 
  0xF0, 0x3F, 0x06, 0x60, 0xDC, 0x1F, 0x83, 0xE2, 0x8C, 0x09, 0x00, 0x00, 0x00, 0x0F, 0x84, 0x34, 
  0x00, 0x00, 0x13, 0x00, 0x1F, 0xC0, 0x3F, 0xE0, 0x79, 0xE0, 0x78, 0xE0, 0x70, 0xF0, 0x7A, 0xE2, 
  0x0F, 0xFC, 0x07, 0xFC, 0x07, 0xFE, 0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x84, 0x2A, 
  0x00, 0x00, 0xFE, 0x12, 0x7F, 0x03, 0xF4, 0x83, 0xF0, 0x83, 0xB8, 0xA0, 0x00, 0x00, 0x00, 0x0B, 
  0x84, 0x26, 0x08, 0x00, 0x3C, 0x07, 0xE0, 0xEE, 0x0F, 0x91, 0x7E, 0x03, 0xE1, 0xEE, 0x0F, 0xE0, 
  0x7E, 0x0B, 0xE0, 0x02, 0x40, 0x00, 0x00, 0x00, 0x0C, 0x84, 0x2A, 0x00, 0x02, 0x4F, 0xF3, 0x03, 
  0x80, 0x1E, 0x12, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x32, 0x00, 0x00, 0xC3, 0x8E, 0x20, 0xF7, 0x80, 
  0xFC, 0x00, 0xFC, 0x24, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x00, 0x08, 0x00, 0xE3, 
  0x03, 0x9C, 0x40, 0xEE, 0x03, 0xB0, 0x90, 0xF8, 0x03, 0xC0, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x0F, 0x84, 0x36, 0x00, 0x00, 0x41, 0xDD, 0xC1, 0xFD, 0xC0, 0xFD, 0xC8, 0x1F, 0xF9, 0x23, 0xDF, 
  0x01, 0xDD, 0x01, 0x8D, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x00, 0x00, 
  0xEE, 0x06, 0xE1, 0x7C, 0x07, 0xC0, 0x39, 0x07, 0x90, 0x7C, 0x0F, 0xC0, 0xEE, 0x0C, 0xE0, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x84, 0x26, 0x00, 0x04, 0x18, 0xC0, 0xD8, 0x81, 0xE1, 0x61, 
  0x82, 0x40, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x30, 0x00, 0x00, 0x7F, 0x08, 0x3F, 0xE0, 0x47, 0x80, 
  0x1E, 0x00, 0x78, 0x01, 0xE0, 0x0F, 0x80, 0x2F, 0xF8, 0x1F, 0xF1, 0x00, 0x02, 0x40, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x84, 0x18, 0x00, 0x3C, 0xF3, 0x01, 0x80, 0xF2, 0x00, 0x00, 0x00, 0x08, 0x84, 
  0x1A, 0x00, 0x20, 0xC0, 0x21, 0x43, 0x12, 0x19, 0x20, 0x00, 0x00, 0x08, 0x84, 0x18, 0x70, 0x3C, 
  0xF1, 0xC0, 0xE0, 0xF2, 0x00, 0x00, 0x00, 0x09, 0x84, 0x1E, 0x00, 0x01, 0x80, 0x70, 0x3C, 0x78, 
  0x00, 0x00, 0x00, 0x00, 0x0A, 0x84, 0x23, 0xC0, 0x09, 0x00, 0x07, 0xC4, 0x00, 0x00, 0x00, 0x08, 
  0x84, 0x1A, 0x00, 0x07, 0x01, 0x8F, 0x00, 0x80, 0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x00, 0x1F, 
  0xC0, 0xFF, 0x83, 0xDE, 0x00, 0x78, 0x0F, 0xE0, 0xFF, 0x90, 0xF3, 0xC1, 0xFF, 0x07, 0xDC, 0x90, 
  0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 0x00, 0x01, 0xC8, 0x07, 0x70, 0x83, 0xFC, 0x0F, 0x78, 0x39, 
  0xE0, 0xE7, 0x03, 0xDE, 0x41, 0xFE, 0x07, 0xF0, 0x01, 0x82, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x84, 
  0x32, 0x00, 0x00, 0x0F, 0xE0, 0x3F, 0xE0, 0x71, 0xE1, 0xE3, 0xC8, 0x78, 0x00, 0xF1, 0xE0, 0xF7, 
  0x81, 0xFF, 0x01, 0xFC, 0x20, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x84, 0x28, 0x00, 0x00, 
  0x18, 0x07, 0xC0, 0x7E, 0x07, 0xF0, 0x39, 0x89, 0x31, 0x80, 0xCC, 0x40, 0xFC, 0x48, 0x00, 0x00, 
  0x00, 0x0C, 0x84, 0x28, 0x00, 0x12, 0x7F, 0x83, 0x80, 0x1F, 0xE4, 0x1F, 0xC0, 0xE0, 0x20, 0xFF, 
  0x07, 0xC9, 0x20, 0x00, 0x00, 0x00, 0x09, 0x84, 0x1C, 0x00, 0x04, 0x20, 0x79, 0x27, 0x80, 0xE1, 
  0x38, 0x0E, 0x0B, 0x80, 0xE0, 0x40, 0x08, 0x03, 0x80, 0x00, 0x0E, 0x84, 0x30, 0x00, 0x04, 0x0F, 
  0xC0, 0x3F, 0x80, 0x7B, 0x80, 0xF3, 0x01, 0xE7, 0x03, 0xFE, 0x20, 0x7F, 0x81, 0xCF, 0x03, 0xDE, 
  0x20, 0x7F, 0x00, 0x30, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 0x00, 0x08, 0x3C, 0x04, 0x1F, 0xE0, 
  0x7F, 0xCC, 0x3D, 0xE4, 0x80, 0x00, 0x00, 0x00, 0x06, 0x84, 0x10, 0x00, 0xC0, 0x1E, 0x64, 0x80, 
  0x00, 0x07, 0x84, 0x14, 0x00, 0x60, 0x03, 0xCC, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 
  0x00, 0x08, 0x38, 0x00, 0xEF, 0x03, 0xB8, 0x0F, 0xE0, 0x3F, 0x04, 0x1F, 0xC0, 0x77, 0x01, 0xDE, 
  0x07, 0x38, 0x90, 0x00, 0x00, 0x00, 0x07, 0x84, 0x14, 0x03, 0xCE, 0x0E, 0x1E, 0x00, 0x08, 0x00, 
  0x00, 0x00, 0x0F, 0x84, 0x36, 0x00, 0x00, 0x0F, 0x9E, 0x49, 0xF7, 0xC8, 0x3F, 0xF9, 0x07, 0xF7, 
  0x20, 0xEE, 0xE4, 0x80, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x32, 0x00, 0x00, 0x1C, 0xE0, 0x3F, 0xE0, 
  0x7F, 0xE0, 0xF3, 0xCC, 0x38, 0xF2, 0x40, 0x00, 0x00, 0x00, 0x0F, 0x84, 0x35, 0x80, 0x01, 0x00, 
  0x00, 0x9F, 0x80, 0x3F, 0xC0, 0x7F, 0xE0, 0x7D, 0xE2, 0x0F, 0x3E, 0x0F, 0x3C, 0x0F, 0xFC, 0x07, 
  0xF8, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x30, 0x00, 
  0x00, 0x04, 0x01, 0xFF, 0x01, 0xFE, 0x07, 0xFC, 0x0F, 0x78, 0x1E, 0x70, 0x3D, 0xE2, 0x4F, 0xF8, 
  0x1F, 0xD0, 0x7C, 0x20, 0x38, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x84, 0x32, 0x00, 0x00, 0x07, 
  0xF0, 0x1F, 0xE2, 0x0F, 0xF8, 0x93, 0xDE, 0x07, 0xFC, 0x07, 0xF8, 0x07, 0xF0, 0x01, 0xE0, 0x01, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x84, 0x20, 0x00, 0x00, 0x8A, 0x3F, 0x30, 0xF0, 0x02, 0x10, 
  0x00, 0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x00, 0x1F, 0x80, 0xFF, 0x03, 0x9C, 0x0F, 0xC0, 0x3F, 
  0xC0, 0x7F, 0x00, 0x1E, 0x0E, 0x78, 0x3F, 0xC0, 0x7E, 0x12, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x84, 
  0x24, 0x04, 0x01, 0xC2, 0x4F, 0xE0, 0x78, 0x48, 0x70, 0x80, 0xF8, 0x07, 0x92, 0x00, 0x00, 0x00, 
  0x0F, 0x84, 0x34, 0x08, 0x00, 0x51, 0x02, 0xCF, 0x3C, 0x3F, 0x3C, 0x1F, 0x3C, 0x0F, 0xFC, 0x07, 
  0xFC, 0x03, 0xFC, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2C, 0x00, 
  0x00, 0x00, 0x87, 0x3E, 0x1E, 0xF0, 0x3B, 0x88, 0x1F, 0xC0, 0x7E, 0x00, 0xF8, 0x03, 0xC1, 0x00, 
  0xE0, 0x90, 0x00, 0x00, 0x00, 0x12, 0x84, 0x40, 0x00, 0x00, 0x08, 0x00, 0x01, 0xE7, 0x78, 0x3D, 
  0xEE, 0x07, 0xBD, 0xE0, 0xFF, 0xBC, 0x1F, 0xFF, 0x01, 0xFF, 0xC0, 0x7F, 0xF8, 0x0B, 0xEF, 0x43, 
  0x3D, 0xE0, 0x07, 0x3D, 0x00, 0x00, 0x10, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 
  0x2E, 0x00, 0x00, 0x39, 0xE0, 0x77, 0x01, 0xFC, 0x48, 0x7C, 0x03, 0xF0, 0x0F, 0xE0, 0x7B, 0x81, 
  0xCF, 0x24, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x84, 0x2E, 0x00, 0x01, 0x07, 0x9C, 0x0E, 0xF2, 0x07, 
  0xF0, 0x0F, 0xC0, 0x3E, 0x00, 0x78, 0x09, 0xE0, 0x3F, 0x00, 0x7C, 0x01, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x0C, 0x84, 0x2A, 0x00, 0x02, 0x07, 0xE0, 0x0F, 0x10, 0x1E, 0x10, 0x3C, 0x03, 0xC0, 0x83, 
  0xF8, 0x90, 0x00, 0x00, 0x00, 0x08, 0x84, 0x18, 0x18, 0x1C, 0xA1, 0x88, 0x38, 0xA1, 0x80, 0xE4, 
  0x00, 0x00, 0x00, 0x06, 0x84, 0x10, 0x02, 0x0F, 0x30, 0x64, 0x80, 0x00, 0x08, 0x84, 0x1A, 0x0C, 
  0x3C, 0x60, 0x20, 0x70, 0x00, 0x08, 0x00, 0x00, 0x0F, 0x84, 0x36, 0xC0, 0x00, 0x02, 0x00, 0x0F, 
  0xC4, 0x0F, 0xFC, 0x00, 0x38, 0x60, 0x00, 0x00, 0x00, 0x00
};
/* Size: 1914 bytes */

static const unsigned char Sekuntia_index[] = {
  0x00, 0x00, 0x18, 0x08, 0x81, 0xE0, 0x5C, 0x13, 0x03, 0x60, 0x85, 0x11, 0xC2, 0x64, 0x53, 0x0D, 
  0xB1, 0xD4, 0x3D, 0x47, 0xF1, 0x08, 0x22, 0xC4, 0xA4, 0x9E, 0x95, 0x32, 0xC6, 0x5E, 0xCC, 0x91, 
  0xAD, 0x38, 0x07, 0x5C, 0xF5, 0x1F, 0x64, 0x08, 0x86, 0xD1, 0x22, 0x36, 0x49, 0x89, 0xCD, 0x44, 
  0xAA, 0x15, 0x74, 0xB3, 0x97, 0x1A, 0xF2, 0x61, 0x2C, 0x5D, 0x90, 0x33, 0x36, 0x92, 0xD6, 0x1B, 
  0x93, 0x89, 0x75, 0x6E, 0xF5, 0xEE, 0xBE, 0xF8, 0x11, 0x05, 0xA1, 0x44, 0x40, 0x8B, 0x71, 0xD6, 
  0x42, 0xCA, 0x29, 0x5D, 0x2E, 0xE6, 0x3C, 0xD4, 0x9B, 0xF3, 0xAA, 0x81, 0xD1, 0xEA, 0x77, 0x54, 
  0x6B, 0x35, 0x7A, 0xB2, 0xF6, 0xA2, 0xD8, 0xDB, 0xDB, 0xAD, 0x78, 0xAF, 0xBE, 0x0A, 0xC5, 0x99, 
  0x2B, 0x32, 0xE7, 0x3D, 0x1D, 0xA8, 0x35, 0xE6, 0xD5, 0xDF, 0xDC, 0x5B, 0x98, 0xF4, 0x5E, 0xA7, 
  0xD7, 0x3B, 0x40
};
/* Size: 131 bytes */

const ILI9341_t3_font_t Sekuntia = {
    Sekuntia_index,
    0,
    Sekuntia_data,
    1,
    0,
    32,
    126,
    0,
    0,
    11,
    5,
    5,
    2,
    2,
    5,
    0,
    16
};
