/* Copyright 2020 Sergey Vlasov <sigprof@gmail.com>
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

#define FN_CAPS LT(1, KC_CLCK)
#define FN_RGUI LT(2, KC_RGUI)

enum my_keycodes {
  KC_WLCK = SAFE_RANGE //For locking Windows since the RGUI on the WhiteFox is used to activate the mouse keys layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,    KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,  KC_F12,     MO(3),     KC_PSCR,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,            KC_PGUP,
        KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,        KC_PGDN,
        FN_CAPS,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,            KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,
        KC_LCTL,   KC_LGUI,   KC_LALT,                       KC_SPC,                              KC_RALT,     KC_RCTL,        KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   KC_MUTE,
        KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  TG(2),              KC_VOLU,
        KC_LEAD,     KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______, _______,        KC_VOLD,
        _______,       KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______,            KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_BTN1, KC_BTN3, KC_BTN2, _______, _______, _______, _______,          KC_MPLY,
        _______,   _______,   _______,                      KC_ESC,                               KC_RGUI,     KC_APP,         KC_MPRV, KC_MSTP,  KC_MNXT
    ),

    [2] = LAYOUT(
        _______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   _______,
        KC_ENT,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG(2),             _______,
        _______,     KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,
        TG(2),         KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,   _______,   _______,                      KC_ESC,                               _______,     _______,        _______, _______,  _______
    ),

    [3] = LAYOUT(
        RESET,     _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______,     RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,        _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, KC_WLCK, _______, _______, _______,
        _______,            _______, _______, BL_DEC,  BL_TOGG, BL_INC,  NK_TOGG, _______, _______, _______, _______, _______,          BL_INC,
        _______,   _______,   _______,                      _______,                              _______,     _______,        BL_TOGG, BL_DEC,  BL_STEP
    )
    /*    [2] = LAYOUT(
        _______,   _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   _______,aaaaam
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,   _______,   _______,                      _______,                              _______,     _______,        _______, _______,  _______
    ),
    [3] = LAYOUT(
        RESET,     _______, _______, _______, _______,   _______, _______, _______, _______,   _______, _______, _______, _______,    _______,   KC_MUTE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
        _______,     RGB_TOG, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, _______,        _______,
        _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,            _______, _______, BL_DEC,  BL_TOGG, BL_INC,  NK_TOGG, _______, _______, _______, _______, _______,          BL_INC,
        _______,   _______,   _______,                      _______,                              _______,     _______,        BL_TOGG, BL_DEC,  BL_STEP
    )*/
};

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    /* Send leader key followed by two backslashes to reset the keyboard */
    SEQ_TWO_KEYS(KC_BSLS, KC_BSLS) {
      reset_keyboard();
    }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_WLCK:
      if (record->event.pressed) {
        SEND_STRING(SS_RGUI("l"));
      }
      return false; // Skip further processing
    default:
      return true; // Process all other keycodes normally
  }
}