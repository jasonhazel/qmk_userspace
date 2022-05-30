#pragma once
#include "jasonhazel.h"

#ifdef COMBO_ENABLE
#ifndef COMBO_TERM
    #define COMBO_TERM 100
#endif
enum combo_events {
  COMBO_NAVIGATION,
  #ifdef KEYCOUNTER_ENABLE
    COMBO_KEYCOUNTER_RESET,
  #endif
  COMBO_LENGTH
};

#endif