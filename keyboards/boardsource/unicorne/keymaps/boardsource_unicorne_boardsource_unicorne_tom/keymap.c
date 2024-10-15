#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W,   KC_E,   KC_R,    KC_T,  KC_Y,   KC_U,  KC_I,    KC_O,   KC_NO,  KC_NO,
        KC_NO, KC_A, KC_S,   KC_D,   KC_F,    KC_G,  KC_H,   KC_J,  KC_K,    KC_L,   KC_P,   KC_NO,
        KC_NO, KC_Z, KC_X,   KC_C,   KC_V,    KC_B,  KC_N,   KC_M,  KC_COMM, KC_DOT, KC_ENT, KC_NO,
                             KC_ESC, MO(1), KC_BSPC, KC_SPC, MO(2), KC_TAB),

    [1] = LAYOUT_split_3x6_3(
        KC_NO, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_PLUS, KC_EQL,  KC_QUES, KC_PIPE, KC_BSLS, KC_NO,
        KC_NO, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_QUOT, KC_DQUO, KC_SLSH, KC_NO,
        KC_NO, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, TO(0),   KC_SCLN, KC_COLN, KC_GRV,  KC_TILD, KC_TRNS, KC_NO,
                                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [2] = LAYOUT_split_3x6_3(
        KC_NO, KC_P1, KC_P2, KC_P3,   KC_P4,   KC_P5,   LCTL(LSFT(KC_TAB)), KC_PGDN, KC_PGUP, LCTL(KC_TAB), KC_NO, KC_NO,
        KC_NO, KC_P6, KC_P7, KC_P8,   KC_P9,   KC_P0,   KC_LEFT,            KC_DOWN, KC_UP,   KC_RGHT,      KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   TO(0),   KC_NO,              KC_NO,   KC_NO,   KC_NO,        KC_NO, KC_NO,
                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS),

    [3] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD,  RGB_TOG, QK_BOOT,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, CK_TOGG, QK_REP,
        KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
