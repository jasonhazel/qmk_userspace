#pragma once
#include "jasonhazel.h"
#include "keycodes.h"

#define LAYER_STATE_8BIT

enum layers {
    _QWERTY,
    _SYMBOLS,
    _NUMBERS,
    _NAVIGATION,
    LAYER_LENGTH
 };

#ifdef LAYOUT_split_3x5_3
    #include "keymaps/split_3x5_3.h"
    #define LAYOUT_BASE LAYOUT_split_3x5_3
#endif

#ifdef LAYOUT_BASE
    #define LAYOUT_WRAPPER(...) LAYOUT_BASE(__VA_ARGS__)
#endif