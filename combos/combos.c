#include QMK_KEYBOARD_H

#ifdef COMBO_ENABLE
    #include "jasonhazel.h"

    uint16_t COMBO_LEN = COMBO_LENGTH;

    // the tri-layer code was locking in a layer when trying to use one shot layers,
    // using a combo seems to, so far, not present the same problem
    const uint16_t PROGMEM combo_navigation[] = { OSL_SYM, OSL_NUM, COMBO_END };

    combo_t key_combos[] = {
      [COMBO_NAVIGATION]  = COMBO(combo_navigation, OSL(_NAVIGATION))
    };
#endif