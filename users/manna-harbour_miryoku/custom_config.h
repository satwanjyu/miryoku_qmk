// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_KEYBOARD_keychron_q8_ansi_encoder

#if defined (MIRYOKU_KEYBOARD_keychron_q8_ansi_encoder)
#define MIRYOKU_LAYER_QWERTY \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_SCLN,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_QWERTY_FN1 MIRYOKU_LAYER_QWERTY
#define MIRYOKU_LAYER_QWERTY_FN3 MIRYOKU_LAYER_QWERTY

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,        "Base") \
MIRYOKU_X(EXTRA,       "Extra") \
MIRYOKU_X(TAP,         "Tap") \
MIRYOKU_X(BUTTON,      "Button") \
MIRYOKU_X(NAV,         "Nav") \
MIRYOKU_X(MOUSE,       "Mouse") \
MIRYOKU_X(MEDIA,       "Media") \
MIRYOKU_X(NUM,         "Num") \
MIRYOKU_X(SYM,         "Sym") \
MIRYOKU_X(FUN,         "Fun") \
MIRYOKU_X(QWERTY,      "Qwerty") \
MIRYOKU_X(QWERTY_FN1,  "RGB") \
MIRYOKU_X(QWERTY_FN3,  "Function Row")

#define MIRYOKU_LAYERMAPPING_QWERTY( \
         K00,     K01,     K02,     K03,     K04,                                         K05,     K06,     K07,     K08,     K09,     \
         K10,     K11,     K12,     K13,     K14,                                         K15,     K16,     K17,     K18,     K19,     \
         K20,     K21,     K22,     K23,     K24,                                         K25,     K26,     K27,     K28,     K29,     \
         N30,     N31,     K32,     K33,     K34,                                         K35,     K36,     K37,     N38,     N39      \
) \
LAYOUT_ansi_69( \
KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                                        KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,  \
KC_TAB,  K00,     K01,     K02,     K03,     K04,                                         K05,     K06,     K07,     K08,     K09,      KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,   \
KC_CAPS, K10,     K11,     K12,     K13,     K14,                                         K15,     K16,     K17,     K18,     K19,      KC_QUOT,  KC_ENT,                     KC_HOME,  \
KC_LSFT, K20,     K21,     K22,     K23,     K24,                       K24,              K25,     K26,     K27,     K28,     K29,                KC_RSFT,  KC_UP,                      \
KC_LCTL, KC_LALT,          KC_LGUI, KC_SPC,           MO(U_QWERTY_FN1),   MO(U_QWERTY_FN1),   KC_SPC,           KC_RGUI,                    KC_LEFT,  KC_DOWN,  KC_RGHT                     \
)

#define MIRYOKU_LAYERMAPPING_QWERTY_FN1( \
         K00,     K01,     K02,     K03,     K04,                                         K05,     K06,     K07,     K08,     K09,     \
         K10,     K11,     K12,     K13,     K14,                                         K15,     K16,     K17,     K18,     K19,     \
         K20,     K21,     K22,     K23,     K24,                                         K25,     K26,     K27,     K28,     K29,     \
         N30,     N31,     K32,     K33,     K34,                                         K35,     K36,     K37,     N38,     N39      \
) \
LAYOUT_ansi_69( \
KC_GRV,  KC_BRID, KC_BRIU, KC_NO,   KC_NO,   RGB_VAD, RGB_VAI,                            KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD,  KC_VOLU,  KC_NO,                      RGB_TOG,  \
RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO,    \
KC_NO,   RGB_RMOD,RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,                      KC_NO,    \
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,            KC_NO,   NK_TOGG, KC_NO,   KC_NO,   KC_NO,              KC_NO,    KC_NO,                      \
KC_NO,   KC_NO,            KC_NO,   KC_NO,            KC_NO,            KC_NO,            KC_NO,            KC_NO,                      KC_NO,    KC_NO,    KC_NO                       \
)

#define MIRYOKU_LAYERMAPPING_QWERTY_FN3( \
         K00,     K01,     K02,     K03,     K04,                                         K05,     K06,     K07,     K08,     K09,     \
         K10,     K11,     K12,     K13,     K14,                                         K15,     K16,     K17,     K18,     K19,     \
         K20,     K21,     K22,     K23,     K24,                                         K25,     K26,     K27,     K28,     K29,     \
         N30,     N31,     K32,     K33,     K34,                                         K35,     K36,     K37,     N38,     N39      \
) \
LAYOUT_ansi_69( \
KC_TILD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,   KC_NO,                      RGB_TOG, \
RGB_TOG, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,            KC_NO, \
KC_NO,   RGB_RMOD,RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,                                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,                      KC_NO, \
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                     KC_NO,            KC_NO,   NK_TOGG, KC_NO,   KC_NO,   KC_NO,              KC_NO,    KC_NO, \
KC_NO,   KC_NO,   KC_NO,            KC_NO,            KC_NO,            KC_NO,                     KC_NO,            KC_NO,                       KC_NO,    KC_NO,   KC_NO \
)

#endif
