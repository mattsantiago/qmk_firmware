#include QMK_KEYBOARD_H

#define FN_CAPS LT(3, KC_CLCK)

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  M_WLOCK = SAFE_RANGE, /*Send RGUI + L for Windows lock*/
  M_BASE,
  M_GAME,
  M_STENO,
  M_SNIP,
  M_REC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [0] = LAYOUT( \
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV, \
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
  FN_CAPS,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_ESC,    TG(6),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                             KC_LALT, KC_LGUI, KC_LCTL, KC_SPC, KC_ENT,  TT(4), KC_BSPC, TT(5) \
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   -  |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[1] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, KC_SPC,  KC_LCTL, _______, _______, _______, _______ \
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|      | Left | Down |  Up  |Right |      |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|   +  |   -  |   =  |   [  |   ]  |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[2] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_LBRC, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______, KC_SPC,  KC_C,    KC_V,    KC_N,    KC_M, _______, _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

  [3] = LAYOUT( \
  KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  \
  KC_LEAD, KC_INS,  KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD,                   KC_PIPE, KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, KC_F12,  \
  _______, KC_DEL,  KC_END,  KC_PGDN, KC_F5,   KC_WBAK,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, M_WLOCK, \
  _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______, _______, KC_BSLS, KC_UNDS, KC_EQL,  KC_LCBR, KC_RCBR, _______, \
                             KC_RCTL, KC_RGUI, KC_RALT, KC_ESC,  _______, _______, _______, _______ \
  ),

    [4] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
  TG(4),   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______, _______, TG(4),   _______, _______ \
  ),

    [5] = LAYOUT( \
  KC_ENT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  \
  _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, _______,                   _______, _______, _______, _______, _______, KC_F12,  \
  TG(5),   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, _______,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, M_WLOCK, \
  _______, KC_WH_L, KC_BTN3, KC_WH_R, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______, _______, _______, _______, TG(5) \
  ),

    [6] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_BSPC, \
  TG(6),   _______, _______, _______, _______, _______,                   _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_DEL,  \
  _______, _______, _______, _______, _______, _______, _______, TG(6),   _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______, \
                             _______, _______, _______, _______, _______, KC_P0,   KC_PDOT, KC_PENT \
  )

/*
  [_ADJUST] = LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
                             _______, _______, _______, _______, _______, _______, _______, _______ \
  )
*/
};

layer_state_t layer_state_set_user(layer_state_t state) {
  //return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
  return state;
}

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE

LEADER_EXTERNS();

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    /* Send leader key followed by two backslashes to reset the keyboard */
    SEQ_TWO_KEYS(KC_BSPC, KC_BSPC) {
      reset_keyboard();
    }
  }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();

    switch (keycode) {
      case M_WLOCK:
        if (record->event.pressed) {
          // when keycode M_WLOCK is pressed
          SEND_STRING(SS_RGUI("l"));
        } else {
          // when keycode M_WLOCK is released
        }
        break;
      case M_BASE:
        layer_state_set(0x00000001); //bitmask 2^layer_index: layer 0 = 0001, layer 2 = 0010, layer 3 = 0100, etc.
        // layer_on(0);
        // layer_off(1);
        // layer_off(2);
        break;
      case M_GAME:
        layer_state_set(0x00000003);
        // layer_on(0);
        // layer_on(1);
        // layer_off(2);
        break;
      case M_STENO:
        layer_state_set(0x00000007);
        // layer_on(0);
        // layer_on(1);
        // layer_on(2);
        break;
    }
  }
  return true;
}
