/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#define FN_CAPS LT(1, KC_CLCK)
#define FN_RGUI LT(2, KC_RGUI)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ \ │ ` │Ins│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ Bspc│Del│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬────┼───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │ Ent│PgU│
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
     * │Shft│ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│ ↑ │PgD│
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
     * │Ctrl│GUI │Alt │                        │Alt│ Fn│Ctl│ ← │ ↓ │ → │
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    /*      
     * Note: blanked out keys don't exist in the Vanilla layout
     */
     [0] = LAYOUT_all(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______, KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_END,
        FN_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,  KC_PGUP,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, FN_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    /* 
     * ┌───┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐───┬───┌───┐
     * │   │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   │   │Mut│
     * ├───└───┴───┴───┴───┴───┴───┴───┴───┴───┴─┬─┴─┬─┴─┬─┴─┐─┴───└───┘
     * │     │   │   │   │   │   │   │   │   │   │Psc│Slk│Pse│     │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──└───┴───┴───┘┬────┌───┐
     * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │Vl+│
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┌───┼───┤
     * │    │   │   │   │   │   │   │   │   │   │   │   │      │PgU│Vl-│
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┌───┼───┼───┤
     * │    │    │    │                        │   │   │   │Hom│PgD│End│
     * └────┴────┴────┴────────────────────────┴───┴───┴───└───┴───┴───┘
     */
    [1] = LAYOUT_all(
        KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  TG(2),   _______, _______,
        KC_LEAD, KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______, _______, KC_MUTE,
        _______, KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______, _______, KC_VOLU,
        _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, KC_BTN1, KC_BTN2, KC_BTN3, _______, _______, _______, _______, KC_MPLY, KC_VOLD,
        _______, KC_RGUI, _______,                            KC_ESC,                    _______, KC_APP,  _______, KC_MPRV, KC_MSTP, KC_MNXT
    ),
    [2] = LAYOUT_all(
        KC_ENT,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG(2),   _______, _______,
        _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(2),   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            KC_ESC,                    _______, _______, _______, _______, _______, _______
    )

/*     [0] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ) */
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