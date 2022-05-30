#pragma once
#include "jasonhazel.h"
#ifdef POINTING_DEVICE_ENABLE
    #define PIMORONI_TRACKBALL_ENABLE
    #define PIMORONI_TRACKBALL_CLICK
    
    #include "drivers/sensors/pimoroni_trackball.h"
    #include "pointing_device.h"

        
    enum trackball_keycodes {
        BALL_SCR = SAFE_RANGE,
    };

    #ifndef MOUSE_COLOR
        #define MOUSE_COLOR 49,27, 148, 0
    #endif

    #ifndef MOUSE_POINTER_SPEED
        #define MOUSE_POINTER_SPEED  250
    #endif
    #ifndef MOUSE_SCROLL_SPEED
        #define MOUSE_SCROLL_SPEED 25
    #endif

    void keyboard_post_init_user_pointing(void);
    report_mouse_t pointing_device_task_user_pointing(report_mouse_t mouse_report);
    bool process_record_user_pointing(uint16_t keycode, keyrecord_t *record);
    void suspend_power_down_user_pointing(void);
    void suspend_wakeup_init_user_pointing(void);


    void led_off(void);
    void led_on(void);
    void matrix_scan_user_pointing(void);
#endif