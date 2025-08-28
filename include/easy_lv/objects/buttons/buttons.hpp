#include "../../manager/event_handler/event_handler.hpp"
#include "../align.hpp"
#include "../screens/screens.hpp"
#include "liblvgl/lvgl.h"
#include <functional>
#include <string>

/**
 * @brief LVGL Button Type
 */
struct Button {
  lv_obj_t *ptr;
  std::function<void()> callback;
  Button(lv_obj_t *obj = nullptr, std::function<void()> cb = nullptr)
      : ptr(obj), callback(cb) {}
  operator lv_obj_t *() const { return ptr; }
};

/**
 * @brief Create a button object
 *
 * @param label The text on the button
 * @param screen Screen on which the button will be displayed
 * @param callback Will be called when button is clicked
 * @param align Alignment of the button
 * @param pos_x X position of the button
 * @param pos_y Y position of the button
 * @return Button
 */
Button create_button(const std::string label, Screen screen, void (*callback)(),
                     const Align align, const int pos_x, const int pos_y);
Button create_button(const std::string label, Screen screen, void (*callback)(),
                     const Align align, const int pos_x, const int pos_y,
                     const int width, const int height);
