#pragma once
#include "jasonhazel.h"

#ifdef TAP_DANCE_ENABLE
    enum tapdances {
        TD_Q_ESC, 
        TD_SBKT,
        TD_CBKT,
        TD_PARN,
        TD_LTGT,
        TAPDANCE_LENGTH
    }; 

    #define KC_QESC   TD(TD_Q_ESC)
    #define KC_SBKT   TD(TD_SBKT)
    #define KC_CBKT   TD(TD_CBKT)
    #define KC_PARN   TD(TD_PARN)
    #define KC_LTGT   TD(TD_LTGT)
#else
    #define KC_QESC   KC_TRNS
    #define KC_SBKT   KC_TRNS
    #define KC_CBKT   KC_TRNS
    #define KC_PARN   KC_TRNS
    #define KC_PART   KC_TRNS
#endif
