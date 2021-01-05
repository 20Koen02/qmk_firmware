#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055
#define PRODUCT_ID 0x3534
#define DEVICE_VER 0x0001
#define MANUFACTURER Koen van Wijngaarden
#define PRODUCT VOID9
#define DESCRIPTION A handwired 3x3 Macropad with rotary

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/* Keyboard Matrix Assignments
 *
 * Modify to match your wiring
 *
 *                        1   2   3 
 */
#define MATRIX_ROW_PINS { D0, D4, C6 }
#define MATRIX_COL_PINS { D1, D2, D3 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 4

#define USB_POLLING_INTERVAL_MS 10
#define TAP_CODE_DELAY 10
#define FORCE_NKRO

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Tap dance max time */
#define TAPPING_TERM 200

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif
