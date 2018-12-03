/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef MICROPY_INCLUDED_MICROBIT_MICROBITDAL_H
#define MICROPY_INCLUDED_MICROBIT_MICROBITDAL_H

#include "MicroBitDisplay.h"
#include "lib/bmx055.h"


class MicroPythonI2C : public MicroBitI2C {
    public:
        MicroPythonI2C(PinName sda, PinName scl)
            : MicroBitI2C(sda, scl) {
        }
        void set_pins(PinName sda, PinName scl) {
            _i2c.sda = sda;
            _i2c.scl = scl;
        }
        i2c_t *get_i2c_obj() {
            return &_i2c;
        }
};

extern MicroPythonI2C ubit_i2c;
extern BMX055 ubit_sensor;
extern MicroBitDisplay ubit_display;

extern "C"{
	#include "lib/neopixel.h"
extern neopixel_strip_t neo;
}

#endif // MICROPY_INCLUDED_MICROBIT_MICROBITDAL_H
