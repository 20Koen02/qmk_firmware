#include QMK_KEYBOARD_H
#include "print.h"

enum custom_keycodes {
    CU_00 = SAFE_RANGE,
    CU_01,
    CU_10,
    CU_11,
    CU_12,
    CU_20,
    CU_21,
    CU_22
};

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_3x3(
        KC_MPRV,         KC_MNXT,         RESET,
        CU_10,           CU_11,           KC_MPLY,
        CU_20,           CU_21,           CU_22
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CU_00 ... CU_01: // Skip

        case CU_10:
            if (record->event.pressed) {
                SEND_STRING("Macro!");
            }
            break;
        
        case CU_11:
            if (record->event.pressed) {
                SEND_STRING("Macro!");
            }
            break;
    
        case CU_12: // Skip

        case CU_20:
            if (record->event.pressed) {
                SEND_STRING("Macro!");
            }
            break;
        
        case CU_21:
            if (record->event.pressed) {
                SEND_STRING("Macro!");
            }
            break;

        case CU_22:
            if (record->event.pressed) {
                SEND_STRING("Macro!");
            }
            break;
    }
    return true;
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
}