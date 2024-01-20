/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST,
  _SERVICE,
};

// #define LOWER MO(_LOWER)
// #define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_planck_mit(KC_RBRC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, RCTL_T(KC_QUOT), LSFT_T(KC_CAPS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_BSLS), LT(4,KC_CAPS), LT(3,KC_GRV), KC_LALT, LGUI_T(KC_TAB), LT(1,KC_DEL), LT(2,KC_SPC), LT(1,KC_BSPC), RGUI_T(KC_ENT), KC_RALT, LT(3,KC_APP), LT(4,KC_BSLS)),
  [_LOWER] = LAYOUT_planck_mit(KC_TRNS, KC_TRNS, KC_LPRN, KC_ASTR, KC_AMPR, KC_PLUS, KC_EQL, KC_7, KC_8, KC_9, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_CIRC, KC_PERC, KC_DLR, KC_UNDS, KC_MINS, KC_4, KC_5, KC_6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HASH, KC_AT, KC_EXLM, KC_RPRN, KC_0, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_RAISE] = LAYOUT_planck_mit(KC_TRNS, OSM(MOD_LALT), OSM(MOD_LCTL), KC_VOLU, OSM(MOD_RSFT), OSM(MOD_RGUI), KC_PAUS, KC_PGUP, KC_UP, KC_PGDN, KC_SCRL, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPRV, KC_VOLD, KC_MNXT, KC_MPLY, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_TRNS, KC_TRNS, OSM(MOD_LALT), OSM(MOD_LCTL), KC_MUTE, OSM(MOD_LSFT), OSM(MOD_LGUI), KC_PSCR, KC_APP, KC_BSPC, KC_DEL, KC_INS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_ADJUST] = LAYOUT_planck_mit(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12, KC_F7, KC_F8, KC_F9, KC_TRNS, KC_TRNS, KC_TRNS, OSM(MOD_LGUI), OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LSFT), KC_TRNS, KC_F11, KC_F4, KC_F5, KC_F6, KC_TRNS, KC_TRNS, KC_TRNS, OSM(MOD_RGUI), OSM(MOD_RALT), OSM(MOD_RCTL), OSM(MOD_RSFT), KC_TRNS, KC_F10, KC_F1, KC_F2, KC_F3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
  [_SERVICE] = LAYOUT_planck_mit(QK_BOOT, DB_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DB_TOGG, QK_BOOT, KC_TRNS, KC_NO, RGB_MOD, KC_NO, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, BL_BRTG, BL_UP, BL_ON, KC_TRNS, KC_TRNS, RGB_TOG, RGB_RMOD, KC_NO, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, BL_BRTG, BL_DOWN, BL_OFF, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS)
};


// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// /* Qwerty
//  * ,-----------------------------------------------------------------------------------.
//  * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_QWERTY] = LAYOUT_planck_mit(
//     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
//     KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
//     RGB_TOG, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
// ),

// /* Lower
//  * ,-----------------------------------------------------------------------------------.
//  * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_LOWER] = LAYOUT_planck_mit(
//     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
//     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
//     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
//     _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
// ),

// /* Raise
//  * ,-----------------------------------------------------------------------------------.
//  * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_RAISE] = LAYOUT_planck_mit(
//     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
//     KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
//     _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
//     _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
// ),

// /* Adjust (Lower + Raise)
//  *                      v------------------------RGB CONTROL--------------------v
//  * ,-----------------------------------------------------------------------------------.
//  * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |      |      |      |      |      |      |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |      |      |      |      |      |      |      |
//  * |------+------+------+------+------+------+------+------+------+------+------+------|
//  * |      |      |      |      |      |             |      |      |      |      |      |
//  * `-----------------------------------------------------------------------------------'
//  */
// [_ADJUST] = LAYOUT_planck_mit(
//     _______, QK_BOOT, DB_TOGG, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
//     _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
//     _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
// )

// };

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

