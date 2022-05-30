#pragma once
#include "jasonhazel.h"

#ifdef COMBO_ENABLE
#ifndef COMBO_TERM
    #define COMBO_TERM 100
#endif
enum combo_events {
  COMBO_NAVIGATION,
  COMBO_KEYCOUNTER_RESET,
  COMBO_RESET,
  COMBO_LENGTH
};

#endif