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


// not as 'magical' as I was hoping for, but the path of least resistence to handling boards with multiple supported layouts
#ifdef KEYMAP_split_3x5_3
    #include "layouts/split_3x5.h"
    #include "layouts/split_thumb_3.h"
    #define LAYOUT_BASE LAYOUT_split_3x5_3
#endif

#ifdef KEYMAP_split_3x5_2
    #include "layouts/split_3x5.h"
    #include "layouts/split_thumb_2.h"
    #define LAYOUT_BASE LAYOUT_split_3x5_2
#endif

#ifdef KEYMAP_split_3x6_3
    #include "layouts/split_3x6.h"
    #include "layouts/split_thumb_3.h"
    #define LAYOUT_BASE LAYOUT_split_3x6_3
#endif


#ifndef LAYOUT_BASE
    #error USERSPACE LAYOUT MISSING
#endif

#define KM_QWERTY           SHARED_QWERTY,      SHARED_QWERTY_THUMB 
#define KM_SYMBOLS          SHARED_SYMBOLS,     SHARED_DEFAULT_THUMB
#define KM_NUMBERS          SHARED_NUMBERS,     SHARED_DEFAULT_THUMB
#define KM_NAVIGATION       SHARED_NAVIGATION,  SHARED_DEFAULT_THUMB  

#define LAYOUT_WRAPPER(...) LAYOUT_BASE(__VA_ARGS__)