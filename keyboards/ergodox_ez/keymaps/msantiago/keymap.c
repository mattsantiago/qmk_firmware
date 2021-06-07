#include QMK_KEYBOARD_H
#include "version.h"

#define FN_CAPS LT(1, KC_CLCK)
#define FN_APP LT(2, KC_APP)

enum layers {
    BASE, // default layer
    SYMB, // symbols
    MDIA,  // media keys
};

enum custom_keycodes {
#ifdef ORYX_CONFIGURATOR
  VRSN = EZ_SAFE_RANGE,
#else
  VRSN = SAFE_RANGE,
#endif
  RGB_SLD,
  M_WLOCK /*Send RGUI + L for Windows lock*/
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ergodox_pretty(
  // left hand
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    DF(4),       TG(3),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,     KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  FN_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,      KC_EQL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL, KC_LGUI, KC_LALT, KC_LGUI, KC_LALT,                                         FN_APP,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                                               KC_APP,  KC_MUTE,     KC_HOME, KC_END,
                                                        KC_VOLU,     KC_PGUP,
                                      KC_SPC,  KC_DEL,  KC_VOLD,     KC_PGDN, KC_ENT,  KC_BSPC
),

[1] = LAYOUT_ergodox_pretty(
  // left hand
  KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   DF(5),       _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  KC_LEAD, KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, _______,     _______, _______, _______, _______, _______, _______, KC_F12, 
  _______, KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK,                       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, M_WLOCK,
  _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, 
  KC_RCTL, KC_RGUI, KC_RALT, KC_RGUI, KC_RALT,                                         _______, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT,

                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      KC_ESC,  KC_BSPC, _______,     _______, _______, _______
),

[2] = LAYOUT_ergodox_pretty(
  // left hand
  KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,     _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______, _______,     _______, _______, _______, _______, _______, _______, KC_F12, 
  _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______,                       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, M_WLOCK,
  _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______,     _______, NK_TOGG, _______, _______, _______, _______, _______, 
  _______, _______, _______, _______, _______,                                         _______, KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT,

                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      KC_ESC,  KC_BSPC, _______,     _______, _______, _______
                                      
),

[3] = LAYOUT_ergodox_pretty(
  // left hand
  _______, _______, _______, _______, _______, _______, _______,     TG(3),   _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, 
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, _______, 
  TG(3),   _______, _______, _______, _______, _______,                       _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______,
  _______, _______, _______, _______, _______, _______, _______,     _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, 
  _______, _______, _______, _______, _______,                                         KC_P0,   KC_P0,   KC_PDOT, KC_PENT, _______,

                                               _______, _______,     _______, _______,
                                                        _______,     _______,
                                      KC_SPC,  KC_DEL,  _______,     _______, _______, _______
                                      
),

/* Gaming*/
[4] = LAYOUT_ergodox_pretty(
  // left hand
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    DF(0),       TG(3),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,     KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  FN_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,      KC_EQL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL, KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,                                          FN_APP,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                                               KC_APP,  KC_MUTE,     KC_HOME, KC_END,
                                                        KC_VOLU,     KC_PGUP,
                                      KC_LCTL, KC_LALT, KC_VOLD,     KC_PGDN, KC_ENT,  KC_BSPC
),


/* Steno */
[5] = LAYOUT_ergodox_pretty(
  // left hand
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    DF(0),       TG(3),   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,     KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
  FN_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,      KC_EQL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  KC_LCTL, KC_LGUI, KC_LALT, KC_BSPC, KC_SPC,                                          FN_APP,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                                               KC_APP,  KC_MUTE,     KC_HOME, KC_END,
                                                        KC_VOLU,     KC_PGUP,
                                      KC_C,    KC_V,    KC_VOLD,     KC_PGDN, KC_N,    KC_M
),






// /* Keymap 0: Basic layer
//  *
//  * ,--------------------------------------------------.           ,--------------------------------------------------.
//  * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
//  * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
//  * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
//  * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
//  * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
//  * | LShift |Z/Ctrl|   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
//  * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
//  *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
//  *   `----------------------------------'                                       `----------------------------------'
//  *                                        ,-------------.       ,-------------.
//  *                                        | App  | LGui |       | Alt  |Ctrl/Esc|
//  *                                 ,------|------|------|       |------+--------+------.
//  *                                 |      |      | Home |       | PgUp |        |      |
//  *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
//  *                                 |      |ace   | End  |       | PgDn |        |      |
//  *                                 `--------------------'       `----------------------'
//  */
// [0] = LAYOUT_ergodox_pretty(
//   // left hand
//   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,     KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
//   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,     KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
//   FN_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
//   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TRNS,     KC_TRNS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//   KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_LALT,                                         MO(2),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
//                                                KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS,
//                                                         KC_TRNS,     KC_TRNS,
//                                       KC_SPC,  KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, OSL(1)
// ),
// /* Keymap 1: Symbol Layer
//  *
//  * ,---------------------------------------------------.           ,--------------------------------------------------.
//  * |Version  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
//  * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
//  * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
//  * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
//  * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
//  * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
//  *   | EPRM  |      |      |      |      |                                       |      |    . |   0  |   =  |      |
//  *   `-----------------------------------'                                       `----------------------------------'
//  *                                        ,-------------.       ,-------------.
//  *                                        |Animat|      |       |Toggle|Solid |
//  *                                 ,------|------|------|       |------+------+------.
//  *                                 |Bright|Bright|      |       |      |Hue-  |Hue+  |
//  *                                 |ness- |ness+ |------|       |------|      |      |
//  *                                 |      |      |      |       |      |      |      |
//  *                                 `--------------------'       `--------------------'
//  */
// [1] = LAYOUT_ergodox_pretty(
//   // left hand
//   KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,     _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
//   _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,     _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, 
//   TG(1),   _______, _______, _______, _______, _______,                       KC_BSLS, KC_LBRC, KC_RBRC, KC_SLSH, KC_QUOT, _______,
//   _______, _______, _______, _______, _______, _______, _______,     _______, _______, KC_MINS, KC_EQL,  _______, _______, _______, 
//   _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, KC_F12,

//                                                _______, _______,     _______, _______,
//                                                         _______,     _______,
//                                       _______, _______, _______,     _______, _______, TG(1)
// ),
// /* Keymap 2: Media and mouse keys
//  *
//  * ,--------------------------------------------------.           ,--------------------------------------------------.
//  * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
//  * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
//  * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |  Play  |
//  * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
//  * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
//  *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
//  *   `----------------------------------'                                       `----------------------------------'
//  *                                        ,-------------.       ,-------------.
//  *                                        |      |      |       |      |      |
//  *                                 ,------|------|------|       |------+------+------.
//  *                                 |      |      |      |       |      |      |Brwser|
//  *                                 |      |      |------|       |------|      |Back  |
//  *                                 |      |      |      |       |      |      |      |
//  *                                 `--------------------'       `--------------------'
//  */
// [2] = LAYOUT_ergodox_pretty(
//   // left hand
//   KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,     _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
//   _______, KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, _______,     _______, _______, _______, _______, _______, _______, KC_F12, 
//   _______, KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK,                       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
//   _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, RESET,   _______,     _______, _______, _______, _______, _______, _______, _______, 
//   _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,

//                                                _______, _______,     _______, _______,
//                                                         _______,     _______,
//                                       KC_ESC,  _______, _______,     _______, _______, TG(1)
                                      
// ),




// /* Keymap 2: Media and mouse keys
//  *
//  * ,--------------------------------------------------.           ,--------------------------------------------------.
//  * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
//  * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
//  * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |  Play  |
//  * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |           |      |      |      | Prev | Next |      |        |
//  * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
//  *   |      |      |      | Lclk | Rclk |                                       |VolUp |VolDn | Mute |      |      |
//  *   `----------------------------------'                                       `----------------------------------'
//  *                                        ,-------------.       ,-------------.
//  *                                        |      |      |       |      |      |
//  *                                 ,------|------|------|       |------+------+------.
//  *                                 |      |      |      |       |      |      |Brwser|
//  *                                 |      |      |------|       |------|      |Back  |
//  *                                 |      |      |      |       |      |      |      |
//  *                                 `--------------------'       `--------------------'
//  */
// [MDIA] = LAYOUT_ergodox_pretty(
//   // left hand
//   _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, 
//   _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, 
//   _______, _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
//   _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, 
//   _______, _______, _______, _______, _______,                                         _______, _______, _______, _______, _______,

//                                                _______, _______,     _______, _______,
//                                                         _______,     _______,
//                                       _______, _______, _______,     _______, _______, _______
                                      
// ),

};

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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case M_WLOCK:
        if (record->event.pressed) {
          // when keycode M_WLOCK is pressed
          SEND_STRING(SS_RGUI("l"));
        } else {
          // when keycode M_WLOCK is released
        }
        break;
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
      #ifdef RGBLIGHT_ENABLE
      case RGB_SLD:
        rgblight_mode(1);
        return false;
      #endif
    }
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
