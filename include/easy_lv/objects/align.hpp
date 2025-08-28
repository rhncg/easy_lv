#include "liblvgl/lvgl.h"

#pragma once
enum Align {
  DEFAULT,
  TOP_LEFT,
  TOP_MID,
  TOP_RIGHT,
  BOTTOM_LEFT,
  BOTTOM_MID,
  BOTTOM_RIGHT,
  LEFT_MID,
  RIGHT_MID,
  CENTER,
};

lv_align_t to_lv_align(Align align);
