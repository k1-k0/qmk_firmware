// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY = 0,
  _DVORAK = 1,
  _LOWER = 2,
  _RAISE = 3,
  _ADJUST = 4,
  _MOUSE = 5,
};

enum combos {
  // QWERTY
  SD_CAPS,
  DF_QUOT,
  ER_LBRC,
  WE_GRV,
  CV_BSLS,
  AS_CAPS_WORD,

  JK_QUOT,
  KL_CAPS,
  UI_RBRC,
  IO_GRV,
  MCMM_BSLS,
  LSCLN_CAPS_WORD,

  // DVORAK
  OE_CAPS,
  EU_QUOT,
  DOTP_LBRC,
  CMMDOT_GRV,
  JK_BSLS,
  AO_CAPS_WORD,

  HT_QUOT,
  TN_CAPS,
  GC_RBRC,
  CR_GRV,
  MW_BSLS,
  NS_CAPS_WORD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_NO, KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_NO, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), KC_NO, KC_NO, KC_Z, KC_X, LT(_MOUSE,KC_C), KC_V, KC_B, KC_N, KC_M, LT(_MOUSE,KC_COMM), KC_DOT, KC_SLSH, KC_NO, LT(_ADJUST,KC_TAB), LT(_RAISE,KC_SPC), LT(_LOWER,KC_ENT), LT(_LOWER,KC_ESC), LT(_RAISE,KC_BSPC), LT(_ADJUST,KC_DEL)),
  [1] = LAYOUT(KC_NO, KC_NO, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_NO, KC_NO, KC_NO, LGUI_T(KC_A), LALT_T(KC_O), LCTL_T(KC_E), LSFT_T(KC_U), KC_I, KC_D, RSFT_T(KC_H), RCTL_T(KC_T), RALT_T(KC_N), RGUI_T(KC_S), KC_NO, KC_NO, KC_SCLN, KC_Q, LT(_MOUSE,KC_J), KC_K, KC_X, KC_B, KC_M, LT(_MOUSE,KC_W), KC_V, KC_Z, KC_NO, LT(_ADJUST,KC_TAB), LT(_RAISE,KC_SPC), LT(_LOWER,KC_ENT), LT(_LOWER,KC_ESC), LT(_RAISE,KC_BSPC), LT(_ADJUST,KC_DEL)),
  [2] = LAYOUT(KC_NO, KC_NO, KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_DQUO, KC_EQL, KC_QUOT, KC_GRV, KC_BSLS, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_QUOT, KC_MINS, KC_LPRN, KC_LBRC, KC_LCBR, KC_LT, KC_NO, KC_NO, KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_GRV, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [3] = LAYOUT(KC_NO, KC_NO, KC_SLSH, KC_7, KC_8, KC_9, KC_PLUS, CW_TOGG, KC_PGUP, KC_UP, KC_PGDN, KC_SCRL, KC_NO, KC_NO, KC_NO, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_MINS, KC_HOME, RSFT_T(KC_LEFT), RCTL_T(KC_DOWN), RALT_T(KC_RGHT), RGUI_T(KC_END), KC_NO, KC_NO, KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_CAPS, KC_INS, KC_APP, KC_DEL, KC_PSCR, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [4] = LAYOUT(KC_NO, KC_NO, KC_SCRL, KC_F7, KC_F8, KC_F9, KC_F10, QK_AREP, KC_BRIU, KC_VOLU, KC_BRID, DF(1), KC_NO, KC_NO, KC_NO, LGUI_T(KC_PSCR), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_APP, RSFT_T(KC_MPRV), RCTL_T(KC_VOLD), RALT_T(KC_MNXT), RGUI_T(KC_PSCR), KC_NO, KC_NO, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, QK_REP, KC_MSTP, KC_MUTE, KC_MPLY, DF(0), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [5] = LAYOUT(KC_NO, KC_NO, KC_BTN5, KC_WH_U, KC_MS_U, KC_WH_D, KC_BTN4, KC_BTN4, KC_WH_U, KC_MS_U, KC_WH_D, KC_BTN5, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, KC_WH_L, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_R, KC_NO, KC_NO, KC_BTN5, KC_BTN2, KC_BTN1, KC_BTN1, KC_BTN4, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_NO, KC_ACL0, KC_ACL1, KC_ACL2, KC_ACL2, KC_ACL1, KC_ACL0)
};

// QWERTY
const uint16_t PROGMEM q_sd_combo[] = {LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM q_df_combo[] = {LCTL_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM q_er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM q_we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM q_cv_combo[] = {LT(_MOUSE,KC_C), KC_V, COMBO_END};
const uint16_t PROGMEM q_as_combo[] = {LGUI_T(KC_A), LALT_T(KC_S), COMBO_END};

const uint16_t PROGMEM q_jk_combo[] = {RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM q_kl_combo[] = {RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM q_ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM q_io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM q_mcmm_combo[] = {KC_M, LT(_MOUSE,KC_COMM), COMBO_END};
const uint16_t PROGMEM q_lscln_combo[] = {RALT_T(KC_L), RGUI_T(KC_SCLN), COMBO_END};

// DVORAK
const uint16_t PROGMEM d_oe_combo[] = {LALT_T(KC_O), LCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM d_eu_combo[] = {LCTL_T(KC_E), LSFT_T(KC_U), COMBO_END};
const uint16_t PROGMEM d_dotp_combo[] = {KC_DOT, KC_P, COMBO_END};
const uint16_t PROGMEM d_cmmdot_combo[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM d_jk_combo[] = {LT(_MOUSE,KC_J), KC_K, COMBO_END};
const uint16_t PROGMEM d_ao_combo[] = {LGUI_T(KC_A), LALT_T(KC_O), COMBO_END};

const uint16_t PROGMEM d_ht_combo[] = {RSFT_T(KC_H), RCTL_T(KC_T), COMBO_END};
const uint16_t PROGMEM d_tn_combo[] = {RCTL_T(KC_T), RALT_T(KC_N), COMBO_END};
const uint16_t PROGMEM d_gc_combo[] = {KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM d_cr_combo[] = {KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM d_mw_combo[] = {KC_M, LT(_MOUSE,KC_W), COMBO_END};
const uint16_t PROGMEM d_ns_combo[] = {RALT_T(KC_N), RGUI_T(KC_S), COMBO_END};


combo_t key_combos[COMBO_COUNT] = {
  // QWERTY
  [SD_CAPS] = COMBO(q_sd_combo, KC_CAPS),
  [DF_QUOT] = COMBO(q_df_combo, KC_QUOT),
  [ER_LBRC] = COMBO(q_er_combo, KC_LBRC),
  [WE_GRV] = COMBO(q_we_combo, KC_GRV),
  [CV_BSLS] = COMBO(q_cv_combo, KC_BSLS),
  [AS_CAPS_WORD] = COMBO(q_as_combo, CW_TOGG),

  [JK_QUOT] = COMBO(q_jk_combo, KC_QUOT),
  [KL_CAPS] = COMBO(q_kl_combo, KC_CAPS),
  [UI_RBRC] = COMBO(q_ui_combo, KC_RBRC),
  [IO_GRV] = COMBO(q_io_combo, KC_GRV),
  [MCMM_BSLS] = COMBO(q_mcmm_combo, KC_BSLS),
  [LSCLN_CAPS_WORD] = COMBO(q_lscln_combo, CW_TOGG),

  // DVORAK
  [OE_CAPS] = COMBO(d_oe_combo, KC_CAPS),
  [EU_QUOT] = COMBO(d_eu_combo, KC_QUOT),
  [DOTP_LBRC] = COMBO(d_dotp_combo, KC_LBRC),
  [CMMDOT_GRV] = COMBO(d_cmmdot_combo, KC_GRV),
  [JK_BSLS] = COMBO(d_jk_combo, KC_BSLS),
  [AO_CAPS_WORD] = COMBO(d_ao_combo, CW_TOGG),

  [HT_QUOT] = COMBO(d_ht_combo, KC_QUOT),
  [TN_CAPS] = COMBO(d_tn_combo, KC_CAPS),
  [GC_RBRC] = COMBO(d_gc_combo, KC_RBRC),
  [CR_GRV] = COMBO(d_cr_combo, KC_GRV),
  [MW_BSLS] = COMBO(d_mw_combo, KC_BSLS),
  [NS_CAPS_WORD] = COMBO(d_ns_combo, CW_TOGG),
};
