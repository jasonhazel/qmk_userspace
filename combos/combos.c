#include QMK_KEYBOARD_H

#ifdef COMBO_ENABLE
    #include "jasonhazel.h"

    uint16_t COMBO_LEN = COMBO_LENGTH;

    // the tri-layer code was locking in a layer when trying to use one shot layers,
    // using a combo seems to, so far, not present the same problem
    const uint16_t PROGMEM combo_navigation[] = { OSL_SYM, OSL_NUM, COMBO_END };
    const uint16_t PROGMEM combo_keycounter_reset[] = { KC_A, KC_F, KC_J, KC_QUOT, COMBO_END };
    const uint16_t PROGMEM combo_reset[] = { KC_A, KC_S, KC_D, KC_F, KC_J, KC_K, KC_L, KC_QUOT, COMBO_END };
    combo_t key_combos[] = {
      [COMBO_NAVIGATION]  = COMBO(combo_navigation, OSL(_NAVIGATION)),
      [COMBO_KEYCOUNTER_RESET] = COMBO(combo_keycounter_reset, KEYCOUNTER_RESET),
      [COMBO_RESET] = COMBO(combo_reset, QK_BOOT)
    };
#endif