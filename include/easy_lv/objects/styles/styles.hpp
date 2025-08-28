#include "liblvgl/lvgl.h"

struct Style {
  lv_style_t *ptr;
  Style(lv_style_t *obj = nullptr) : ptr(obj) {}
  operator lv_style_t *() const { return ptr; }
};
