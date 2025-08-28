#include "labels.hpp"

Label create_label(std::string label, Screen screen, Align align, int pos_x, int pos_y) {
    lv_obj_t* lbl = lv_label_create(screen);
    lv_label_set_text(lbl, label.c_str());
    lv_obj_align(lbl, to_lv_align(align), pos_x, -pos_y);
    return Label{lbl};
}

Label create_label(std::string label, Screen screen, Align align, int pos_x, int pos_y, int width, int height) {
    lv_obj_t* lbl = lv_label_create(screen);
    lv_label_set_text(lbl, label.c_str());
    lv_obj_align(lbl, to_lv_align(align), pos_x, -pos_y);
    if(width > 0 && height > 0) lv_obj_set_size(lbl, width, height);
    return Label{lbl};
}

// edit label text by value
void edit_label(Label label, std::string new_text) {
    label.set_text(new_text);
}
