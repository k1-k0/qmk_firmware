// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};


// enum custom_keycodes {
//     RGBRST = SAFE_RANGE
// };

#define RBR_RGU MT(MOD_RGUI, KC_RBRC)
#define F12_RGU MT(MOD_RGUI, KC_F12)
#define PLS_LCT MT(MOD_LCTL, KC_PPLS)
#define EQL_LCT MT(MOD_LCTL, KC_PEQL)
#define APP_LCT MT(MOD_LCTL, KC_APP)
#define EQL_RCT MT(MOD_RCTL, KC_PEQL)
#define QUO_RCT MT(MOD_RCTL, KC_QUOT)
#define APP_RCT MT(MOD_RCTL, KC_APP)
#define MIN_RCT MT(MOD_RCTL, KC_MINS)
#define EQL_LAL MT(MOD_LALT, KC_EQL)
#define BSL_RAL MT(MOD_RALT, KC_BSLS)
#define BSP_LSH MT(MOD_LSFT, KC_BSPC)
#define SPC_RSH MT(MOD_RSFT, KC_SPC)
#define DEL_RSE LT(_RAISE, KC_DEL)
#define TAB_RSE LT(_RAISE, KC_TAB)
#define ENT_LWR LT(_LOWER, KC_ENT)
#define ESC_LWR LT(_LOWER, KC_ESC)

// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// [_QWERTY] = LAYOUT(
//   KC_LGUI, KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, RGUI_T(KC_RBRC),
//            KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, RCTL_T(KC_QUOT),
//            KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, BSL_RAL,
//                                       TAB_RSE, SPC_RSH, ENT_LWR,      ESC_LWR, BSP_LSH, DEL_RSE
// ),

// [_LOWER] = LAYOUT(
//   _______, KC_UNDS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  F12_RGU,
//            PLS_LCT, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, MIN_RCT,
//            EQL_LAL, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
//                                       _______, _______, _______,      _______, _______, _______
// ),

// [_RAISE] = LAYOUT(
//   _______, KC_NUM,  KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      KC_VOLU, KC_HOME, KC_PSCR, KC_PGUP, KC_SCRL, KC_CAPS, _______,
//            EQL_LCT, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      KC_MUTE, KC_LEFT, KC_UP,   KC_RGHT, KC_INS,  APP_RCT,
//            _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      KC_VOLD, KC_END,  KC_DOWN, KC_PGDN, KC_PAUS, _______,
//                                       _______, _______, _______,      _______, _______, _______
// ),

// [_ADJUST] = LAYOUT(
//   QK_BOOT, RGBRST,  AS_UP,   AS_TOGG, AS_DOWN, _______, _______,      _______, _______, AS_DOWN, AS_TOGG, AS_UP,   RGBRST,  QK_BOOT,
//            RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______,      _______, _______, RGB_VAI, RGB_SAI, RGB_HUI, RGB_TOG,
//            RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______,      _______, _______, RGB_VAD, RGB_SAD, RGB_HUD, RGB_MOD,
//                                       _______, SH_TG,   _______,      _______, SH_TG,   _______
// ),

// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(KC_LGUI, KC_RBRC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RGUI, KC_GRV, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, LT(3,KC_TAB), LT(2,KC_SPC), LT(1,KC_ENT), LT(1,KC_ESC), LT(2,KC_BSPC), LT(3,KC_DEL)),
    [_LOWER] = LAYOUT(KC_PLUS, LGUI_T(KC_NUM), KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PPLS, KC_EQL, KC_PLUS, KC_COLN, KC_SCLN, KC_PIPE, RGUI_T(KC_GRV), KC_UNDS, LCTL_T(KC_PCMM), KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_PMNS, KC_MINS, KC_LPRN, KC_LBRC, KC_LCBR, KC_LT, RCTL_T(KC_QUOT), LALT_T(KC_PDOT), KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_PEQL, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT, RALT_T(KC_BSLS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_RAISE] = LAYOUT(LGUI_T(KC_NUM), KC_ENT, KC_SLSH, KC_7, KC_8, KC_9, KC_PLUS, KC_VOLU, KC_INS, KC_HOME, KC_PGUP, KC_MNXT, KC_MUTE, RGUI_T(KC_SCRL), KC_COMM, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_MINS, KC_LEFT, RSFT_T(KC_DOWN), RCTL_T(KC_UP), RALT_T(KC_RGHT), RGUI_T(KC_APP), KC_CAPS, KC_DOT, KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_VOLD, KC_DEL, KC_END, KC_PGDN, KC_MPRV, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_ADJUST] = LAYOUT(QK_BOOT, LGUI_T(KC_NO), KC_PAUS, KC_F7, KC_F8, KC_F9, KC_F10, KC_EXEC, KC_BRID, KC_BRIU, KC_HELP, KC_PAUS, RGUI_T(KC_NO), QK_BOOT, LCTL_T(KC_NO), LGUI_T(KC_SCRL), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_MRWD, RSFT_T(KC_VOLD), RCTL_T(KC_VOLU), RALT_T(KC_MFFD), RGUI_T(KC_PSCR), RCTL_T(KC_NO), LALT_T(KC_NO), KC_SCRL, KC_F1, KC_F2, KC_F3, KC_F12, KC_MSTP, KC_MUTE, KC_TRNS, KC_MPLY, KC_SCRL, RALT_T(KC_NO), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};


// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }
