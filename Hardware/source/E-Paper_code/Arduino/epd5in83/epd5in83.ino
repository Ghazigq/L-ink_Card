/**
 *  @filename   :   epd5in83-demo.ino
 *  @brief      :   5.83inch e-paper display demo
 *  @author     :   MyMX from Waveshare
 *
 *  Copyright (C) Waveshare     July 6 2018
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

#include <SPI.h>
#include "epd5in83.h"
#include "imagedata.h"

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Epd epd;
    if (epd.Init() != 0) {
        Serial.println("e-Paper init failed");
        return;
    }
    epd.DisplayFrame(IMAGE_DATA);
}

void loop() {
  // put your main code here, to run repeatedly:

}
