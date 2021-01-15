/*
Copyright 2012 Maarten Dekkers <atomkeeb@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0003
#define MANUFACTURER    Maartenwut
#define PRODUCT         GH80-1800
#define DESCRIPTION     Custom PCB to fit G81-1800 and G80-1800 cases

/* key matrix size */
#define MATRIX_ROWS 11
#define MATRIX_COLS 10

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {B0,B1,B2,B3,B4,B5,B6,B7,F5,F6,F7}
#define MATRIX_COL_PINS {C6,C7,D0,D1,D2,D3,D4,F0,F1,F4}
#define UNUSED_PINS {E6}


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5


/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define QMK_ESC_OUTPUT C6 // usually COL
#define QMK_ESC_INPUT B0 // usually ROW
#define QMK_LED D6

#endif
