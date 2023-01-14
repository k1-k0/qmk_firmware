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
    _SYMBOLS, 
    _MULTIMEDIA, 
    _MOUSE, 
};

enum combos {
    DF_ESC,
    SD_CAPS,
    SF_TAB,
    DV_ENTER,

    JK_ESC,
    KL_CAPS,
    JL_TAB,
    KM_ENTER,

    WE_GRV,
    ER_QUOT,
    WR_PSCR,

    UI_LBRC,
    IO_RBRC,
    UO_PSCR,

    CV_DEL,
    XC_BSLS,
    XV_APP,

    MCMM_BSPC,
    CMMDOT_BSLS,
    MDOT_APP,

    // Mouse
    GH_MOUSE_LAYER,
    ZSDF_MOUSE_LAYER,
    SLSHJKL_MOUSE_LAYER,

    // Gaming
    WERUIO_GAMING_LAYER,
};

#define MOUSE_Q LT(_MULTIMEDIA, KC_Q)
#define MOUSE_P LT(_MULTIMEDIA, KC_P)

#define LSFT_F LSFT_T(KC_F)
#define LCTL_D LCTL_T(KC_D)
#define LALT_S LALT_T(KC_S)
#define LGUI_A LGUI_T(KC_A)

#define SYMBOLS_G LT(_SYMBOLS, KC_G)
#define SYMBOLS_H LT(_SYMBOLS, KC_H)

#define RSFT_J RSFT_T(KC_J)
#define RCTL_K RCTL_T(KC_K)
#define RALT_L RALT_T(KC_L)
#define RGUI_SCLN RGUI_T(KC_SCLN)

#define MULTIMEDIA_Z LT(_MOUSE, KC_Z)
#define MULTIMEDIA_SLSH LT(_MOUSE, KC_SLSH)

#define RAISE_C LT(_RAISE, KC_C)
#define LOWER_V LT(_LOWER, KC_V)
#define MEH_B MEH_T(KC_B)

#define MEH_N MEH_T(KC_N)
#define LOWER_M LT(_LOWER, KC_M)
#define RAISE_COMM LT(_RAISE, KC_COMM)

#define RAISE_SPACE LT(_RAISE, KC_SPC)
#define LOWER_TAB LT(_LOWER, KC_TAB)

#define LOWER_ENTER LT(_LOWER, KC_ENT)
#define RAISE_BSPC LT(_RAISE, KC_BSPC)

// mouse
#define RESET_2_QWERTY DF(_QWERTY)

// gaming
#define LOWER_ESC LT(_LOWER, KC_ESC)

#define LOWER_ENTER LT(1, KC_ENT)
#define RAISE_BSPC LT(2, KC_BSPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY]     = LAYOUT_split_3x5_2(MOUSE_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, MOUSE_P, LGUI_A, LALT_S, LCTL_D, LSFT_F, SYMBOLS_G, SYMBOLS_H, RSFT_J, RCTL_K, RALT_L, RGUI_SCLN, MULTIMEDIA_Z, KC_X, RAISE_C, LOWER_V, MEH_B, MEH_N, LOWER_M, RAISE_COMM, KC_DOT, MULTIMEDIA_SLSH, RAISE_SPACE, LOWER_TAB, LOWER_ENTER, RAISE_BSPC),
    [_GAMING]     = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RAISE_SPACE, LOWER_ESC, LOWER_ENTER, RAISE_BSPC),
    [_LOWER]      = LAYOUT_split_3x5_2(KC_PSLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PMNS, KC_PENT, KC_P7, KC_P8, KC_P9, KC_PCMM, KC_PAST, KC_DLR, KC_PERC, KC_CIRC, KC_PPLS, KC_NUM, RSFT_T(KC_P4), RCTL_T(KC_P5), RALT_T(KC_P6), RGUI_T(KC_PEQL), KC_RPRN, KC_EXLM, KC_AT, KC_HASH, KC_EQL, KC_P0, KC_P1, KC_P2, KC_P3, KC_PDOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_RAISE]      = LAYOUT_split_3x5_2(KC_SLSH, KC_7, KC_8, KC_9, KC_MINS, KC_ENT, KC_INS, KC_HOME, KC_PGUP, KC_PSCR, LGUI_T(KC_PAST), LALT_T(KC_4), LCTL_T(KC_5), LSFT_T(KC_6), KC_PLUS, KC_LEFT, RSFT_T(KC_DOWN), RCTL_T(KC_UP), RALT_T(KC_RGHT), RGUI_T(KC_APP), KC_0, KC_1, KC_2, KC_3, KC_EQL, KC_ESC, KC_DEL, KC_END, KC_PGDN, KC_NUM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_ADJUST]     = LAYOUT_split_3x5_2(KC_PSCR, KC_F7, KC_F8, KC_F9, KC_F10, KC_ENT, KC_INS, KC_HOME, KC_PGUP, DB_TOGG, LGUI_T(KC_SCRL), LALT_T(KC_F4), LCTL_T(KC_F5), LSFT_T(KC_F6), KC_F11, KC_BSPC, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_PAUS, KC_F1, KC_F2, KC_F3, KC_F12, KC_ESC, KC_DEL, KC_END, KC_PGDN, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_SYMBOLS]    = LAYOUT_split_3x5_2(KC_SLSH, KC_AMPR, KC_ASTR, KC_TILD, KC_DQUO, KC_PIPE, KC_COLN, KC_ASTR, KC_SCLN, KC_QUES, KC_SCLN, KC_COLN, KC_EQL, KC_MINS, KC_QUOT, KC_BSLS, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_LT, KC_GT, KC_PPLS, KC_UNDS, KC_GRV, KC_SLSH, KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MULTIMEDIA] = LAYOUT_split_3x5_2(KC_SCRL, KC_NUM, KC_BRIU, KC_BRID, KC_CAPS, KC_CAPS, KC_BRID, KC_BRIU, KC_NUM, KC_SCRL, KC_MPLY, KC_MNXT, KC_VOLU, KC_VOLD, KC_MPRV, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY, KC_EXEC, KC_HELP, KC_PAUS, KC_MUTE, KC_MSTP, KC_MSTP, KC_MUTE, KC_PAUS, KC_HELP, KC_EXEC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [_MOUSE]      = LAYOUT_split_3x5_2(KC_BTN5, KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN4, KC_BTN4, KC_BTN1, KC_BTN3, KC_BTN2, KC_BTN5, KC_ACL0, KC_MS_R, KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL0, RESET_2_QWERTY, KC_WH_R, KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, RESET_2_QWERTY, KC_LOCK, KC_ACL2, KC_ACL2, KC_LOCK),
};

const uint16_t PROGMEM sd_combo[] = {LALT_S, LCTL_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {LCTL_D, LSFT_F, COMBO_END};
const uint16_t PROGMEM sf_combo[] = {LALT_S, LSFT_F, COMBO_END};
const uint16_t PROGMEM dv_combo[] = {LCTL_D, LOWER_V, COMBO_END};

const uint16_t PROGMEM jk_combo[] = {RSFT_J, RCTL_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {RCTL_K, RALT_L, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {RSFT_J, RALT_L, COMBO_END};
const uint16_t PROGMEM km_combo[] = {RCTL_K, LOWER_M, COMBO_END};

const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM wr_combo[] = {KC_W, KC_R, COMBO_END};

const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};

const uint16_t PROGMEM xc_combo[] = {KC_X, RAISE_C, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {RAISE_C, LOWER_V, COMBO_END};
const uint16_t PROGMEM xv_combo[] = {KC_X, LOWER_V, COMBO_END};

const uint16_t PROGMEM mcmm_combo[]   = {LOWER_M, RAISE_COMM, COMBO_END};
const uint16_t PROGMEM cmmdot_combo[] = {RAISE_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM mdot_combo[]   = {LOWER_M, KC_DOT, COMBO_END};

const uint16_t PROGMEM gh_combo[]      = {SYMBOLS_G, SYMBOLS_H, COMBO_END};
const uint16_t PROGMEM zsdf_combo[]    = {MULTIMEDIA_Z, LALT_S, LCTL_D, LSFT_F, COMBO_END};
const uint16_t PROGMEM slshjkl_combo[] = {MULTIMEDIA_SLSH, RSFT_J, RCTL_K, RALT_L, COMBO_END};

const uint16_t PROGMEM weruio_combo[] = {KC_W, KC_E, KC_R, KC_U, KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [DF_ESC]   = COMBO(df_combo, KC_ESC),
    [SD_CAPS]  = COMBO(sd_combo, KC_CAPS),
    [SF_TAB]   = COMBO(sf_combo, KC_TAB),
    [DV_ENTER] = COMBO(dv_combo, KC_ENT),

    [JK_ESC]   = COMBO(jk_combo, KC_ESC),
    [KL_CAPS]  = COMBO(kl_combo, KC_CAPS),
    [JL_TAB]   = COMBO(jl_combo, KC_TAB),
    [KM_ENTER] = COMBO(km_combo, KC_ENT),

    [WE_GRV]  = COMBO(we_combo, KC_GRV),
    [ER_QUOT] = COMBO(er_combo, KC_QUOT),
    [WR_PSCR] = COMBO(wr_combo, KC_PSCR),

    [UI_LBRC] = COMBO(ui_combo, KC_LBRC),
    [IO_RBRC] = COMBO(io_combo, KC_RBRC),
    [UO_PSCR] = COMBO(uo_combo, KC_PSCR),

    [XC_BSLS] = COMBO(xc_combo, KC_BSLS),
    [CV_DEL]  = COMBO(cv_combo, KC_DEL),
    [XV_APP]  = COMBO(xv_combo, KC_APP),

    [MCMM_BSPC]   = COMBO(mcmm_combo, KC_BSPC),
    [CMMDOT_BSLS] = COMBO(cmmdot_combo, KC_BSLS),
    [MDOT_APP]    = COMBO(mdot_combo, KC_APP),

    // Mouse
    [GH_MOUSE_LAYER]      = COMBO(gh_combo, DF(_MOUSE)),
    [ZSDF_MOUSE_LAYER]    = COMBO(zsdf_combo, DF(_MOUSE)),
    [SLSHJKL_MOUSE_LAYER] = COMBO(slshjkl_combo, DF(_MOUSE)),

    [WERUIO_GAMING_LAYER] = COMBO(weruio_combo, TG(_GAMING)),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
