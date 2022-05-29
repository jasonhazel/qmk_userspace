#pragma once
#include "jasonhazel.h"

#ifdef COMBO_ENABLE
#ifndef COMBO_TERM
    #define COMBO_TERM 100
#endif
enum combo_events {
  // COMBO_SYMBOLS, 
  // COMBO_NUMBERS,
  COMBO_NAVIGATION,
  COMBO_LENGTH
};

#endif