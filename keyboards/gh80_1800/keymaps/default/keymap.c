#include "gh80_1800.h"

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                       KC_INS,  KC_HOME,  KC_PGUP, KC_PSCR, \
                                                                                                                                             KC_DEL,  KC_END,   KC_PGDN, KC_SLCK, \
        KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,    KC_NLCK, KC_PSLS,  KC_PAST, KC_PAUS, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,    KC_P7,   KC_P8,    KC_P9,   KC_PMNS, \
        MO(1),   KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,              KC_P4,   KC_P5,    KC_P6,   KC_PPLS, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,               KC_P1,   KC_P2,    KC_P3,            \
        KC_LCTL, KC_LGUI, KC_LALT,                 KC_SPC,                 KC_RALT, KC_RGUI, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,             KC_P0,    KC_PDOT, KC_PENT
    )

    [1] = LAYOUT_ansi(
        ________,  KC_F1,   KC_F2,     KC_F3,     KC_F4,      KC_F5,    KC_F6,      KC_F7,   KC_F8,       KC_F9,      KC_F10,     KC_F11,      KC_F12,                       _______,  _______,  _______, _______, \
                                                                                                                                                                                 _______,  _______,   _______, _______, \
        _______, _______, _______,    _______,   _______,   _______,   _______,   _______,   _______,    _______,    _______,    _______, _______,  KC_DEL, KC_DEL,     _______, _______,  _______, _______, \
        _______, _______, KC__MUTE,  KC__VOLDOWN,    KC__VOLUP,   _______,   _______,   _______,   KC_UP,    _______,    _______,    _______, _______,          _______,    _______,   _______,    _______,   _______, \
        _______, _______, _______,    _______,   _______,   _______,   _______,     KC_LEFT,   KC_UP,    KC_RIGHT,    _______, _______,          _______,              _______,   _______,    _______,   _______, \
        _______, _______, KC_MPLY,    _______,   _______,   _______,   _______,   _______,   _______, _______,  _______,          _______, _______,               _______,   _______,    _______,            \
        _______, _______, _______,                 KC_ENT,                 _______, _______, _______,  _______, _______, _______, _______,             _______,    _______, _______
    )

    [2] = LAYOUT_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                       KC_INS,  KC_HOME,  KC_PGUP, KC_PSCR, \
                                                                                                                                             KC_DEL,  KC_END,   KC_PGDN, KC_SLCK, \
        KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,    KC_NLCK, KC_PSLS,  KC_PAST, KC_PAUS, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,    KC_P7,   KC_P8,    KC_P9,   KC_PMNS, \
    KC_CAPSLOCK, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,              KC_P4,   KC_P5,    KC_P6,   KC_PPLS, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,               KC_P1,   KC_P2,    KC_P3,            \
        KC_LCTL, KC_LGUI, KC_LALT,                 KC_SPC,                 KC_RALT, KC_RGUI, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,             KC_P0,    KC_PDOT, KC_PENT
    )

};

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1 << USB_LED_NUM_LOCK)) {
        DDRD |= (1 << 5);
    } else {
        DDRD &= ~(1 << 5);
    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRD |= (1 << 6);
    } else {
        DDRD &= ~(1 << 6);
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
        DDRD |= (1 << 7);
    } else {
        DDRD &= ~(1 << 7);
    }
}

