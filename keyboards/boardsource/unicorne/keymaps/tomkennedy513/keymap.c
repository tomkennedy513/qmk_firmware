#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum custom_keycodes {
    CTRL_SPACE = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_TAB, KC_TRNS,
        KC_TRNS, SFT_T(KC_A), CTL_T(KC_S), ALT_T(KC_D), CMD_T(KC_F), KC_G, KC_H, CMD_T(KC_J), ALT_T(KC_K), CTL_T(KC_L), SFT_T(KC_P), KC_TRNS,
        KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_ENT, KC_TRNS,
        KC_ESC, KC_BSPC, OSL(1), OSL(2), SFT_T(KC_SPACE), KC_TAB),

    [1] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_PLUS, KC_EQL, KC_QUES, KC_PIPE, KC_BSLS, KC_TRNS,
        KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_MINS, KC_QUOT, KC_DQUO, KC_SLSH, KC_TRNS,
        KC_TRNS, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, TO(0), KC_SCLN, KC_COLN, KC_GRV, KC_TILD, KC_ENT, KC_TRNS,
        KC_ESC, KC_BSPC, KC_NO, TO(2), KC_SPACE, KC_TAB),

    [2] = LAYOUT_split_3x6_3(
        KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, LCTL(LSFT(KC_TAB)), KC_PGDN, KC_PGUP, LCTL(KC_TAB), KC_NO, KC_NO,
        KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
        KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_MS_BTN1, KC_MS_BTN3, KC_MS_BTN2, KC_NO, KC_NO,
        KC_ESC, KC_BSPC, TO(1), KC_NO, KC_SPACE, KC_TAB),

    [3] = LAYOUT_split_3x6_3(
        QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD, RGB_TOG, KC_NO,
        EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, CK_TOGG, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TO(0), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_ESC, KC_BSPC, TO(1), TO(2), KC_SPACE, KC_TAB)};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
//
//

const uint16_t PROGMEM esc_combo[]  = {OSL(1), OSL(2), COMBO_END};
const uint16_t PROGMEM tab_combo[]  = {KC_BSPC, SFT_T(KC_SPC), COMBO_END};
combo_t                key_combos[] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(tab_combo, KC_TAB),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTRL_SPACE:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(" ")); // send control space
            }
            break;
    }
    return true;
};
