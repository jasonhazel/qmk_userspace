#include QMK_KEYBOARD_H
#include "jasonhazel.h"

#ifdef POINTING_DEVICE_ENABLE
    static uint16_t idle = 0;
    static bool status = false;

    int8_t CLAMP_HID(int value) { return value < -127 ? -127 : value > 127 ? 127 : value; }

    void keyboard_post_init_user_pointing(void) {
        led_on();
    }

    void suspend_power_down_user_pointing(void) {
        led_off();
    }

    void led_on(void) {
        pimoroni_trackball_set_rgbw(MOUSE_COLOR);
        idle = timer_read();
        status = true;
    }

    void led_off(void) {
        pimoroni_trackball_set_rgbw(0, 0, 0, 0);
        status = false;
    }

    void matrix_scan_user_pointing(void) {
        if (idle == 0) idle = timer_read();
        if (status && timer_elapsed(idle) > 10000) {
            led_off();
        }
    }

    void suspend_wakeup_init_user_pointing(void) {
        led_on();
    }


    bool trackball_scrolling = false;

    report_mouse_t pointing_device_task_user_pointing(report_mouse_t mouse_report) {
        if (mouse_report.y != 0 || mouse_report.x != 0) {
            idle = timer_read();
            if (!status) led_on();
        }



        if (trackball_scrolling) {
            mouse_report.h = CLAMP_HID(mouse_report.x * MOUSE_SCROLL_SPEED / 100);
            mouse_report.v = -CLAMP_HID(mouse_report.y * MOUSE_SCROLL_SPEED / 100);
            mouse_report.x = 0;
            mouse_report.y = 0;
        } else {
            mouse_report.x = CLAMP_HID(mouse_report.x * MOUSE_POINTER_SPEED / 100);
            mouse_report.y = CLAMP_HID(mouse_report.y * MOUSE_POINTER_SPEED / 100);
        }
        return mouse_report;
    }

    bool process_record_user_pointing(uint16_t keycode, keyrecord_t *record) {
        if (keycode == BALL_SCR) {
            trackball_scrolling = record->event.pressed;
        } 
        return true;
    }
#endif