// Copyright 2021 Hayashi (@w_vwbw)
// SPDX-License-Identifier: GPL-3.0-or-later

#include QMK_KEYBOARD_H
#include "lib/add_keycodes.h"

enum layer_names {
    BASE = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        // キースイッチ、クリックボタン
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H,
        KC_I, KC_J, KC_K, KC_L,
        // ロータリーエンコーダー
        KC_M, KC_N, KC_O, KC_P,
        // マウスボタン
        KC_Q, KC_R,
        // レバーボタン
        KC_S, KC_T, KC_U,
        KC_V, KC_W, KC_X,
        // 側面ボタン
        KC_1, KC_2,
        KC_3, KC_4,
        // 背面ボタン
        KC_5, KC_6, KC_7,
        // スライドスイッチ
        KC_8,
        // センタープッシュ（無効）
        XXXXXXX
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] =   {
      ENCODER_CCW_CW(KC_1, KC_2),
      ENCODER_CCW_CW(KC_3, KC_4),
      ENCODER_CCW_CW(KC_5, KC_6)
      }
};
