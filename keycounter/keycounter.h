#pragma once
#include "jasonhazel.h"

#ifdef KEYCOUNTER_ENABLE
    enum keycounter_keycodes {
        KEY_COUNTER_TOGGLE = SAFE_RANGE, 
        KEY_COUNTER_RESET
    };

    bool process_record_user_keycounter(uint16_t keycode, keyrecord_t *record);
    #ifdef OLED_ENABLE
        bool oled_task_user_keycounter(void);
    #endif
#endif