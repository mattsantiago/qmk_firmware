/* Copyright 2021 Kyle McCreery 
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

#define FN_CAPS LT(4, KC_CLCK)
#define FN_APP LT(5, KC_APP)

enum custom_keycodes {
    M_WLOCK = SAFE_RANGE /*Send RGUI + L for Windows lock*/
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_all(
                                                                                                                  KC_MUTE,
      KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, 
      FN_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOT, KC_ENT,
      KC_LSFT, KC_SLSH, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,           KC_RSFT,
      KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC,  OSL(3),           OSL(1),           KC_RALT, FN_APP,           KC_RCTL ),

  [1] = LAYOUT_all(
                                                                                                                  _______,
  	  KC_GRV,           KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
  	  _______,          _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_SCLN, _______, KC_QUOT,
  	  _______, _______, _______, _______, _______, _______, _______, KC_SLSH, KC_MINS, KC_EQL,  _______,          KC_UP, 
  	  _______, _______, _______,          _______, _______,          TG(2),            KC_LEFT, KC_DOWN,          KC_RIGHT ),
  
  [2] = LAYOUT_all(
                                                                                                                  _______,  
  	  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  	  _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  	  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, 
  	  _______, _______, _______,          _______, _______,          TG(2),            _______, _______,          _______ ),

  [3] = LAYOUT_all(
                                                                                                                  _______,  
  	  KC_ENT,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
  	  _______,          _______, _______, _______, _______, _______, _______, _______, _______, KC_F11,  KC_F12,  _______,
  	  _______, _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______,          _______, 
  	  _______, _______, _______,          _______, _______,          _______,          _______, _______,          _______ ),

  [4] = LAYOUT_all(
                                                                                                                  _______,  
  	  KC_LEAD,          KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, TG(5),
  	  _______,          KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
  	  _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, KC_BTN1, KC_BTN3, KC_BTN2,          _______, 
  	  _______, KC_RGUI, _______,          KC_ESC,  _______,          _______,          _______, _______,          _______ ),

  [5] = LAYOUT_all(
                                                                                                                  _______,  
  	  KC_ENT,           KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, _______, TG(5),
  	  TG(5),            KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, M_WLOCK, _______, _______,
  	  _______, _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______, _______, _______, _______,          _______, 
  	  _______, _______, _______,          KC_ESC,  _______,          _______,          _______, _______,          _______ )

//   [3] = LAYOUT_all(
//                                                                                                                   KC_TRNS,  
//   	  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   	  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
//   	  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, 
//   	  KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS,          KC_TRNS, KC_TRNS,          KC_TRNS )
};

void matrix_init_user(void)
{
  //user initialization
}

LEADER_EXTERNS();

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    /* Send leader key followed by two backslashes to reset the keyboard */
    SEQ_TWO_KEYS(KC_BSLS, KC_BSLS) {
      reset_keyboard();
    }
  }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode) {
        case M_WLOCK:
            if (record->event.pressed) {
                // when keycode M_WLOCK is pressed
                SEND_STRING(SS_RGUI("l"));
            } else {
                // when keycode M_WLOCK is released
            }
            break;
    }
	return true;
}

#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        break;
    }
}
#endif

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
}

static void render_name(void) {
    static const char PROGMEM mercutio_name[] = {
        0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x95, 0xB5, 0x96, 0xD5, 0xB6, 0xB6, 
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_write_P(mercutio_name, false);
}

void oled_task_user(void) {
    render_name(); 
}
#endif