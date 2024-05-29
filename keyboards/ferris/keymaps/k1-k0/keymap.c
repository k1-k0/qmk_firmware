// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers {
    _QWERTY,
    _GAMING,
    _LOWER,
    _RAISE,
    _ADJUST,
    _MOUSE,
};

enum combos {
    SD_CAPS,
    DF_QUOT,
    AS_CAPS_WORD,
    WE_GRV,
    ER_LBRC,
    WR_PSCR,
    XC_TAB,
    CV_BSLS,
    XV_APP,

    JK_QUOT,
    KL_CAPS,
    LSCLN_CAPS_WORD,
    UI_RBRC,
    IO_GRV,
    UO_PSCR,
    MCMM_BSLS,
    CMMDOT_TAB,
    MDOT_APP,

    // Gaming
    // UIOP_GAMING_LAYER,

    // Experiments
    WS_APP,
    ED_BSLS,
    RF_MINS,
    TG_PSCR,

    SX_GRV,
    DC_TAB,
    FV_QUOT,
    GB_DEL,

    YH_PSCR,
    UJ_EQL,
    IK_BSLS,
    OL_APP,

    HN_BSPC,
    JM_QUOT,
    KCMM_LBRC,
    LDOT_RBRC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x5_2(LT(5, KC_Q), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, LT(5, KC_P), LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), LT(4, KC_G), LT(4, KC_H), RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), LT(4, KC_Z), LT(3, KC_X), LT(2, KC_C), KC_V, KC_B, KC_N, KC_M, LT(2, KC_COMM), LT(3, KC_DOT), LT(4, KC_SLSH), LT(2, KC_SPC), LT(3, KC_ENT), LT(3, KC_ESC), LT(2, KC_BSPC)),
                                                              [1] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(4, KC_SCLN), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SPC, KC_ENT, LT(3, KC_ESC), LT(2, KC_BSPC)),
                                                              [2] = LAYOUT_split_3x5_2(KC_SLSH, KC_7, KC_8, KC_9, KC_PLUS, CW_TOGG, KC_PGUP, KC_UP, KC_PGDN, KC_SCRL, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_MINS, KC_HOME, RSFT_T(KC_LEFT), RCTL_T(KC_DOWN), RALT_T(KC_RGHT), RGUI_T(KC_END), KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_CAPS, KC_INS, KC_APP, KC_DEL, KC_PSCR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [3] = LAYOUT_split_3x5_2(KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_DQUO, KC_EQL, KC_QUOT, KC_GRV, KC_BSLS, KC_PIPE, KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_QUOT, KC_MINS, KC_LPRN, KC_LBRC, KC_LCBR, KC_LT, KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_GRV, KC_UNDS, KC_RPRN, KC_RBRC, KC_RCBR, KC_GT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [4] = LAYOUT_split_3x5_2(KC_SCRL, KC_F7, KC_F8, KC_F9, KC_F10, QK_AREP, KC_BRIU, KC_VOLU, KC_BRID, DF(1), LGUI_T(KC_PSCR), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_APP, RSFT_T(KC_MPRV), RCTL_T(KC_VOLD), RALT_T(KC_MNXT), RGUI_T(KC_PSCR), KC_LT, KC_F1, KC_F2, KC_F3, KC_F12, QK_REP, KC_MSTP, KC_MUTE, KC_MPLY, DF(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
                                                              [5] = LAYOUT_split_3x5_2(KC_BTN5, KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN4, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_ACL0, KC_MS_R, KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL0, DF(0), KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, DF(0), QK_LOCK, KC_ACL2, KC_ACL2, QK_LOCK)};

const uint16_t PROGMEM sd_combo[] = {LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM df_combo[] = {LCTL_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM as_combo[] = {LGUI_T(KC_A), LALT_T(KC_S), COMBO_END};
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {LT(3, KC_X), LT(2, KC_C), COMBO_END};
const uint16_t PROGMEM cv_combo[] = {LT(2, KC_C), KC_V, COMBO_END};
const uint16_t PROGMEM xv_combo[] = {LT(3, KC_X), KC_V, COMBO_END};

const uint16_t PROGMEM jk_combo[]     = {RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM kl_combo[]     = {RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM lscln_combo[]  = {RALT_T(KC_L), RGUI_T(KC_SCLN), COMBO_END};
const uint16_t PROGMEM ui_combo[]     = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[]     = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM uo_combo[]     = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM mcmm_combo[]   = {KC_M, LT(2, KC_COMM), COMBO_END};
const uint16_t PROGMEM cmmdot_combo[] = {LT(2, KC_COMM), LT(3, KC_DOT), COMBO_END};
const uint16_t PROGMEM mdot_combo[]   = {KC_M, LT(3, KC_DOT), COMBO_END};

// Gaming
// const uint16_t PROGMEM uiop_combo[] = {KC_U, KC_I, KC_O, MULTIMEDIA_P, COMBO_END};

// Experiments
const uint16_t PROGMEM ws_combo[] = {KC_W, LALT_T(KC_S), COMBO_END};
const uint16_t PROGMEM ed_combo[] = {KC_E, LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM rf_combo[] = {KC_R, LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM tg_combo[] = {KC_T, LT(4, KC_G), COMBO_END};

const uint16_t PROGMEM sx_combo[] = {LALT_T(KC_S), LT(3, KC_X), COMBO_END};
const uint16_t PROGMEM dc_combo[] = {LCTL_T(KC_D), LT(2, KC_C), COMBO_END};
const uint16_t PROGMEM fv_combo[] = {LSFT_T(KC_F), KC_V, COMBO_END};
const uint16_t PROGMEM gb_combo[] = {LT(4, KC_G), KC_B, COMBO_END};

const uint16_t PROGMEM yh_combo[] = {KC_Y, LT(4, KC_H), COMBO_END};
const uint16_t PROGMEM uj_combo[] = {KC_U, RSFT_T(KC_J), COMBO_END};
const uint16_t PROGMEM ik_combo[] = {KC_I, RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM ol_combo[] = {KC_O, RALT_T(KC_L), COMBO_END};

const uint16_t PROGMEM hn_combo[]   = {LT(4, KC_H), KC_N, COMBO_END};
const uint16_t PROGMEM jm_combo[]   = {RSFT_T(KC_J), KC_M, COMBO_END};
const uint16_t PROGMEM kcmm_combo[] = {RCTL_T(KC_K), LT(2, KC_COMM), COMBO_END};
const uint16_t PROGMEM ldot_combo[] = {RALT_T(KC_L), LT(3, KC_DOT), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [SD_CAPS]      = COMBO(sd_combo, KC_CAPS),
    [DF_QUOT]      = COMBO(df_combo, KC_QUOT),
    [AS_CAPS_WORD] = COMBO(as_combo, CW_TOGG),
    [WE_GRV]       = COMBO(we_combo, KC_GRV),
    [ER_LBRC]      = COMBO(er_combo, KC_LBRC),
    [WR_PSCR]      = COMBO(wr_combo, KC_PSCR),
    [XC_TAB]       = COMBO(xc_combo, KC_TAB),
    [CV_BSLS]      = COMBO(cv_combo, KC_BSLS),
    [XV_APP]       = COMBO(xv_combo, KC_APP),

    [JK_QUOT]         = COMBO(jk_combo, KC_QUOT),
    [KL_CAPS]         = COMBO(kl_combo, KC_CAPS),
    [LSCLN_CAPS_WORD] = COMBO(lscln_combo, CW_TOGG),
    [UI_RBRC]         = COMBO(ui_combo, KC_RBRC),
    [IO_GRV]          = COMBO(io_combo, KC_GRV),
    [UO_PSCR]         = COMBO(uo_combo, KC_PSCR),
    [MCMM_BSLS]       = COMBO(mcmm_combo, KC_BSLS),
    [CMMDOT_TAB]      = COMBO(cmmdot_combo, KC_TAB),
    [MDOT_APP]        = COMBO(mdot_combo, KC_APP),

    // Experiments
    [WS_APP]  = COMBO(ws_combo, KC_APP),
    [ED_BSLS] = COMBO(ed_combo, KC_BSLS),
    [RF_MINS] = COMBO(rf_combo, KC_MINS),
    [TG_PSCR] = COMBO(tg_combo, KC_PSCR),

    [SX_GRV]  = COMBO(sx_combo, KC_GRV),
    [DC_TAB]  = COMBO(dc_combo, KC_TAB),
    [FV_QUOT] = COMBO(fv_combo, KC_QUOT),
    [GB_DEL]  = COMBO(gb_combo, KC_DEL),

    [YH_PSCR] = COMBO(yh_combo, KC_PSCR),
    [UJ_EQL]  = COMBO(uj_combo, KC_EQL),
    [IK_BSLS] = COMBO(ik_combo, KC_BSLS),
    [OL_APP]  = COMBO(ol_combo, KC_APP),

    [HN_BSPC]   = COMBO(hn_combo, KC_BSPC),
    [JM_QUOT]   = COMBO(jm_combo, KC_QUOT),
    [KCMM_LBRC] = COMBO(kcmm_combo, KC_LBRC),
    [LDOT_RBRC] = COMBO(ldot_combo, KC_RBRC),
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }
