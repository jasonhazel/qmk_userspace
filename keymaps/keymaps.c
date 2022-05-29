#include QMK_KEYBOARD_H
#include "jasonhazel.h"
#include "keymaps.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY]     = LAYOUT_WRAPPER(KM_QWERTY),
  [_SYMBOLS]    = LAYOUT_WRAPPER(KM_SYMBOLS),
  [_NUMBERS]    = LAYOUT_WRAPPER(KM_NUMBERS),
  [_NAVIGATION] = LAYOUT_WRAPPER(KM_NAVIGATION),
};
