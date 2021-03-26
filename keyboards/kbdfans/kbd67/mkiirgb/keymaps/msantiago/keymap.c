#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3

#define FN_CAPS LT(1, KC_CLCK)
#define FN_APP LT(2, KC_APP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_65_ansi_blocker( /* Base */
			KC_GRV,        KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC,   KC_HOME,\
		    KC_TAB,        KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLASH, KC_END,\
			FN_CAPS,       KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,    KC_PGUP,\
		    KC_LSFT,       KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT,           KC_UP,     KC_PGDN,\
		    KC_LCTL,       KC_LGUI,  KC_LALT,                KC_SPC,                KC_RGUI,           FN_APP,   KC_LEFT,           KC_DOWN,   KC_RIGHT),
		[_LAYER1] = LAYOUT_65_ansi_blocker( /* FN */
			KC_ENT,        KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  TG(2),    KC_HOME,\
			KC_LEAD,       KC_INS,   KC_HOME, KC_PGUP, KC_LOCK, KC_WFWD, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______, _______,  KC_MUTE,\
		    _______,       KC_DEL,   KC_END,  KC_PGDN, KC_F5,   KC_WBAK, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,  KC_VOLU,\
			_______,       KC_PSCR, KC_SLCK,  KC_PAUS, _______, KC_BTN1, KC_BTN3, KC_BTN2, _______, _______, _______, _______,          KC_MPLY,  KC_VOLD,\
		    KC_RCTL,       _______,  KC_RALT,                   KC_ESC,                    TG(3),            KC_APP,  KC_MPRV,          KC_MSTP,  KC_MNXT),
		[_LAYER2] = LAYOUT_65_ansi_blocker(
			KC_ENT,        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TG(2),    _______,\
		    _______,       KC_BTN1,  KC_MS_U, KC_BTN2, KC_WH_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
			TG(2),         KC_MS_L,  KC_MS_D, KC_MS_R, KC_WH_D, _______, _______, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       KC_WH_L, KC_BTN3, KC_WH_R,  _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       _______,  _______,                   KC_ESC,                    _______,          _______, _______,          _______,  _______),
		[_LAYER3] = LAYOUT_65_ansi_blocker(
			_______,       _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
		    _______,       RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
			TG(3),         RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD,  _______, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       RGB_TOG, _______, _______, _______, _______,  NK_TOGG, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       _______,  _______,                   _______,                   TG(3),            _______, _______,          _______,  _______),
		/*[_LAYER1] = LAYOUT_65_ansi_blocker(
			_______,       _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
		    _______,       _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,\
			_______,       _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______,\
		    _______,       _______,  _______,                   _______,                   _______,          _______, _______,          _______,  _______),
		[_LAYER1] = LAYOUT_65_ansi_blocker(
			KC_GESC,       KC_F1,    KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_HOME,\
		    _______,       RGB_TOG,  RGB_MOD, RGB_HUI,RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_PGUP,\
			CTL_T(KC_CAPS),RGB_SPI,  RGB_SPD, _______,_______, _______, _______, _______, _______, _______, _______,  _______,          EEP_RST,  KC_PGDN,\
		    KC_LSFT,       _______,  _______, _______,_______, _______, _______, _______, _______, _______, _______,  _______,          KC_VOLU,  KC_MUTE,\
		    _______,       _______,  _______,                  _______,                   _______,          _______,  KC_MPRV,          KC_VOLD,  KC_MNXT),*/
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
	  return true;
}
