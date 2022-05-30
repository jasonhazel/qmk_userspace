#pragma once
#include "jasonhazel.h"
enum keycounter_keycodes {
    KEYCOUNTER_TOGGLE = SAFE_RANGE, 
    KEYCOUNTER_RESET
};

    
#ifdef KEYCOUNTER_ENABLE


    bool process_record_user_keycounter(uint16_t keycode, keyrecord_t *record);
    #ifdef OLED_ENABLE
        bool oled_task_user_keycounter(void);
    #endif
#endif