// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
                KC_F11, KC_F12, KC_F1,  KC_F2,                                                                              KC_F3,  KC_F4,  KC_F5,  KC_F6,  
                KC_1,   KC_2,   KC_3,   KC_4,                                                                               KC_1,   KC_2,   KC_3,   KC_4,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_G,   KC_K,                                               KC_K,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_G,   KC_K,
                KC_A,   KC_S,   KC_D,   KC_F,                                                                               KC_A,   KC_S,   KC_D,   KC_F,
KC_LEFT_SHIFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_BACKSPACE,   KC_J,           KC_L,           KC_X,       KC_Z,   KC_X,   KC_C,   KC_V,   KC_X,   KC_J,    MO(1),
                                                KC_Y,           KC_SPACE,       KC_U,           KC_Y,       KC_SPACE,       KC_U,
                                                                KC_SPACE,       KC_LEFT_CTRL,   KC_SPACE,   KC_LEFT_CTRL
    ),
    [1] = LAYOUT(
                KC_F7,  KC_F8,  KC_F9,  KC_F10,                                                                             KC_F3,  KC_F4,  KC_F5,  KC_F6,  
                KC_1,   KC_2,   KC_3,   KC_4,                                                                               KC_1,   KC_2,   KC_3,   KC_4,
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_G,   KC_K,                                               KC_K,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_G,   KC_K,
                KC_A,   KC_S,   KC_D,   KC_F,                                                                               KC_A,   KC_S,   KC_D,   KC_F,
KC_LEFT_SHIFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_BACKSPACE,   KC_J,           KC_L,           KC_X,       KC_Z,   KC_X,   KC_C,   KC_V,   KC_X,   KC_J,   KC_J,
                                                KC_Y,           KC_SPACE,       KC_U,           KC_Y,       KC_SPACE,       KC_U,
                                                                KC_SPACE,       KC_LEFT_CTRL,   KC_SPACE,   KC_LEFT_CTRL
    )
};
