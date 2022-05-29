#pragma once
#include QMK_KEYBOARD_H

#define KC_GUIX   LGUI_T(KC_X)
#define KC_ALTC   LALT_T(KC_C)

// #define KC_LCBKT  LSFT(KC_LBRC)
// #define KC_RCBKT  LSFT(KC_RBRC)

// oneshots
#define KC_OCTL   OSM(MOD_LCTL)
#define KC_OSFT   OSM(MOD_LSFT)
#define KC_OALT   OSM(MOD_LALT)

#define OSL_SYM   OSL(_SYMBOLS)
#define OSL_NUM   OSL(_NUMBERS)