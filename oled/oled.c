#include QMK_KEYBOARD_H
#include "jasonhazel.h"

#ifdef OLED_ENABLE
    void suspend_power_down_user_oled(void) {
        oled_off();
    }

    void suspend_wakeup_init_user_olded(void) {
        oled_on();
    }

    void render_layer(void) {
        oled_set_cursor(0, 14);
        switch(get_highest_layer(layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("ALPHA"), false);
                break;
            case _SYMBOLS:
                oled_write_P(PSTR(" SYM "), false);
                break;
            case _NUMBERS:
                oled_write_P(PSTR(" NUM "), false);
                break;
            case _NAVIGATION:
                oled_write_P(PSTR(" NAV "), false);
                break;
        }
    }


    #ifdef WPM_ENABLE
        void render_wpm(void) {
            oled_set_cursor(0, 0);
            oled_write_P(PSTR("WPM"), false);
            oled_set_cursor(2, 1);
            oled_write(get_u8_str(get_current_wpm(), ' '), false);

        }
    #endif
    void render_mod_status(uint8_t modifiers) {
        oled_set_cursor(0, 11);
        oled_write_P(PSTR("SHIFT"), (modifiers & MOD_MASK_SHIFT));
        oled_write_P(PSTR("CNTRL"), (modifiers & MOD_MASK_CTRL));
    }  

    bool process_record_user_oled(uint16_t keycode, keyrecord_t *record) {
        // if (record->event.pressed) keycount++;

        return true;
    }

    oled_rotation_t oled_init_user_oled(oled_rotation_t rotation){   
        // return is_keyboard_master() ? OLED_ROTATION_270 : OLED_ROTATION_90
        return OLED_ROTATION_270;
    }
#endif