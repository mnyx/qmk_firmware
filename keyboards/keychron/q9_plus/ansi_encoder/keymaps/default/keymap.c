/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

enum layers{
    _BASE,
    _L1,
    _L2,
    _L3,
    _L4,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_54_ansi(
        KC_ESC,         KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_MINS,     KC_EQL,   KC_BSPC,          KC_MUTE,
        LCTL_T(KC_TAB), KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,               KC_ENT,           KC_DEL,
        KC_LSFT,                  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,               KC_RSFT, KC_UP,
        MO(_L1),        KC_LOPT,  KC_LCMD,  KC_LNG2,          LT(_L2, KC_SPC),           MO(_L1), KC_RCMD,  MO(_L4),     KC_GRV,   KC_LEFT, KC_DOWN, KC_RGHT),

    [_L1] = LAYOUT_54_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______,          _______,                   _______,          _______, _______, _______, _______, _______, _______),

    [_L2] = LAYOUT_54_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______,          _______,                   _______,          _______, _______, _______, _______, _______, _______),

    [_L3] = LAYOUT_54_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______,          _______,                   _______,          _______, _______, _______, _______, _______, _______),

    [_L4] = LAYOUT_54_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______, _______,          _______,                   _______,          _______, _______, _______, _______, _______, _______)
};

//const uint16_t PROGMEM combo_num1[] = {KC_Q, KC_W, COMBO_END};
//const uint16_t PROGMEM combo_num2[] = {KC_W, KC_E, COMBO_END};
//const uint16_t PROGMEM combo_num3[] = {KC_E, KC_R, COMBO_END};
//const uint16_t PROGMEM combo_num4[] = {KC_R, KC_T, COMBO_END};
//const uint16_t PROGMEM combo_num5[] = {KC_T, KC_Y, COMBO_END};
//const uint16_t PROGMEM combo_num6[] = {KC_Y, KC_U, COMBO_END};
//const uint16_t PROGMEM combo_num7[] = {KC_U, KC_I, COMBO_END};
//const uint16_t PROGMEM combo_num8[] = {KC_I, KC_O, COMBO_END};
//const uint16_t PROGMEM combo_num9[] = {KC_O, KC_P, COMBO_END};
//const uint16_t PROGMEM combo_num0[] = {KC_P, KC_MINS, COMBO_END};
//const uint16_t PROGMEM combo_lang1[] = {KC_J, MO(_L1), COMBO_END};
//combo_t key_combos[] = {
////    COMBO(combo_num1, KC_1),
////    COMBO(combo_num2, KC_2),
////    COMBO(combo_num3, KC_3),
////    COMBO(combo_num4, KC_4),
////    COMBO(combo_num5, KC_5),
////    COMBO(combo_num6, KC_6),
////    COMBO(combo_num7, KC_7),
////    COMBO(combo_num8, KC_8),
////    COMBO(combo_num9, KC_9),
////    COMBO(combo_num0, KC_0),
//    COMBO(combo_lang1, KC_LNG1)
//};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_L1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_L2]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_L3]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_L4]  = {ENCODER_CCW_CW(_______, _______)}
};
#endif

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    int keyIndex = 27;
    switch(get_highest_layer(layer_state)) {
    case _L1:
        rgb_matrix_set_color(keyIndex, 0, 255, 255);
        break;
    case _L2:
        rgb_matrix_set_color(keyIndex, 255, 0, 255);
        break;
    case _L3:
        rgb_matrix_set_color(keyIndex, 255, 255, 0);
        break;
    case _L4:
        rgb_matrix_set_color(keyIndex, 0, 255, 0);
        break;
    default:
        rgb_matrix_set_color(keyIndex, RGB_OFF);
        break;
    }
    return false;
}

// これ以上押していればホールド扱い
// 原因が「TAPPING_TERM以内に「ホールド＋タップ」を完了してしまって最初の打鍵が「ホールド」とみなされないこと」にあるので、
// 自分が「ホールド＋タップ」の打鍵を完了する時間より短い値を最初のキーのTAPPING_TERMとして設定する
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_L1, KC_LNG1):
            return 100;
        case LT(_L2, KC_SPC):
        case LT(_L2, KC_LNG2):
        default:
            return TAPPING_TERM;
    }
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(_L1, KC_LNG1):
        case LT(_L2, KC_LNG2):
        case LT(_L2, KC_SPC):
            return true;
        default:
            return false;
    }
}

// TAPPING_TERM 以下でも他のキーを down/up した時点でホールド扱い
// この設定を有効にすると、TAPPING_TERMより短に時間内に「ホールド＋タップ」を完遂しても「タップ＋タップ」にならず、
// あくまでも「ホールド＋タップ」として扱われるようになります。
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
//        case LT(_L1, KC_LNG1):
        case LT(_L2, KC_SPC):
//        case LCTL_T(KC_TAB):
            return true;
        default:
            return false;
    }
}

// TAPPING_TERM 以下でも他のキーを down した時点でホールド扱い
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
//        case LT(_L2, KC_SPC):
//            return true;
        default:
            return false;
    }
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MO(_L1):
        case MO(_L2):
        case LT(_L1, KC_LNG1):
        case LT(_L2, KC_LNG2):
        case LT(_L2, KC_SPC):
            update_tri_layer(_L1, _L2, _L3);
            break;
  }
}
