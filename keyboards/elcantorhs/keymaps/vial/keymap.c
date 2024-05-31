// Copyright 2021 azhizhinov (@azhizhinov)
// SPDX-License-Identifier: GPL-2.0-or-late
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRV,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_ESC,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TAB,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RBRC,
                      KC_LALT, KC_LSFT, MO(1), KC_BSPC,        KC_ENT, MO(2), KC_SPC, RCTL(KC_BSPC)
    ),
    [1] = LAYOUT(
        KC_GRV,   KC_1,    KC_2,   KC_3,   KC_4,   KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_LCTL,  KC_NO,   KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_LEFT, KC_UP,   KC_RGHT, KC_NO,   KC_HOME, KC_NO,
        KC_LSFT,  KC_CAPS, KC_NO,  KC_NO,  KC_NO,  KC_NO,      KC_NO,   KC_DOWN, KC_NO,   KC_NO,   KC_END,  KC_RALT,
                       KC_LALT, KC_LGUI, KC_TRNS, KC_ESC,      KC_ENT, MO(3), KC_SPC, RCTL(KC_BSPC)
    ),
    [2] = LAYOUT(
        KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11, KC_F12,
        KC_LCTL, KC_BSPC, KC_C,  KC_NO, KC_NO,   KC_NO,        KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,  KC_NO,
        KC_LSFT, KC_X,    KC_V,  KC_S,  KC_L,    KC_NO,        KC_UNDS, KC_PLUS, KC_PMNS, KC_NO,  KC_NO,  KC_RALT,
                       KC_LALT, KC_LGUI, MO(3), KC_ESC,        KC_ENT, KC_TRNS, KC_SPC, RCTL(KC_BSPC)
    ),
    [3] = LAYOUT(
        KC_TAB,  KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
        KC_LCTL, KC_NO,   KC_NO, KC_NO,   KC_NO,  KC_NO,       KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
        KC_LSFT, KC_CAPS, KC_NO, KC_NO,   KC_NO,  KC_NO,       KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_RALT,
                       KC_LALT,  KC_LGUI, KC_TRNS, KC_ESC,     KC_ENT,  KC_TRNS, KC_SPC, RCTL(KC_BSPC)
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  //debug_mouse=true;
}