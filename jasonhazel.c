#include "jasonhazel.h"


#ifdef OLED_ENABLE
    __attribute__((weak)) oled_rotation_t oled_init_user(oled_rotation_t rotation) {
        return oled_init_user_oled(rotation);
    }

    __attribute__((weak)) bool oled_task_user(void) {
        render_mod_status(get_mods());
        render_layer();
        #ifdef WPM_ENABLE
            if (!is_keyboard_master()) render_wpm();
        #endif

        #ifdef KEYCOUNTER_ENABLE
            if (is_keyboard_master())
                oled_task_user_keycounter();
        #endif

        return true;
    }
#endif

__attribute__((weak)) void suspend_power_down_user(void) {
    #ifdef FALSE
        suspend_power_down_user_pointing();
    #endif

    #ifdef OLED_ENABLE
        suspend_power_down_user_oled();
    #endif
}

__attribute__((weak)) void suspend_wakeup_init_user(void) {
    #ifdef FALSE
        suspend_wakeup_init_user_pointing();
    #endif
    #ifdef OLED_ENABLE
        suspend_wakeup_init_user_olded();
    #endif
}

__attribute__((weak)) void matrix_scan_user(void) {
    #ifdef FALSE
        matrix_scan_user_pointing();
    #endif
}
__attribute__((weak)) bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef FALSE
        process_record_user_pointing(keycode, record);
    #endif

    #ifdef OLED_ENABLE
        process_record_user_oled(keycode, record);
    #endif

    #ifdef KEYCOUNTER_ENABLE
        process_record_user_keycounter(keycode, record);
    #endif
    return true;
}

__attribute__((weak)) void keyboard_post_init_user(void) {
    #ifdef FALSE
        keyboard_post_init_user_pointing();
    #endif
}

#ifdef FALSE
    __attribute__((weak)) report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
        #ifdef OLED_ENABLE
            if (mouse_report.x != 0 || mouse_report.y != 0) {
                oled_on();
            }
        #endif
        return pointing_device_task_user_pointing(mouse_report);
    }
#endif