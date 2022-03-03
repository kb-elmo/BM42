// Copyright 2022 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xA68C
#define PRODUCT_ID   0xDC9B
#define DEVICE_VER   0x0001
#define MANUFACTURER kb_elmo
#define PRODUCT      BM42

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 11

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { D2, D3, C7, C6 }
#define MATRIX_COL_PINS { C5, D1, B5, B4, B3, B2, B1, B0, D6, D5, D4 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
