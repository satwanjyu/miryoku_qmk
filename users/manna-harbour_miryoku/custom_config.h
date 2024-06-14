// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined KEYBOARD_bastardkb_charybdis_3x5_v2_splinky_3
#define MIRYOKU_LAYERMAPPING_TAP( \
K00,     K01,   K02,   K03,   K04,          K05,   K06,   K07,   K08,   K09, \
K10,     K11,   K12,   K13,   K14,          K15,   K16,   K17,   K18,   K19, \
K20,     K21,   K22,   K23,   K24,          K25,   K26,   K27,   K28,   K29, \
N30,     N31,   K32,   K33,   K34,          K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT_charybdis_3x5( \
KC_TAB,  K00,   K01,    K02,    K03,          K06,     K07,     KC_UP,   K09,     KC_BSPC, \
KC_LSFT, K10,   K11,    K12,    K13,          K16,     KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,  \
KC_G,    K20,   K21,    K22,    K23,          K26,     K27,     K28,     K29,     DF(U_BASE),  \
            KC_LCTL, KC_SPC, KC_ESC,          KC_LGUI, KC_RALT \
)
#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              DRAG,              KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
#endif
