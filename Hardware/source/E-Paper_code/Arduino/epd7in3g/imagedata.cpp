/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     2022/7/22
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "imagedata.h"
#include <avr/pgmspace.h>

// 4 Color Image Data 168*168 
const unsigned char Image4color[7056] PROGMEM = {
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,
0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,
0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,
0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,
0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,
0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0x80,0x00,
0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xFC,
0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,0x80,0x0A,0xAA,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x3F,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x0A,0xAA,0x80,0x0A,0xAA,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,
0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,0x80,0x0A,0xAA,0xA0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x02,0xAA,0x80,0x02,0x8A,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,
0x80,0x00,0x02,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,0x80,0x00,0x0A,0xA8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x2A,0x80,0x00,0x3A,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x2A,0x80,0x00,
0x2A,0xA0,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFD,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0x00,0x00,0x00,
0x01,0x50,0x00,0x00,0x00,0x00,0x00,0x2A,0x80,0x00,0xAA,0x80,0x00,0x00,0x00,0x00,
0x15,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x57,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,
0x00,0x2A,0x80,0x02,0xAA,0x00,0x00,0x00,0x00,0x00,0x55,0x50,0x00,0x00,0x00,0x3F,
0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,
0xF0,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x2A,0x80,0x0A,0xAB,0x00,
0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF5,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x15,0x55,
0x00,0x00,0x00,0x00,0x00,0x2A,0x80,0x2A,0xA8,0x00,0x00,0x00,0x00,0x01,0x55,0x50,
0x00,0x00,0x00,0x03,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x7F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x2A,
0x80,0x2A,0xAA,0xA8,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x3F,0xFF,
0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xF0,0x00,0x00,
0x00,0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,0x2A,0x80,0x2A,0xAA,0xA8,0x00,0x00,
0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,
0x00,0x00,0x00,0x2A,0x80,0x2A,0xAA,0xA8,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,
0x00,0x00,0x0F,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,
0xFF,0xC0,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x2A,
0xAA,0xA8,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xF5,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,
0x54,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x7F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x57,
0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF5,0x55,0x55,0x55,
0x55,0x55,0x55,0x7F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x50,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x3F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,
0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,
0x55,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x03,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xD5,
0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x5F,0xFF,
0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xF5,0x55,0x55,0x55,0x55,0x7F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFD,0x55,0x55,
0x55,0x55,0x7F,0xFF,0xF0,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x04,0x00,0x00,0x0F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x7F,0xFF,0xC0,0x00,
0x01,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x03,
0xFF,0xFD,0x55,0x55,0x55,0x55,0xFF,0xFF,0xC0,0x00,0x01,0x55,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x03,0xFF,0xFF,0x55,0x55,0x55,0x55,
0xFF,0xFF,0x00,0x00,0x05,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x40,0x00,0x00,0xFF,0xFF,0x55,0x55,0x55,0x57,0xFF,0xFF,0x00,0x00,0x15,0x55,
0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x50,0x00,0x00,0xFF,0xFF,
0xD5,0x55,0x55,0x57,0xFF,0xFF,0x00,0x00,0x05,0x55,0x55,0x50,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x15,0x55,0x55,0x40,0x00,0x00,0xFF,0xFF,0xD5,0x55,0x55,0x5F,0xFF,0xFC,
0x00,0x00,0x01,0x55,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x55,0x00,
0x00,0x00,0x3F,0xFF,0xF5,0x55,0x55,0x5F,0xFF,0xFC,0x00,0x00,0x00,0x15,0x55,0x55,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x50,0x00,0x00,0x00,0x3F,0xFF,0xF5,0x55,
0x55,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x01,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x55,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x55,0x55,0x7F,0xFF,0xF0,0x00,0x00,
0x00,0x00,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x54,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x54,0x00,0x00,0x00,0x00,
0x0F,0xFF,0xFD,0x55,0x55,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x05,0x55,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x40,0x00,0x00,0x00,0x00,0x03,0xFF,0xFD,0x55,0x55,0x7F,
0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x54,0x00,
0x00,0x00,0x00,0x00,0x03,0xFF,0xFD,0x55,0x55,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,
0xFF,0x55,0x55,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x55,0x55,0xFF,0xFF,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x55,0x55,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x55,
0x57,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xD5,0x57,0xFF,0xFC,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFF,0xD5,0x57,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xD5,0x57,0xFF,
0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xD5,0x5F,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x50,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x35,0x55,0x55,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF5,
0x55,0x55,0x5F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF5,0x55,0x55,0x5F,0xF0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,
0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x3F,0xF5,0x55,0x55,0x5F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xD5,0x55,0x55,
0x57,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xD5,0x55,0x55,0x57,0xFF,0xC0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x7F,0xFF,
0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,
0xFF,0xD5,0x55,0x55,0x57,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x00,0xAA,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xD5,0x55,0x55,0x57,0xFF,
0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xA8,0x00,0x00,0x00,0x03,
0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x02,0xAA,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0xFF,0x55,0x55,0x55,0x55,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x2A,0xAA,0x80,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,
0x00,0x0A,0xAA,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x55,
0x55,0x55,0x55,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,
0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x0A,0xA0,0xA8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFD,0x55,0x55,0x55,0x55,0x7F,0xFC,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,0xA0,0x00,0x00,0x03,0xFF,0xFD,
0x7F,0xFF,0xC0,0x00,0x00,0x0A,0x80,0xAB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFD,0x55,0x55,0x55,0x55,0x7F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x0A,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x0A,
0x80,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF5,0x55,0x55,0x55,
0x55,0x5F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xA0,0x00,
0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x0A,0x80,0xAA,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xF5,0x55,0x55,0x55,0x55,0x5F,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,
0xC0,0x00,0x00,0x0A,0xA2,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,
0xF5,0x55,0x55,0x55,0x55,0x5F,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0xAA,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x0A,0xAA,0xAA,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF5,0x55,0x55,0x55,0x55,0x5F,
0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0x80,0x00,0x00,0x03,
0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x02,0xAA,0xAB,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xF5,0x55,0x55,0x55,0x55,0x5B,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x02,0xAA,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,
0x00,0x00,0xAA,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xF5,0x55,
0x55,0x55,0x55,0x55,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,
0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x02,0xA8,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x7F,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xA0,0x00,0x00,0x03,0xFF,0xFD,
0x7F,0xFF,0xC0,0x00,0x00,0x00,0x0E,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x3F,0xFD,0x55,0x55,0x55,0x55,0x55,0x5C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x02,0x0A,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x00,
0xAA,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF5,0x55,0x55,0x55,
0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,0xA0,0x00,
0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xC0,0x00,0x00,0x00,0xAA,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0xAA,0xA0,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,
0xC0,0x00,0x00,0x00,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x2A,0xAA,0x80,0x00,0x00,0x03,0xFF,0xFD,0x7F,0xFF,0xF0,0x00,0x00,0x00,0x80,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0x00,0x00,0x00,0x0F,
0xFF,0xFD,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x15,0x55,0x57,0xD5,0x57,0xF5,0x55,0x55,0x55,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x5F,
0xFF,0xFF,0xFF,0x55,0x55,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x7F,0xFF,0xFF,0xFF,0xF5,0x55,0x55,
0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,
0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x05,0x55,0x57,0xFF,0xFF,0xFF,0xFF,0xF1,0x55,0x55,0x55,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x53,0xFF,0xFF,0xFF,
0xFF,0xC0,0x15,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xFF,0xF5,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x55,0x55,0x40,0x3F,0xFF,0xFF,0xFC,0x00,0x01,0x55,0x55,0x50,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x5F,0xFF,
0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x54,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x15,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xF5,0x57,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0x55,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
0xFF,0xD5,0x57,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x15,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x55,0x50,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xD5,0x57,0xFF,0xFC,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x54,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0xFF,0xD5,0x57,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x05,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x55,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xD5,
0x55,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x55,0x55,0xFF,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0x55,0x55,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x05,0x54,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x55,0x55,0xFF,
0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x00,0x05,0x55,0x40,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x40,0x01,0x54,0x00,
0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x55,0x55,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x05,0x55,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x05,0x50,0x01,0x55,0x40,0x00,0x00,0x00,0x00,0x03,0xFF,
0xFD,0x55,0x55,0x7F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x55,0x55,0x40,0x00,0x00,0x55,
0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
0x54,0x05,0x55,0x54,0x00,0x00,0x00,0x00,0x03,0xFF,0xFD,0x55,0x55,0x7F,0xFF,0xF0,
0x00,0x00,0x00,0x01,0x55,0x55,0x50,0x00,0x01,0x55,0x40,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x15,0x55,0x55,0x00,0x00,
0x00,0x00,0x0F,0xFF,0xFD,0x55,0x55,0x5F,0xFF,0xF0,0x00,0x00,0x00,0x15,0x55,0x55,
0x40,0x00,0x05,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x45,0x55,0x55,0x50,0x00,0x00,0x00,0x0F,0xFF,0xF5,0x55,
0x55,0x5F,0xFF,0xFC,0x00,0x00,0x01,0x55,0x55,0x54,0x00,0x00,0x15,0x50,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
0x55,0x55,0x55,0x00,0x00,0x00,0x3F,0xFF,0xF5,0x55,0x55,0x5F,0xFF,0xFC,0x00,0x00,
0x05,0x55,0x55,0x50,0x00,0x00,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x55,0x40,0x00,0x00,
0x3F,0xFF,0xF5,0x55,0x55,0x57,0xFF,0xFF,0x00,0x00,0x15,0x55,0x55,0x00,0x00,0x01,
0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x55,0x55,0x50,0x00,0x00,0xFF,0xFF,0xD5,0x55,0x55,0x57,
0xFF,0xFF,0x00,0x00,0x05,0x55,0x50,0x00,0x00,0x15,0x50,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,
0x55,0x40,0x00,0x00,0xFF,0xFF,0xD5,0x55,0x55,0x55,0xFF,0xFF,0x00,0x00,0x01,0x55,
0x00,0x00,0x00,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x00,0xFF,0xFF,
0x55,0x55,0x55,0x55,0xFF,0xFF,0xC0,0x00,0x01,0x54,0x00,0x00,0x01,0x54,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x55,0x00,0x00,0x03,0xFF,0xFF,0x55,0x55,0x55,0x55,0x7F,0xFF,
0xC0,0x00,0x00,0x40,0x00,0x00,0x05,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
0x00,0x03,0xFF,0xFD,0x55,0x55,0x55,0x55,0x7F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,
0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFD,0x55,0x55,
0x55,0x55,0x7F,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFC,0x00,
0x00,0x00,0x00,0x01,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,
0xFF,0xF5,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x05,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,
0x57,0xFF,0xFF,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xC0,0x00,0x00,
0x00,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0x55,
0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xF0,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,
0xFF,0xF0,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x01,0x50,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFC,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x01,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFD,0x55,0x55,0x55,
0x55,0x55,0x55,0x5F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x40,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x55,0x40,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x55,
0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,
0x00,0x0F,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFC,0x00,
0x00,0x00,0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFD,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x55,
0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x00,
0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x5F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x00,
0x02,0xA8,0x00,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,
0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xF0,0x00,0x00,
0x00,0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,0x00,0x2A,0xA8,0x00,0x00,0x00,0x00,
0x00,0x05,0x55,0x40,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,
0x00,0x00,0x00,0x00,0xAA,0xA8,0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,
0x00,0x00,0x0F,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,
0xFF,0xFC,0x00,0x00,0x00,0x00,0x15,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0xA0,
0x00,0x00,0x00,0x00,0x00,0x01,0x55,0x50,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFD,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,
0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x55,0x54,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x5F,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x15,0x54,0x00,0x00,0x00,0x00,
0x00,0x02,0xAA,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x55,0x50,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,
0xFC,0x00,0x00,0x00,0x01,0x50,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0xA8,0x00,0x00,
0x00,0x00,0x00,0x00,0x15,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xD5,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x40,
0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x7F,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
0xAA,0xAA,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFD,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xF0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0xAA,0x80,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x02,0xA8,0x2A,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xA8,0x2A,
0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xFC,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xA8,0xAA,0x80,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x02,0xAA,0xAA,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xAA,0xAA,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xFC,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xAA,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0A,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xF5,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,
0xFF,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,
0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,
0xFF,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,
0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x7F,0xFF,0xFF,
0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFD,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,
0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x57,0xFF,
0xFF,0xFF,0xFF,0xD5,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,
};
