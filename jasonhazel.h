#pragma once
#include QMK_KEYBOARD_H


#include "keymaps/keymaps.h"

#ifdef TAP_DANCE_ENABLE
    #include "tapdances/tapdances.h"
#endif

#ifdef COMBO_ENABLE
    #include "combos/combos.h"
#endif

#ifdef KEY_OVERRIDE_ENABLE
    #include "keyoverrides/keyoverrides.h"
#endif

#ifdef POINTING_DEVICE_ENABLE
    #include "pointing/pointing.h"
#endif

#ifdef OLED_ENABLE
    #include "oled/oled.h"
#endif

#ifdef KEYCOUNTER_ENABLE
    #include "keycounter/keycounter.h"
#endif



