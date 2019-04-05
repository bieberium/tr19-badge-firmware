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

#include "moddisplay/moddisplay_font.h"

#define FONT_LOGOS_32   7


const uint8_t Font_Logos32_Table[] = {
// @0 0x41 65("A") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x7F, 	0x00, /*                  #######         */
	0x00, 	0x01, 	0xFF, 	0xC0, /*                ###########       */
	0x00, 	0x07, 	0x00, 	0xE0, /*              ###        ###      */
	0x00, 	0x0E, 	0x00, 	0x30, /*             ###           ##     */
	0x00, 	0x0C, 	0x00, 	0x18, /*             ##             ##    */
	0x00, 	0x18, 	0x00, 	0x0C, /*            ##               ##   */
	0x00, 	0x10, 	0x00, 	0x0C, /*            #                ##   */
	0x00, 	0x30, 	0x3E, 	0x04, /*           ##      #####      #   */
	0x70, 	0x30, 	0x7F, 	0x06, /*  ###      ##     #######     ##  */
	0x98, 	0x30, 	0xFF, 	0x06, /* #  ##     ##    ########     ##  */
	0x8F, 	0xAF, 	0xFF, 	0x06, /* #   ##### # ############     ##  */
	0x98, 	0x30, 	0xFF, 	0x06, /* #  ##     ##    ########     ##  */
	0x70, 	0x30, 	0x7F, 	0x06, /*  ###      ##     #######     ##  */
	0x00, 	0x30, 	0xFE, 	0x04, /*           ##    #######      #   */
	0x00, 	0x30, 	0x98, 	0x0C, /*           ##    #  ##       ##   */
	0x00, 	0x1B, 	0x00, 	0x0C, /*            ## ##            ##   */
	0x00, 	0x0C, 	0x00, 	0x18, /*             ##             ##    */
	0x00, 	0x0E, 	0x00, 	0x30, /*             ###           ##     */
	0x00, 	0x17, 	0x00, 	0xE0, /*            # ###        ###      */
	0x00, 	0x31, 	0xFF, 	0xC0, /*           ##   ###########       */
	0x07, 	0x60, 	0x7F, 	0x00, /*      ### ##      #######         */
	0x18, 	0xC0, 	0x00, 	0x00, /*    ##   ##                       */
	0x10, 	0x40, 	0x00, 	0x00, /*    #     #                       */
	0x20, 	0x40, 	0x00, 	0x00, /*   #      #                       */
	0x20, 	0x40, 	0x00, 	0x00, /*   #      #                       */
	0x10, 	0x40, 	0x00, 	0x00, /*    #     #                       */
	0x18, 	0xC0, 	0x00, 	0x00, /*    ##   ##                       */
	0x0F, 	0x00, 	0x00, 	0x00, /*     ####                         */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


// @32 0x42 66("B") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x01, 	0x80, 	0x00, /*                ##                */
	0x00, 	0x0F, 	0xF0, 	0x00, /*             ########             */
	0x01, 	0xFF, 	0xFF, 	0x80, /*        ##################        */
	0x03, 	0xFF, 	0xFF, 	0xC0, /*       ####################       */
	0x03, 	0xFC, 	0x3F, 	0xC0, /*       ########    ########       */
	0x07, 	0xE0, 	0x07, 	0xE0, /*      ######          ######      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x07, 	0x80, 	0x01, 	0xE0, /*      ####              ####      */
	0x03, 	0x80, 	0x01, 	0xC0, /*       ###              ###       */
	0x03, 	0x80, 	0x01, 	0xC0, /*       ###              ###       */
	0x03, 	0xC0, 	0x03, 	0xC0, /*       ####            ####       */
	0x03, 	0xC0, 	0x03, 	0xC0, /*       ####            ####       */
	0x03, 	0xC0, 	0x03, 	0xC0, /*       ####            ####       */
	0x01, 	0xE0, 	0x07, 	0x80, /*        ####          ####        */
	0x01, 	0xE0, 	0x07, 	0x80, /*        ####          ####        */
	0x00, 	0xF0, 	0x0F, 	0x00, /*         ####        ####         */
	0x00, 	0xF0, 	0x0F, 	0x00, /*         ####        ####         */
	0x00, 	0x78, 	0x1E, 	0x00, /*          ####      ####          */
	0x00, 	0x7C, 	0x3E, 	0x00, /*          #####    #####          */
	0x00, 	0x3E, 	0x7C, 	0x00, /*           #####  #####           */
	0x00, 	0x1F, 	0xF8, 	0x00, /*            ##########            */
	0x00, 	0x0F, 	0xF0, 	0x00, /*             ########             */
	0x00, 	0x07, 	0xE0, 	0x00, /*              ######              */
	0x00, 	0x03, 	0xC0, 	0x00, /*               ####               */
	0x00, 	0x01, 	0x80, 	0x00, /*                ##                */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


// @64 0x43 67("C") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x01, 	0x00, /*                        #         */
	0x00, 	0x00, 	0x01, 	0xC0, /*                        ###       */
	0x0C, 	0x00, 	0x01, 	0xE0, /*     ##                 ####      */
	0x1F, 	0x00, 	0x03, 	0xE0, /*    #####              #####      */
	0x1F, 	0xC0, 	0x03, 	0xF0, /*    #######            ######     */
	0x0F, 	0xE0, 	0x03, 	0xF0, /*     #######           ######     */
	0x07, 	0xF8, 	0x03, 	0xB8, /*      ########         ### ###    */
	0x07, 	0x3E, 	0x03, 	0xB8, /*      ###  #####       ### ###    */
	0x03, 	0x8F, 	0x83, 	0x9C, /*       ###   #####     ###  ###   */
	0x03, 	0xC3, 	0xE3, 	0x1C, /*       ####    #####   ##   ###   */
	0x01, 	0xC1, 	0xFB, 	0x0C, /*        ###     ###### ##    ##   */
	0x00, 	0xE0, 	0x7F, 	0x0E, /*         ###      #######    ###  */
	0x00, 	0xE0, 	0x1F, 	0x8E, /*         ###        ######   ###  */
	0x00, 	0x70, 	0x07, 	0xE7, /*          ###         ######  ### */
	0x00, 	0x38, 	0x07, 	0xFF, /*           ###        ########### */
	0x00, 	0x38, 	0x07, 	0x7F, /*           ###        ### ####### */
	0x00, 	0x1C, 	0x07, 	0x1F, /*            ###       ###   ##### */
	0x00, 	0x0E, 	0x7F, 	0xFF, /*             ###  ############### */
	0x07, 	0xFF, 	0xFF, 	0xFE, /*      ##########################  */
	0xFF, 	0xFF, 	0xFF, 	0x00, /* ########################         */
	0xFF, 	0xF3, 	0x86, 	0x00, /* ############  ###    ##          */
	0x00, 	0x03, 	0x86, 	0x00, /*               ###    ##          */
	0x00, 	0x01, 	0xCE, 	0x00, /*                ###  ###          */
	0x00, 	0x01, 	0xEE, 	0x00, /*                #### ###          */
	0x00, 	0x00, 	0xEE, 	0x00, /*                 ### ###          */
	0x00, 	0x00, 	0x7E, 	0x00, /*                  ######          */
	0x00, 	0x00, 	0x7E, 	0x00, /*                  ######          */
	0x00, 	0x00, 	0x3E, 	0x00, /*                   #####          */
	0x00, 	0x00, 	0x1C, 	0x00, /*                    ###           */
	0x00, 	0x00, 	0x18, 	0x00, /*                    ##            */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


// @96 0x44 68("D") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x60, 	0x00, 	0x00, 	0x06, /*  ##                          ##  */
	0xF0, 	0x00, 	0x00, 	0x0F, /* ####                        #### */
	0xBC, 	0x00, 	0x00, 	0x3D, /* # ####                    #### # */
	0xCE, 	0x00, 	0x00, 	0x73, /* ##  ###                  ###  ## */
	0x47, 	0xC0, 	0x03, 	0xE2, /*  #   #####            #####   #  */
	0x61, 	0x60, 	0x06, 	0x86, /*  ##    # ##          ## #    ##  */
	0x61, 	0x3C, 	0x3C, 	0x86, /*  ##    #  ####    ####  #    ##  */
	0x71, 	0x8E, 	0x71, 	0x8E, /*  ###   ##   ###  ###   ##   ###  */
	0x70, 	0x65, 	0xA6, 	0x0E, /*  ###     ##  # ## #  ##     ###  */
	0x70, 	0x62, 	0x46, 	0x0E, /*  ###     ##   #  #   ##     ###  */
	0x38, 	0x32, 	0x4C, 	0x1C, /*   ###     ##  #  #  ##     ###   */
	0x38, 	0x33, 	0xCC, 	0x1C, /*   ###     ##  ####  ##     ###   */
	0x38, 	0x01, 	0x80, 	0x1C, /*   ###          ##          ###   */
	0x1E, 	0x01, 	0x80, 	0x18, /*    ####        ##          ##    */
	0x1D, 	0xF8, 	0x06, 	0x18, /*    ### ######        ##    ##    */
	0x1F, 	0xFC, 	0x1C, 	0x10, /*    ###########     ###     #     */
	0x0D, 	0xFE, 	0x38, 	0x70, /*     ## ########   ###    ###     */
	0x07, 	0xF8, 	0x00, 	0xA0, /*      ########           # #      */
	0x04, 	0x82, 	0x41, 	0x20, /*      #  #     #  #     #  #      */
	0x04, 	0x44, 	0x22, 	0x20, /*      #   #   #    #   #   #      */
	0x04, 	0x28, 	0x14, 	0x20, /*      #    # #      # #    #      */
	0x07, 	0x90, 	0x09, 	0xE0, /*      ####  #        #  ####      */
	0x08, 	0x50, 	0x0A, 	0x10, /*     #    # #        # #    #     */
	0x08, 	0x5B, 	0xDA, 	0x10, /*     #    # ## #### ## #    #     */
	0x06, 	0x2D, 	0xB4, 	0x60, /*      ##   # ## ## ## #   ##      */
	0x01, 	0x16, 	0x68, 	0x80, /*        #   # ##  ## #   #        */
	0x00, 	0xEA, 	0x57, 	0x00, /*         ### # #  # # ###         */
	0x00, 	0x1F, 	0xF8, 	0x00, /*            ##########            */
	0x00, 	0x03, 	0xC0, 	0x00, /*               ####               */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


// @128 0x45 69("E") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x60, 	0x00, 	0x00, 	0x06, /*  ##                          ##  */
	0xF0, 	0x00, 	0x00, 	0x0F, /* ####                        #### */
	0xBC, 	0x00, 	0x00, 	0x3D, /* # ####                    #### # */
	0xCE, 	0x00, 	0x00, 	0x73, /* ##  ###                  ###  ## */
	0x47, 	0x80, 	0x01, 	0xE2, /*  #   ####              ####   #  */
	0x61, 	0x60, 	0x06, 	0x86, /*  ##    # ##          ## #    ##  */
	0x61, 	0xBC, 	0x3D, 	0x86, /*  ##    ## ####    #### ##    ##  */
	0x71, 	0x9C, 	0x39, 	0x8E, /*  ###   ##  ###    ###  ##   ###  */
	0x70, 	0xC0, 	0x03, 	0x0E, /*  ###    ##            ##    ###  */
	0x70, 	0xC0, 	0x03, 	0x0E, /*  ###    ##            ##    ###  */
	0x38, 	0x00, 	0x00, 	0x1C, /*   ###                      ###   */
	0x38, 	0x00, 	0x00, 	0x1C, /*   ###                      ###   */
	0x38, 	0x00, 	0x00, 	0x1C, /*   ###                      ###   */
	0x1F, 	0x80, 	0x00, 	0x18, /*    ######                  ##    */
	0x1F, 	0xF0, 	0x06, 	0x18, /*    #########         ##    ##    */
	0x0F, 	0xF8, 	0x1E, 	0x10, /*     #########      ####    #     */
	0x07, 	0xFC, 	0x38, 	0x30, /*      #########    ###     ##     */
	0x03, 	0xFE, 	0x00, 	0x40, /*       #########          #       */
	0x01, 	0x00, 	0x00, 	0x80, /*        #                #        */
	0x00, 	0x80, 	0x01, 	0x00, /*         #              #         */
	0x00, 	0x40, 	0x02, 	0x00, /*          #            #          */
	0x00, 	0x20, 	0x04, 	0x00, /*           #          #           */
	0x00, 	0x10, 	0x08, 	0x00, /*            #        #            */
	0x00, 	0x18, 	0x18, 	0x00, /*            ##      ##            */
	0x00, 	0x0D, 	0xB0, 	0x00, /*             ## ## ##             */
	0x00, 	0x0F, 	0xF0, 	0x00, /*             ########             */
	0x00, 	0x07, 	0x60, 	0x00, /*              ### ##              */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


// @160 0x46 70("F") width: 32
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x07, 	0xFE, 	0x00, /*              ##########          */
	0x00, 	0x1F, 	0xFF, 	0x80, /*            ##############        */
	0x00, 	0x7C, 	0x07, 	0xE0, /*          #####       ######      */
	0xE0, 	0xF0, 	0x00, 	0xF0, /* ###     ####            ####     */
	0x71, 	0xE0, 	0x00, 	0x78, /*  ###   ####              ####    */
	0x38, 	0xC0, 	0x00, 	0x38, /*   ###   ##                ###    */
	0x1C, 	0x00, 	0x00, 	0x1C, /*    ###                     ###   */
	0x0E, 	0x00, 	0x00, 	0x0C, /*     ###                     ##   */
	0x3F, 	0x00, 	0xF0, 	0x0E, /*   ######        ####        ###  */
	0x1F, 	0x83, 	0xFC, 	0x06, /*    ######     ########       ##  */
	0x0F, 	0xC7, 	0xFC, 	0x06, /*     ######   #########       ##  */
	0x07, 	0xE3, 	0xFE, 	0x07, /*      ######   #########      ### */
	0x03, 	0xF1, 	0xFE, 	0x07, /*       ######   ########      ### */
	0x03, 	0xF9, 	0xFE, 	0x07, /*       #######  ########      ### */
	0x07, 	0xF1, 	0xFE, 	0x07, /*      #######   ########      ### */
	0x0F, 	0xE3, 	0xFE, 	0x07, /*     #######   #########      ### */
	0x1F, 	0xC3, 	0xFC, 	0x06, /*    #######    ########       ##  */
	0x3F, 	0x81, 	0xF8, 	0x06, /*   #######      ######        ##  */
	0x0F, 	0x00, 	0x00, 	0x0E, /*     ####                    ###  */
	0x1E, 	0x00, 	0x00, 	0x1C, /*    ####                    ###   */
	0x3C, 	0x80, 	0x00, 	0x1C, /*   ####  #                  ###   */
	0x79, 	0xC0, 	0x00, 	0x38, /*  ####  ###                ###    */
	0xF0, 	0xE0, 	0x00, 	0xF0, /* ####    ###             ####     */
	0x00, 	0x78, 	0x01, 	0xE0, /*          ####          ####      */
	0x00, 	0x3F, 	0x1F, 	0xC0, /*           ######   #######       */
	0x00, 	0x1F, 	0xFF, 	0x00, /*            #############         */
	0x00, 	0x03, 	0xFC, 	0x00, /*               ########           */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */
	0x00, 	0x00, 	0x00, 	0x00, /*                                  */


};

display_font_t FontLogos32 = {
	Font_Logos32_Table,
	FONT_LOGOS_32,
	32, /* Width */
	32, /* Height */
	65, /* Minimum */
	70, /* Maximum */
	65, /* Offset */
};
