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
#include "lib/bmx055.h"

typedef struct _calliope_magnetometer_obj_t {
    mp_obj_base_t base;
    BMX055 *magnetometer;
} calliope_magnetometer_obj_t;

mp_obj_t calliope_magnetometer_get_x(mp_obj_t self_in) {
    calliope_magnetometer_obj_t *self = (calliope_magnetometer_obj_t*)self_in;
    return mp_obj_new_int(self->magnetometer->getMagX());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_magnetometer_get_x_obj, calliope_magnetometer_get_x);

mp_obj_t calliope_magnetometer_get_y(mp_obj_t self_in) {
    calliope_magnetometer_obj_t *self = (calliope_magnetometer_obj_t*)self_in;
    return mp_obj_new_int(self->magnetometer->getMagY());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_magnetometer_get_y_obj, calliope_magnetometer_get_y);

mp_obj_t calliope_magnetometer_get_z(mp_obj_t self_in) {
    calliope_magnetometer_obj_t *self = (calliope_magnetometer_obj_t*)self_in;
    return mp_obj_new_int(self->magnetometer->getMagZ());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_magnetometer_get_z_obj, calliope_magnetometer_get_z);

mp_obj_t calliope_magnetometer_get_values(mp_obj_t self_in) {
    calliope_magnetometer_obj_t *self = (calliope_magnetometer_obj_t*)self_in;
    mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(self->magnetometer->getMagX());
    tuple->items[1] = mp_obj_new_int(self->magnetometer->getMagY());
    tuple->items[2] = mp_obj_new_int(self->magnetometer->getMagZ());
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_magnetometer_get_values_obj, calliope_magnetometer_get_values);

STATIC const mp_map_elem_t calliope_magnetometer_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), (mp_obj_t)&calliope_magnetometer_get_x_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), (mp_obj_t)&calliope_magnetometer_get_y_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_z), (mp_obj_t)&calliope_magnetometer_get_z_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_values), (mp_obj_t)&calliope_magnetometer_get_values_obj },
};

STATIC MP_DEFINE_CONST_DICT(calliope_magnetometer_locals_dict, calliope_magnetometer_locals_dict_table);

const mp_obj_type_t calliope_magnetometer_type = {
    { &mp_type_type },
    .name = MP_QSTR_CalliopeMagnetometer,
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
    .locals_dict = (mp_obj_dict_t*)&calliope_magnetometer_locals_dict,
};

const calliope_magnetometer_obj_t calliope_magnetometer_obj = {
    {&calliope_magnetometer_type},
    .magnetometer = &ubit_sensor,
};

}

