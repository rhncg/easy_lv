#include "buttons.hpp"
#include "liblvgl/core/lv_obj_event.h"
#include "liblvgl/misc/lv_event.h"
#include "liblvgl/misc/lv_types.h"

Button create_button(const std::string label, Screen screen, void (*callback)(),
                     const Align align, const int pos_x, const int pos_y) {
  lv_obj_t *btn = lv_button_create(screen);
  lv_obj_align(btn, to_lv_align(align), pos_x, -pos_y);
  lv_obj_add_event_cb(btn, event_handler, LV_EVENT_ALL, NULL);
  lv_obj_t *btn_label = lv_label_create(btn);
  lv_label_set_text(btn_label, label.c_str());
  if (callback) {
    callback_map[label] = callback;
  } else {
    callback_map[label] = []() {};
  }
  return Button{btn};
}

Button create_button(const std::string label, Screen screen, void (*callback)(),
                     const Align align, const int pos_x, const int pos_y,
                     const int width, const int height) {
  lv_obj_t *btn = lv_button_create(screen);
  lv_obj_align(btn, to_lv_align(align), pos_x, -pos_y);
  lv_obj_add_event_cb(btn, event_handler, LV_EVENT_ALL, NULL);
  lv_obj_t *btn_label = lv_label_create(btn);
  lv_label_set_text(btn_label, label.c_str());
  if (callback) {
    callback_map[label] = callback;
  } else {
    callback_map[label] = []() {};
  }
  if (width > 0 && height > 0)
    lv_obj_set_size(btn, width, height);
  return Button{btn};
}
