/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Mark Shannon
 * Copyright (c) 2015-2017 Damien P. George
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
#ifndef MICROPY_INCLUDED_MICROBIT_IMAGE_H
#define MICROPY_INCLUDED_MICROBIT_IMAGE_H

#include "py/runtime.h"

#define MAX_BRIGHTNESS 9

/** Monochrome images are immutable, which means that
 * we only need one bit per pixel which saves quite a lot
 * of memory */

/* we reserve a couple of bits, so we won't need to modify the
 * layout if we need to add more functionality or subtypes. */
#define TYPE_AND_FLAGS \
    mp_obj_base_t base; \
    uint8_t five:1; \
    uint8_t reserved1:1; \
    uint8_t reserved2:1

typedef struct _image_base_t {
    TYPE_AND_FLAGS;
} image_base_t;

typedef struct _monochrome_5by5_t {
    TYPE_AND_FLAGS;
    uint8_t pixel44: 1;
    uint8_t bits24[3];

    /* This is an internal method it is up to the caller to validate the inputs */
    uint8_t getPixelValue(mp_int_t x, mp_int_t y);

} monochrome_5by5_t;

typedef struct _greyscale_t {
    TYPE_AND_FLAGS;
    uint8_t height;
    uint8_t width;
    uint8_t byte_data[]; /* Static initializer for this will have to be C, not C++ */
    void clear();

    /* Thiese are internal methods and it is up to the caller to validate the inputs */
    uint8_t getPixelValue(mp_int_t x, mp_int_t y);
    void setPixelValue(mp_int_t x, mp_int_t y, mp_int_t val);
    void fill(mp_int_t val);
} greyscale_t;

typedef union _microbit_image_obj_t {
    image_base_t base;
    monochrome_5by5_t monochrome_5by5;
    greyscale_t greyscale;

    mp_int_t height();
    mp_int_t width();
    greyscale_t *copy();
    greyscale_t *invert();

    /* This is an internal method it is up to the caller to validate the inputs */
    uint8_t getPixelValue(mp_int_t x, mp_int_t y);
} microbit_image_obj_t;

/** Return a facade object that presents the string as a sequence of images */
mp_obj_t microbit_string_facade(mp_obj_t string);

void microbit_image_set_from_char(greyscale_t *img, char c);
microbit_image_obj_t *microbit_image_for_char(char c);
mp_obj_t microbit_image_slice(microbit_image_obj_t *img, mp_int_t start, mp_int_t width, mp_int_t stride);
/* ref exists so that we can pull a string out of an object and not have it GC'ed while oterating over it */
mp_obj_t scrolling_string_image_iterable(const char* str, mp_uint_t len, mp_obj_t ref, bool monospace, bool repeat);

#define SMALL_IMAGE(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p44) \
{ \
    { &microbit_image_type }, \
    1, 0, 0, (p44), \
    { \
        (p0)|((p1)<<1)|((p2)<<2)|((p3)<<3)|((p4)<<4)|((p5)<<5)|((p6)<<6)|((p7)<<7), \
        (p8)|((p9)<<1)|((p10)<<2)|((p11)<<3)|((p12)<<4)|((p13)<<5)|((p14)<<6)|((p15)<<7), \
        (p16)|((p17)<<1)|((p18)<<2)|((p19)<<3)|((p20)<<4)|((p21)<<5)|((p22)<<6)|((p23)<<7) \
    } \
}

extern const monochrome_5by5_t microbit_blank_image;
extern const monochrome_5by5_t microbit_const_image_heart_obj;

#define BLANK_IMAGE (microbit_image_obj_t *)(&microbit_blank_image)
#define HEART_IMAGE (microbit_image_obj_t *)(&microbit_const_image_heart_obj)

microbit_image_obj_t *microbit_image_dim(microbit_image_obj_t *lhs, mp_float_t fval);
microbit_image_obj_t *microbit_image_sum(microbit_image_obj_t *lhs, microbit_image_obj_t *rhs, bool add);

#endif // MICROPY_INCLUDED_MICROBIT_IMAGE_H
