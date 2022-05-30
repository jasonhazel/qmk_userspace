#pragma once
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

#define ONESHOT_TAP_TOGGLE 10
#define ONESHOT_TIMEOUT 500
#define COMBO_TERM 100

#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// disable shit
#define NO_MUSIC_MODE

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#ifdef SPLIT_KEYBOARD
    #ifdef OLED_ENABLE
        #define SPLIT_OLED_ENABLE
        #define SPLIT_LAYER_STATE_ENABLE
        #define SPLIT_MODS_ENABLE

        #ifdef WPM_ENABLE
            #define SPLIT_WPM_ENABLE
        #endif
    #endif

    #ifdef POINTING_DEVICE_ENABLE
        #define SPLIT_POINTING_ENABLE
        #if !defined(POINTING_DEVICE_LEFT) && !defined(POINTING_DEVICE_LEFT) && !defined(POINTING_DEVICE_RIGHT)
            #define POINTING_DEVICE_COMBINED
        #endif
    #endif
#endif

#ifdef WPM_ENABLE
    #define WPM_LAUNCH_CONTROL 
    #define WPM_SAMPLE_SECONDS 10
    #define WPM_UNFILTERED
#endif