#include "event_handler.hpp"

std::unordered_map<std::string, void (*)()> callback_map;

void event_handler(lv_event_t *e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target_obj(e);

    // LV_LOG_USER("Event code: %d", code);

    if (obj == NULL) {
        LV_LOG_USER("Object is NULL\n");
        return;
    }

    if (code == LV_EVENT_CLICKED) {
        lv_obj_t *child = lv_obj_get_child(obj, 0);

        if (child == NULL) {
            LV_LOG_USER("Button has no child");
            return;
        }

        LV_LOG_USER("Child class: %p\n", lv_obj_get_class(child));
        LV_LOG_USER("Address of map: %p\n", reinterpret_cast<void*>(&callback_map));

        if (lv_obj_get_class(child) == &lv_label_class) {
            const char *text = lv_label_get_text(child);
            if (text) {
                auto it = callback_map.find(std::string(text));
                if (it != callback_map.end()) {
                    LV_LOG_USER("Found callback for label: %s", text);
                    it->second();
                } else {
                    for (const auto &pair : callback_map) {
                        LV_LOG_USER("Label: '%s', Callback: %p", pair.first.c_str(), reinterpret_cast<void*>(pair.second));
                    }
                    LV_LOG_USER("No callback found for label: %s", text);
                }
            } else {
                LV_LOG_USER("Label text is NULL");
            }
        } else {
            LV_LOG_USER("Child is not a label");
        }
    }
}
