// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "lib/add_keycodes.h"

// レイヤー名
enum layer_number {
    BASE = 0,
    ONOFF, OFFON, ONON,                       // トグルスイッチで変更するレイヤー
    LOWER, UPPER, UTIL,                       // 長押しで変更するレイヤー
    MOUSE, BALL_SETTINGS, LIGHT_SETTINGS // 自動マウスレイヤー切り替えや設定用のレイヤー
};

// キーマップの設定
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
        // 左手
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        KC_G, KC_H, KC_I, KC_J, KC_K, KC_L,
        KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R,
        KC_S, KC_T, KC_U, KC_V, KC_W, KC_X,
        KC_1, KC_2,
        KC_3, KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_0,
        // 右手
        KC_A, KC_B, KC_C, KC_D, KC_E, KC_F,
        KC_G, KC_H, KC_I, KC_J, KC_K, KC_L,
        KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R,
        KC_S, KC_T, KC_U, KC_V, KC_W, KC_X,
        KC_1, KC_2,
        KC_3, KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_0
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] =   {
        ENCODER_CCW_CW(KC_1, KC_2),
        ENCODER_CCW_CW(KC_3, KC_4),
        ENCODER_CCW_CW(KC_5, KC_6),
        ENCODER_CCW_CW(KC_7, KC_8),
        ENCODER_CCW_CW(KC_1, KC_2),
        ENCODER_CCW_CW(KC_3, KC_4),
        ENCODER_CCW_CW(KC_5, KC_6),
        ENCODER_CCW_CW(KC_7, KC_8)
    }
};
