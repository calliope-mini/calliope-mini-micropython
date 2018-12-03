/*
 * This file is part of the MicroPython for the Calliope mini
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Mohamad El Khatib El Khalidi
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

#include "microbit/microbitdal.h"

extern "C" {

#include "py/runtime.h"
#include "microbit/modmicrobit.h"
#include "lib/neopixel.h"


typedef struct _calliope_led_obj_t {
    mp_obj_base_t base;
} calliope_led_obj_t;

uint8_t colors[] = {0,0,0};

mp_obj_t calliope_led_set_red(mp_obj_t self_in, mp_obj_t red) {
	neopixel_init(&neo, P0_18, 1);
	colors[0] = mp_obj_get_int(red);
	neopixel_set_color_and_show(&neo, 0, colors[0], colors[1], colors[2]);
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(calliope_led_set_red_obj, calliope_led_set_red);

mp_obj_t calliope_led_set_green(mp_obj_t self_in, mp_obj_t green) {
	neopixel_init(&neo, P0_18, 1);
	colors[1] = mp_obj_get_int(green);
	neopixel_set_color_and_show(&neo, 0, colors[0], colors[1], colors[2]);
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(calliope_led_set_green_obj, calliope_led_set_green);

mp_obj_t calliope_led_set_blue(mp_obj_t self_in, mp_obj_t blue) {
	
	neopixel_init(&neo, P0_18, 1);
	colors[2] = mp_obj_get_int(blue);
	neopixel_set_color_and_show(&neo, 0, colors[0], colors[1], colors[2]);
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(calliope_led_set_blue_obj, calliope_led_set_blue);

mp_obj_t calliope_led_get_red() {
    mp_obj_t obj = mp_obj_new_int(colors[0]);
    return obj;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_led_get_red_obj, calliope_led_get_red);

mp_obj_t calliope_led_get_green() {
    mp_obj_t obj = mp_obj_new_int(colors[1]);
    return obj;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_led_get_green_obj, calliope_led_get_green);

mp_obj_t calliope_led_get_blue() {
	mp_obj_t obj = mp_obj_new_int(colors[2]);
    return obj;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_led_get_blue_obj, calliope_led_get_blue);

mp_obj_t calliope_led_get_colors(mp_obj_t self_in) {
	mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(colors[0]);
    tuple->items[1] = mp_obj_new_int(colors[1]);
    tuple->items[2] = mp_obj_new_int(colors[2]);
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_led_get_colors_obj, calliope_led_get_colors);

void calliope_led_set_colors(mp_obj_t self_in, mp_int_t red, mp_int_t green, mp_int_t blue) {
	neopixel_init(&neo, P0_18, 1);
	colors[0] = red;
	colors[1] = green;
    colors[2] = blue;
	neopixel_set_color_and_show(&neo, 0, colors[0], colors[1], colors[2]);
}

mp_obj_t calliope_led_set_colors_func(mp_uint_t n_args, const mp_obj_t *args) {
    calliope_led_set_colors((mp_obj_t *)args[0], mp_obj_get_int(args[1]), mp_obj_get_int(args[2]), mp_obj_get_int(args[3]));
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(calliope_led_set_colors_obj, 4, 4, calliope_led_set_colors_func);


mp_obj_t calliope_led_clear(mp_obj_t self_in) {
	neopixel_init(&neo, P0_18, 1);
    colors[0] = 0;
    colors[1] = 0;
    colors[2] = 0;
    neopixel_set_color_and_show(&neo, 0, colors[0], colors[1], colors[2]);
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_led_clear_obj, calliope_led_clear);







STATIC const mp_map_elem_t calliope_led_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_red), (mp_obj_t)&calliope_led_set_red_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_green), (mp_obj_t)&calliope_led_set_green_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_set_blue), (mp_obj_t)&calliope_led_set_blue_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_get_red), (mp_obj_t)&calliope_led_get_red_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_green), (mp_obj_t)&calliope_led_get_green_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_blue), (mp_obj_t)&calliope_led_get_blue_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_set_colors), (mp_obj_t)&calliope_led_set_colors_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_colors), (mp_obj_t)&calliope_led_get_colors_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_clear), (mp_obj_t)&calliope_led_clear_obj },
};
STATIC MP_DEFINE_CONST_DICT(calliope_led_locals_dict, calliope_led_locals_dict_table);

const mp_obj_type_t calliope_led_type = {
    { &mp_type_type },
    .name = MP_QSTR_CalliopeLED,
    .print = NULL,
    .make_new = NULL,
    .call = NULL,
    .unary_op = NULL,
    .binary_op = NULL,
    .attr = NULL,
    .subscr = NULL,
    .getiter = NULL,
    .iternext = NULL,
    .buffer_p = {NULL},
    .protocol = NULL,
    .parent = NULL,
    .locals_dict = (mp_obj_dict_t*)&calliope_led_locals_dict,
};

const calliope_led_obj_t calliope_led_obj = {
    {&calliope_led_type},
};

}
