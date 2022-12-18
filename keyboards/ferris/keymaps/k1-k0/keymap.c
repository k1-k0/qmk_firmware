// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum ferris_layers { _QWERTY, _LOWER, _RAISE, _ADJUST, _SYMBOLS, _MULTIMEDIA, _MOUSE, _GAMING };

enum combos {
    SD_ESC,
    DF_SPACE,
    SF_CAPS,
    DV_ENTER,

    JK_SPACE,
    KL_ESC,
    JL_CAPS,
    KM_ENTER,

    WE_GRV,
    ER_QUOT,

    UI_LBRC,
    IO_RBRC,

    CV_DEL,
    XC_BSLS,
    XV_TAB,

    MCMM_BSPC,
    CMMDOT_APP,
    MDOT_TAB,

    // Mouse
    GH_MOUSE_LAYER,
    ZSDF_MOUSE_LAYER,
    SLSHJKL_MOUSE_LAYER,

    // Gaming
    WERUIO_GAMING_LAYER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY]     = LAYOUT_split_3x5_2(LT(5, KC_Q), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, LT(5, KC_P), LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), LT(4, KC_G), LT(4, KC_H), RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN), LT(6, KC_Z), KC_X, ALL_T(KC_C), MEH_T(KC_V), KC_B, KC_N, MEH_T(KC_M), ALL_T(KC_COMM), KC_DOT, LT(6, KC_SLSH), LT(2, KC_SPC), LT(1, KC_TAB), LT(1, KC_ENT), LT(2, KC_BSPC)),
    [_LOWER]      = LAYOUT_split_3x5_2(KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PMNS, KC_PENT, KC_P7, KC_P8, KC_P9, KC_PCMM, KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_PPLS, KC_NUM, RSFT_T(KC_P4), RCTL_T(KC_P5), RALT_T(KC_P6), RGUI_T(KC_PEQL), KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_EQL, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_RAISE]      = LAYOUT_split_3x5_2(KC_SLSH, KC_7, KC_8, KC_9, KC_MINS, KC_ENT, KC_INS, KC_HOME, KC_PGUP, KC_PSCR, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_PLUS, KC_LEFT, RSFT_T(KC_DOWN), RCTL_T(KC_UP), RALT_T(KC_RGHT), RGUI_T(KC_APP), KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_ESC, KC_DEL, KC_END, KC_PGDN, KC_NUM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_ADJUST]     = LAYOUT_split_3x5_2(KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F10, KC_ENT, KC_INS, KC_HOME, KC_PGUP, DB_TOGG, LGUI_T(KC_SCRL), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_BSPC, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, KC_ESC, KC_DEL, KC_END, KC_PGDN, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_SYMBOLS]    = LAYOUT_split_3x5_2(KC_SLSH, KC_AMPR, KC_ASTR, KC_TILD, KC_DQUO, KC_PIPE, KC_COLN, KC_ASTR, KC_SCLN, KC_QUES, KC_SCLN, KC_COLN, KC_EQL, KC_MINS, KC_QUOT, KC_BSLS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_LT, KC_GT, KC_PPLS, KC_UNDS, KC_GRV, KC_SLSH, KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MULTIMEDIA] = LAYOUT_split_3x5_2(KC_SCRL, KC_NUM, KC_BRIU, KC_BRID, KC_CAPS, KC_CAPS, KC_BRID, KC_BRIU, KC_NUM, KC_SCRL, KC_MPLY, KC_MNXT, KC_VOLU, KC_VOLD, KC_MPRV, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_EXEC, KC_HELP, KC_PAUS, KC_MUTE, KC_MSTP, KC_MSTP, KC_MUTE, KC_PAUS, KC_HELP, KC_EXEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MOUSE]      = LAYOUT_split_3x5_2(KC_BTN5, KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN4, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_ACL0, KC_MS_R, KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL0, DF(0), KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, DF(0), KC_LOCK, KC_ACL2, KC_ACL2, KC_LOCK),
    [_GAMING]     = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SPC, KC_TAB, LT(1, KC_ENT), LT(2, KC_BSPC)),
};

const uint16_t PROGMEM sd_combo[] = {LALT_T(KC_S), LCTL_T(KC_D), COMBO_END};
const uint16_t PROGMEM df_combo[] = {LCTL_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM sf_combo[] = {LALT_T(KC_S), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM dv_combo[] = {LCTL_T(KC_D), MEH_T(KC_V), COMBO_END};

const uint16_t PROGMEM jk_combo[] = {RSFT_T(KC_J), RCTL_T(KC_K), COMBO_END};
const uint16_t PROGMEM kl_combo[] = {RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM jl_combo[] = {RSFT_T(KC_J), RALT_T(KC_L), COMBO_END};
const uint16_t PROGMEM km_combo[] = {RCTL_T(KC_K), MEH_T(KC_M), COMBO_END};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
// const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};

const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
// const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};

const uint16_t PROGMEM xc_combo[] = {KC_X, ALL_T(KC_C), COMBO_END};
const uint16_t PROGMEM cv_combo[] = {ALL_T(KC_C), MEH_T(KC_V), COMBO_END};
const uint16_t PROGMEM xv_combo[] = {KC_X, MEH_T(KC_V), COMBO_END};

const uint16_t PROGMEM mcmm_combo[]   = {MEH_T(KC_M), ALL_T(KC_COMM), COMBO_END};
const uint16_t PROGMEM cmmdot_combo[] = {ALL_T(KC_COMM), KC_DOT, COMBO_END};
const uint16_t PROGMEM mdot_combo[]   = {MEH_T(KC_M), KC_DOT, COMBO_END};

const uint16_t PROGMEM gh_combo[]      = {LT(4, KC_G), LT(4, KC_H), COMBO_END};
const uint16_t PROGMEM zsdf_combo[]    = {LT(6, KC_Z), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), COMBO_END};
const uint16_t PROGMEM slshjkl_combo[] = {LT(6, KC_SLSH), RSFT_T(KC_J), RCTL_T(KC_K), RALT_T(KC_L), COMBO_END};

const uint16_t PROGMEM weruio_combo[] = {KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [SD_ESC]   = COMBO(sd_combo, KC_ESC),
    [DF_SPACE] = COMBO(df_combo, KC_SPC),
    [SF_CAPS]  = COMBO(sf_combo, KC_CAPS),
    [DV_ENTER] = COMBO(dv_combo, KC_ENT),

    [JK_SPACE] = COMBO(jk_combo, KC_SPC),
    [KL_ESC]   = COMBO(kl_combo, KC_ESC),
    [JL_CAPS]  = COMBO(jl_combo, KC_CAPS),
    [KM_ENTER] = COMBO(km_combo, KC_ENT),

    [WE_GRV]  = COMBO(we_combo, KC_GRV),
    [ER_QUOT] = COMBO(er_combo, KC_QUOT),

    [UI_LBRC] = COMBO(ui_combo, KC_LBRC),
    [IO_RBRC] = COMBO(io_combo, KC_RBRC),

    [XC_BSLS] = COMBO(xc_combo, KC_BSLS),
    [CV_DEL]  = COMBO(cv_combo, KC_DEL),
    [XV_TAB]  = COMBO(xv_combo, KC_TAB),

    [MCMM_BSPC]  = COMBO(mcmm_combo, KC_BSPC),
    [CMMDOT_APP] = COMBO(cmmdot_combo, KC_APP),
    [MDOT_TAB]   = COMBO(mdot_combo, KC_TAB),

    // Mouse
    [GH_MOUSE_LAYER]      = COMBO(gh_combo, DF(6)),
    [ZSDF_MOUSE_LAYER]    = COMBO(zsdf_combo, DF(6)),
    [SLSHJKL_MOUSE_LAYER] = COMBO(slshjkl_combo, DF(6)),

    [WERUIO_GAMING_LAYER] = COMBO(weruio_combo, TG(7)),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
