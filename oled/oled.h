#pragma once
#include "jasonhazel.h"
#ifdef OLED_ENABLE
    #define OLED_DISPLAY_128X32

    #ifndef OLED_TIMEOUT
        #define OLED_TIMEOUT 30000
    #endif

    #ifndef OLED_UPDATE_INTERVAL 
        #define OLED_UPDATE_INTERVAL 250
    #endif
    
    void suspend_power_down_user_oled(void);
    void suspend_wakeup_init_user_olded(void);
    void render_layer(void);
    void render_wpm(void);
    void render_keycount(void);
    void render_mod_status(uint8_t modifiers);

    oled_rotation_t oled_init_user_oled(oled_rotation_t rotation);

    bool process_record_user_oled(uint16_t keycode, keyrecord_t *record);
#endif