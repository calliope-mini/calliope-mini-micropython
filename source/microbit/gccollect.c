/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
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

#include "py/mpstate.h"
#include "py/gc.h"

__attribute__((naked)) uint32_t gc_helper_get_regs_and_sp(uint32_t *regs) {
    (void)regs;

    // store registers into given array and return the stack pointer
    __asm volatile (
    "str    r4, [r0, #0]\n"
    "str    r5, [r0, #4]\n"
    "str    r6, [r0, #8]\n"
    "str    r7, [r0, #12]\n"
    "mov    r1, r8\n"
    "str    r1, [r0, #16]\n"
    "mov    r1, r9\n"
    "str    r1, [r0, #20]\n"
    "mov    r1, r10\n"
    "str    r1, [r0, #24]\n"
    "mov    r1, r11\n"
    "str    r1, [r0, #28]\n"
    "mov    r1, r12\n"
    "str    r1, [r0, #32]\n"
    "mov    r1, r13\n"
    "str    r1, [r0, #36]\n"
    "mov    r0, sp\n"
    "bx     lr\n"
    );
}

void gc_collect(void) {
    gc_collect_start();

    // get the registers and the sp
    uint32_t regs[10];
    uint32_t sp = gc_helper_get_regs_and_sp(regs);

    // trace the stack, including the registers (since they live on the stack in this function)
    gc_collect_root((void**)sp, ((uint32_t)MP_STATE_THREAD(stack_top) - sp) / sizeof(uint32_t));

    gc_collect_end();
}
