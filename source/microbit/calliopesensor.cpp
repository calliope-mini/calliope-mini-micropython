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

typedef struct _calliope_sensor_obj_t {
    mp_obj_base_t base;
    BMX055 *sensor;
} calliope_sensor_obj_t;

//############### Temperatur ###############################################################################

mp_obj_t calliope_sensor_get_temperature(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getTemperature());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_temperature_obj, calliope_sensor_get_temperature);

//############### Accelerometer ###############################################################################

mp_obj_t calliope_sensor_get_acc_x(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getAccX());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_acc_x_obj, calliope_sensor_get_acc_x);

mp_obj_t calliope_sensor_get_acc_y(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getAccY());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_acc_y_obj, calliope_sensor_get_acc_y);

mp_obj_t calliope_sensor_get_acc_z(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getAccZ());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_acc_z_obj, calliope_sensor_get_acc_z);

mp_obj_t calliope_sensor_get_acc_values(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(self->sensor->getAccX());
    tuple->items[1] = mp_obj_new_int(self->sensor->getAccY());
    tuple->items[2] = mp_obj_new_int(self->sensor->getAccZ());
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_acc_values_obj, calliope_sensor_get_acc_values);

//############### Gyrometer ###################################################################################

mp_obj_t calliope_sensor_get_gyro_x(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getGyroX());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_gyro_x_obj, calliope_sensor_get_gyro_x);

mp_obj_t calliope_sensor_get_gyro_y(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getGyroY());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_gyro_y_obj, calliope_sensor_get_gyro_y);

mp_obj_t calliope_sensor_get_gyro_z(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getGyroZ());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_gyro_z_obj, calliope_sensor_get_gyro_z);

mp_obj_t calliope_sensor_get_gyro_values(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(self->sensor->getGyroX());
    tuple->items[1] = mp_obj_new_int(self->sensor->getGyroY());
    tuple->items[2] = mp_obj_new_int(self->sensor->getGyroZ());
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_gyro_values_obj, calliope_sensor_get_gyro_values);

//############### Magnetometer ################################################################################

mp_obj_t calliope_sensor_get_mag_x(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getMagX());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_mag_x_obj, calliope_sensor_get_mag_x);

mp_obj_t calliope_sensor_get_mag_y(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getMagY());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_mag_y_obj, calliope_sensor_get_mag_y);

mp_obj_t calliope_sensor_get_mag_z(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    return mp_obj_new_int(self->sensor->getMagZ());
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_mag_z_obj, calliope_sensor_get_mag_z);

mp_obj_t calliope_sensor_get_mag_values(mp_obj_t self_in) {
    calliope_sensor_obj_t *self = (calliope_sensor_obj_t*)self_in;
    mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(self->sensor->getMagX());
    tuple->items[1] = mp_obj_new_int(self->sensor->getMagY());
    tuple->items[2] = mp_obj_new_int(self->sensor->getMagZ());
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(calliope_sensor_get_mag_values_obj, calliope_sensor_get_mag_values);

//#############################################################################################################

STATIC const mp_map_elem_t calliope_sensor_locals_dict_table[] = {
	//{ MP_OBJ_NEW_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_mymodule) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_acc_x), (mp_obj_t)&calliope_sensor_get_acc_x_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_acc_y), (mp_obj_t)&calliope_sensor_get_acc_y_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_acc_z), (mp_obj_t)&calliope_sensor_get_acc_z_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_acc_values), (mp_obj_t)&calliope_sensor_get_acc_values_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_get_gyro_x), (mp_obj_t)&calliope_sensor_get_gyro_x_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_gyro_y), (mp_obj_t)&calliope_sensor_get_gyro_y_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_gyro_z), (mp_obj_t)&calliope_sensor_get_gyro_z_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_gyro_values), (mp_obj_t)&calliope_sensor_get_gyro_values_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_get_mag_x), (mp_obj_t)&calliope_sensor_get_mag_x_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_mag_y), (mp_obj_t)&calliope_sensor_get_mag_y_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_mag_z), (mp_obj_t)&calliope_sensor_get_mag_z_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_mag_values), (mp_obj_t)&calliope_sensor_get_mag_values_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_get_temp), (mp_obj_t)&calliope_sensor_get_temperature_obj },
};

STATIC MP_DEFINE_CONST_DICT(calliope_sensor_locals_dict, calliope_sensor_locals_dict_table);

const mp_obj_type_t calliope_sensor_type = {
    { &mp_type_type },
    .name = MP_QSTR_CalliopeSensor,
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
    .locals_dict = (mp_obj_dict_t*)&calliope_sensor_locals_dict,
};

const calliope_sensor_obj_t calliope_sensor_obj = {
    {&calliope_sensor_type},
    .sensor = &ubit_sensor,
};

}
