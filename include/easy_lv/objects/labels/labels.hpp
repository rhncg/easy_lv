#include "../../manager/event_handler/event_handler.hpp"
#include "../align.hpp"
#include "../screens/screens.hpp"
#include "liblvgl/lvgl.h"
#include <string>
#include <unordered_map>

struct Label {
  lv_obj_t *ptr;
  Label(lv_obj_t *obj = nullptr) : ptr(obj) {}
  operator lv_obj_t *() const { return ptr; }
  void set_text(const std::string &text) {
    if (ptr)
      lv_label_set_text(ptr, text.c_str());
  }
};

Label create_label(const std::string label, Screen screen, const Align align,
                   const int pos_x, const int pos_y);
Label create_label(const std::string label, Screen screen, const Align align,
                   const int pos_x, const int pos_y, const int width,
                   const int height);

void edit_label(Label label, const std::string new_text);
