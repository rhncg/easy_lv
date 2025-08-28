#include "align.hpp"

lv_align_t to_lv_align(Align align) {
    switch (align) {
        case TOP_LEFT: return LV_ALIGN_TOP_LEFT;
        case TOP_MID: return LV_ALIGN_TOP_MID;
        case TOP_RIGHT: return LV_ALIGN_TOP_RIGHT;
        case BOTTOM_LEFT: return LV_ALIGN_BOTTOM_LEFT;
        case BOTTOM_MID: return LV_ALIGN_BOTTOM_MID;
        case BOTTOM_RIGHT: return LV_ALIGN_BOTTOM_RIGHT;
        case LEFT_MID: return LV_ALIGN_LEFT_MID;
        case RIGHT_MID: return LV_ALIGN_RIGHT_MID;
        case CENTER: return LV_ALIGN_CENTER;
        case DEFAULT:
        default: return LV_ALIGN_DEFAULT;
    }
}