// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,   KC_1,   KC_2,   KC_3, KC_4, KC_T,
        KC_TAB,   KC_Z,   KC_Q,   KC_W, KC_E, KC_R, KC_G, 
        KC_LALT,   KC_X,   KC_A,   KC_S, KC_D,KC_F, KC_SPACE, KC_BSPC,
        KC_B, KC_N, KC_RCTL
    ),
};
