// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "lib/add_keycodes.h"

// キーマップ
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // Side0
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G,
        // Side1
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   {
        ENCODER_CCW_CW(KC_1, KC_2)
    },
};
