// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined KEYBOARD_bastardkb_charybdis_3x5_v2_splinky_3
#define MIRYOKU_LAYER_TAP \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,              KC_U,              KC_I,              KC_UP,             KC_P,              KC_BSPC,           \
KC_LSFT,           KC_A,              KC_S,              KC_D,              KC_F,              KC_J,              KC_LEFT,           KC_DOWN,           KC_RGHT,           KC_ENT,            \
KC_G,              KC_Z,              KC_X,              KC_C,              KC_V,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           DF(U_BASE),        \
U_NP,              U_NP,              KC_LCTL,          KC_SPC,            KC_ESC,            KC_LGUI,           KC_LALT,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              DRAG,              KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP
#endif
