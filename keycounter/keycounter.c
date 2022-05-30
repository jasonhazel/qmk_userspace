#include QMK_KEYBOARD_H

#ifdef KEYCOUNTER_ENABLE
    #include "keycounter.h"

    uint16_t keycount = 0;
    bool process_record_user_keycounter(uint16_t keycode, keyrecord_t *record) {
        switch(keycode) {
            case KEYCOUNTER_RESET:
                keycount = 0;
                return false;
        }

        if (record->event.pressed) {
            if (keycount == 32768) keycount = 0;
            keycount++;
        }
        return true;
    }
    
    #ifdef OLED_ENABLE
        bool oled_task_user_keycounter(void) { 
          oled_set_cursor(0, 0);
          oled_write_P(PSTR("COUNT"), false);
          oled_write(get_u16_str(keycount, ' '), false);
          return true;
        }
    #endif
#endif