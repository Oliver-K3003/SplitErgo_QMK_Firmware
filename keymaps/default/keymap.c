// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define QWERTY 0
#define LAYER1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*          | ` | 1 | 2 | 3 | 4 | 5 | - |                    | = | 6 | 7 | 8 | 9 | 0 |LA1|
     *          |ALT| q | w | e | r | t | [ |                    | ] | y | u | i | o | p | \ |
     *          |SFT| a | s | d | f | g |TAB|NAN|            |NAN| ; | h | j | k | l | ' | Fn|
     *          |CTL| z | x | c | v | b |SPC|                    |BSP| n | m | , | . | / | OS|
     *                                    |EDC|               |ENT|
     */
    [QWERTY] = LAYOUT(
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_MINS,                       KC_EQL,  KC_6,   KC_7,   KC_8,    KC_9,   KC_0,    KC_NO,
        KC_LALT, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_LBRC,                       KC_RBRC, KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,    KC_BSLS,
        KC_LSFT, KC_A,  KC_S,   KC_D,   KC_F,   KC_G,   KC_TAB, KC_NO,      MO(LAYER1),  KC_SCLN, KC_H,   KC_J,   KC_K,    KC_L,   KC_QUOT, KC_DEL,
        KC_LCTL, KC_Z,  KC_X,   KC_C,   KC_V,   KC_B,   KC_SPC, KC_ESC,       KC_ENT, KC_BSPC, KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_LGUI
    ),

    [LAYER1] = LAYOUT(
        _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,  _______,                                            _______, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
        _______, _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______,  _______, _______, _______, _______, _______, _______
    )
};
