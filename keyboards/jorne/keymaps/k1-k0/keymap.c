// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(KC_LGUI, KC_RBRC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RGUI, KC_GRV, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT, KC_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS, LT(3,KC_TAB), LT(2,KC_SPC), LT(1,KC_ENT), LT(1,KC_ESC), LT(2,KC_BSPC), LT(3,KC_DEL)),
    [_LOWER] = LAYOUT(KC_PLUS, LGUI_T(KC_NUM), KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PPLS, KC_EQL, KC_PLUS, KC_COLN, KC_SCLN, KC_PIPE, RGUI_T(KC_GRV), KC_UNDS, LCTL_T(KC_PCMM), KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_PMNS, KC_MINS, KC_LPRN, KC_LBRC, KC_LCBR, KC_LT, RCTL_T(KC_QUOT), LALT_T(KC_PDOT), KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_PEQL, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT, RALT_T(KC_BSLS), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_RAISE] = LAYOUT(LGUI_T(KC_NUM), KC_ENT, KC_SLSH, KC_7, KC_8, KC_9, KC_PLUS, KC_EQL, KC_PGUP, KC_UP, KC_PGDN, KC_VOLU, KC_SCRL, RGUI_T(KC_SCRL), KC_COMM, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_MINS, KC_HOME, RSFT_T(KC_LEFT), RCTL_T(KC_DOWN), RALT_T(KC_RGHT), RGUI_T(KC_END), KC_PSCR, KC_DOT, KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_MINS, KC_INS, KC_APP, KC_DEL, KC_VOLD, KC_PAUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_ADJUST] = LAYOUT(QK_BOOT, LGUI_T(KC_NO), KC_SCRL, KC_F7, KC_F8, KC_F9, KC_F10, KC_EXEC, KC_BRIU, KC_VOLU, KC_BRID, KC_SCRL, RGUI_T(KC_NO), QK_BOOT, LCTL_T(KC_NO), LGUI_T(KC_PSCR), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_APP, RSFT_T(KC_MPRV), RCTL_T(KC_VOLD), RALT_T(KC_MNXT), RGUI_T(KC_PSCR), RCTL_T(KC_NO), LALT_T(KC_NO), KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, KC_HELP, KC_MSTP, KC_MUTE, KC_MPLY, KC_PAUS, RALT_T(KC_NO), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};