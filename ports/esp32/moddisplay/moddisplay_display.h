/*
 * This file is part of the Troopers 19 Badge project, https://troopers.de/troopers19/
 *
 * The BSD 3-Clause License
 *
 * Copyright (c) 2019 "Malte Heinzelmann" <malte@hnzlmnn.de>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MICROPY_INCLUDED_EXTMOD_DISPLAY_DISPLAY_H
#define MICROPY_INCLUDED_EXTMOD_DISPLAY_DISPLAY_H

#include "moddisplay_frame.h"

// this is the actual C-structure for our new object
typedef struct _display_display_obj_t {
    // base represents some basic information, like type
    mp_obj_base_t base;
    // SPI instance for writing
    mp_obj_t *spi;
    #ifndef UNIX
        gpio_num_t rst, dc, cs, busy;
    #endif
    // a member created by us
    unsigned char font, partial;
    display_frame_t frame_obj;
    display_frame_t *frame;
} display_display_obj_t;


#endif // MICROPY_INCLUDED_EXTMOD_DISPLAY_DISPLAY_H
