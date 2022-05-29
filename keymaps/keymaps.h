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


// this approach kind of breaks down on keyboards that support multiple layouts (ilke the corne)
// need a way to force a layout from the keyboard keymap
#ifdef KEYMAP_split_3x5_3
    #include "layouts/split_3x5_3.h"
    #define LAYOUT_BASE LAYOUT_split_3x5_3
#endif

#ifdef KEYMAP_split_3x5_2
    #include "layouts/split_3x5_2.h"
    #define LAYOUT_BASE LAYOUT_split_3x5_2
#endif

#ifdef KEYMAP_split_3x6_3
    #include "layouts/split_3x6_3.h"
    #define LAYOUT_BASE LAYOUT_split_3x6_3
#endif


#ifndef LAYOUT_BASE
    #error USERSPACE LAYOUT MISSING
#endif

#define LAYOUT_WRAPPER(...) LAYOUT_BASE(__VA_ARGS__)