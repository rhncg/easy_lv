#include "liblvgl/display/lv_display.h"
#include "liblvgl/lvgl.h"
#include <string>

#pragma once

struct Screen {
  lv_obj_t *ptr;
  Screen(lv_obj_t *obj = nullptr) : ptr(obj) {}
  operator lv_obj_t *() const { return ptr; }
};

enum ScreenTransition {
  NONE,
  OVER_LEFT,
  OVER_RIGHT,
  OVER_TOP,
  OVER_BOTTOM,
  MOVE_LEFT,
  MOVE_RIGHT,
  MOVE_TOP,
  MOVE_BOTTOM,
  FADE_IN,
  FADE_ON,
  FADE_OUT,
  OUT_LEFT,
  OUT_RIGHT,
  OUT_TOP,
  OUT_BOTTOM
};

Screen create_screen();

Screen load_screen(Screen screen);
Screen load_screen(Screen screen, ScreenTransition transition, int time);
