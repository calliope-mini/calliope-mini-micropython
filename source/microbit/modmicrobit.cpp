/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
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

#include "MicroBitDevice.h"
#include "MicroBitSystemTimer.h"

extern "C" {

#include "py/nlr.h"
#include "py/obj.h"
#include "py/mphal.h"
#include "microbit/modmicrobit.h"

STATIC mp_obj_t microbit_reset_(void) {
    microbit_reset();
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_0(microbit_reset_obj, microbit_reset_);

STATIC mp_obj_t microbit_sleep(mp_obj_t ms_in) {
    mp_int_t ms;
    if (mp_obj_is_integer(ms_in)) {
        ms = mp_obj_get_int(ms_in);
    } else {
        ms = (mp_int_t)mp_obj_get_float(ms_in);
    }
    if (ms > 0) {
        mp_hal_delay_ms(ms);
    }
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_sleep_obj, microbit_sleep);

STATIC mp_obj_t microbit_running_time(void) {
    return MP_OBJ_NEW_SMALL_INT(system_timer_current_time());
}
MP_DEFINE_CONST_FUN_OBJ_0(microbit_running_time_obj, microbit_running_time);

STATIC mp_obj_t microbit_panic(mp_uint_t n_args, const mp_obj_t *args) {
    if (n_args == 0) {
        // TODO the docs don't mention this, so maybe remove it?
        microbit_panic(999);
    } else {
        microbit_panic(mp_obj_get_int(args[0]));
    }
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_VAR_BETWEEN(microbit_panic_obj, 0, 1, microbit_panic);

STATIC mp_obj_t microbit_temperature(void) {
    NRF_TEMP->TASKS_START = 1;
    while (NRF_TEMP->EVENTS_DATARDY == 0) {
    }
    NRF_TEMP->EVENTS_DATARDY = 0;
    int32_t temp = NRF_TEMP->TEMP / 4;
    NRF_TEMP->TASKS_STOP = 1;
    return mp_obj_new_int(temp);
}
MP_DEFINE_CONST_FUN_OBJ_0(microbit_temperature_obj, microbit_temperature);

STATIC const mp_map_elem_t microbit_module_globals_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR___name__), MP_OBJ_NEW_QSTR(MP_QSTR_calliope_mini) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_Image), (mp_obj_t)&microbit_image_type },

    { MP_OBJ_NEW_QSTR(MP_QSTR_display), (mp_obj_t)&microbit_display_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_button_a), (mp_obj_t)&microbit_button_a_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_button_b), (mp_obj_t)&microbit_button_b_obj },
    
    //################### Calliope mini ################################
    { MP_OBJ_NEW_QSTR(MP_QSTR_accelerometer), (mp_obj_t)&calliope_accelerometer_obj },
	{ MP_OBJ_NEW_QSTR(MP_QSTR_gyrometer), (mp_obj_t)&calliope_gyrometer_obj },
	{ MP_OBJ_NEW_QSTR(MP_QSTR_magnetometer), (mp_obj_t)&calliope_magnetometer_obj },

	
	{ MP_OBJ_NEW_QSTR(MP_QSTR_sensor), (mp_obj_t)&calliope_sensor_obj },
	{ MP_OBJ_NEW_QSTR(MP_QSTR_led), (mp_obj_t)&calliope_led_obj },
    //##################################################################

    { MP_OBJ_NEW_QSTR(MP_QSTR_i2c), (mp_obj_t)&microbit_i2c_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_uart), (mp_obj_t)&microbit_uart_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_spi), (mp_obj_t)&microbit_spi_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_reset), (mp_obj_t)&microbit_reset_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_sleep), (mp_obj_t)&microbit_sleep_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_running_time), (mp_obj_t)&microbit_running_time_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_panic), (mp_obj_t)&microbit_panic_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_temperature), (mp_obj_t)&microbit_temperature_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_pin0), (mp_obj_t)&microbit_p0_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin1), (mp_obj_t)&microbit_p1_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin2), (mp_obj_t)&microbit_p2_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin3), (mp_obj_t)&microbit_p3_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin4), (mp_obj_t)&microbit_p4_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin5), (mp_obj_t)&microbit_p5_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin6), (mp_obj_t)&microbit_p6_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin7), (mp_obj_t)&microbit_p7_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin8), (mp_obj_t)&microbit_p8_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin9), (mp_obj_t)&microbit_p9_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin10), (mp_obj_t)&microbit_p10_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin11), (mp_obj_t)&microbit_p11_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin12), (mp_obj_t)&microbit_p12_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin13), (mp_obj_t)&microbit_p13_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin14), (mp_obj_t)&microbit_p14_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin15), (mp_obj_t)&microbit_p15_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin16), (mp_obj_t)&microbit_p16_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin17), (mp_obj_t)&microbit_p17_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin18), (mp_obj_t)&microbit_p18_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin19), (mp_obj_t)&microbit_p19_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin20), (mp_obj_t)&microbit_p20_obj },

    //################### Calliope mini ################################    
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin21), (mp_obj_t)&microbit_p21_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin22), (mp_obj_t)&microbit_p22_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin23), (mp_obj_t)&microbit_p23_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin24), (mp_obj_t)&microbit_p24_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin25), (mp_obj_t)&microbit_p25_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin26), (mp_obj_t)&microbit_p26_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin27), (mp_obj_t)&microbit_p27_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin28), (mp_obj_t)&microbit_p28_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin29), (mp_obj_t)&microbit_p29_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_pin30), (mp_obj_t)&microbit_p30_obj },


    { MP_OBJ_NEW_QSTR(MP_QSTR_p0), (mp_obj_t)&microbit_p0_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_p1), (mp_obj_t)&microbit_p1_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_p2), (mp_obj_t)&microbit_p2_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_p3), (mp_obj_t)&microbit_p22_obj },

    { MP_OBJ_NEW_QSTR(MP_QSTR_c0), (mp_obj_t)&microbit_p0_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c1), (mp_obj_t)&microbit_p1_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c2), (mp_obj_t)&microbit_p2_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c3), (mp_obj_t)&microbit_p22_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c4), (mp_obj_t)&microbit_p4_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c5), (mp_obj_t)&microbit_p5_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c6), (mp_obj_t)&microbit_p6_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c7), (mp_obj_t)&microbit_p7_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c8), (mp_obj_t)&microbit_p8_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c9), (mp_obj_t)&microbit_p9_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c10), (mp_obj_t)&microbit_p10_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c11), (mp_obj_t)&microbit_p11_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c12), (mp_obj_t)&microbit_p12_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c16), (mp_obj_t)&microbit_p26_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c17), (mp_obj_t)&microbit_p27_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c18), (mp_obj_t)&microbit_p20_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c19), (mp_obj_t)&microbit_p19_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_c21), (mp_obj_t)&microbit_p3_obj },
    //##################################################################
};

STATIC MP_DEFINE_CONST_DICT(microbit_module_globals, microbit_module_globals_table);

const mp_obj_module_t microbit_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&microbit_module_globals,
};

}
