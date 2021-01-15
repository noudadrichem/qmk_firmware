#include QMK_KEYBOARD_H

// My layout is practically the default HHKB layout.
#define _DEFAULT 0 // 0
#define _DEFAULT_WINDHOOS 1 // 3

#define _ALTFN 2
#define _FN 3


#define ______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {




	[_DEFAULT] = LAYOUT_60_hhkb(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_GRV, KC_BSLS,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
		MO(_ALTFN),          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, MO(_FN),
		            KC_LGUI,             KC_LALT,                      KC_SPC,                            KC_RCTL,           KC_RALT
	),



	[_DEFAULT_WINDHOOS] = LAYOUT_60_hhkb(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_GRV, KC_BSLS,
		KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_BSPC,
		MO(_ALTFN),          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_ENT,
		KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT, MO(_FN),
		            KC_LALT,             KC_RCTL,                      KC_SPC,                            KC_LGUI,           KC_RALT
	),


	[_ALTFN] = LAYOUT_60_hhkb(

		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  ______,  ______,
		KC_TAB,       ______,  ______,  ______,  ______,  ______,  ______,  KC_PGUP,  KC_UP,  KC_PGDN,  ______,  ______,   ______,  KC_DEL,
		______,       ______,   KC_MUTE, KC_VOLD, KC_VOLU,  ______,  ______, KC_LEFT,  KC_DOWN,  KC_RIGHT,   ______,   ______, ______,
		KC_LSFT,      KC_MPRV, KC_MPLY, KC_MNXT,  ______,	 ______,   ______,  ______,  ______,  ______, ______,     ______,  ______,
		         KC_LGUI,           KC_LALT,                    KC_ENT,                              KC_RCTL,            KC_RALT
	),


	[_FN] = LAYOUT_60_hhkb(
		______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_INS,  RESET,
		KC_CAPS,          ______,  DF(_DEFAULT_WINDHOOS),  ______,  ______,  ______,  ______,  ______,  KC_PSCR, KC_SLCK, KC_PAUS,  KC_UP,   ______,  KC_DEL,
		______,           KC_VOLD, KC_VOLU, KC_MUTE, ______,  ______,  KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT,  KC_RGHT, ______,
		______,           KC_MPRV, KC_MPLY, KC_MNXT, ______,  ______,  KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN,           ______,  ______,
		         ______,           ______,                    KC_LOCK,                                      ______,            ______
	),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	switch (id) {}
	return MACRO_NONE;
}
