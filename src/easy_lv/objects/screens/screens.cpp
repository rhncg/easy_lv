#include "screens.hpp"
#include "liblvgl/display/lv_display.h"
#include <unordered_map>

Screen create_screen() {
  lv_obj_t *new_scr = lv_obj_create(NULL);
  return Screen{new_scr};
}

Screen load_screen(Screen screen) {
  lv_screen_load(screen);
  return screen;
}

Screen load_screen(Screen screen, ScreenTransition transition, int time) {
  if (screen) {
    switch (transition) {
    case NONE:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_NONE, time, 0, false);
      break;
    case OVER_LEFT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OVER_LEFT, time, 0, false);
      break;
    case OVER_RIGHT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OVER_RIGHT, time, 0, false);
      break;
    case OVER_TOP:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OVER_TOP, time, 0, false);
      break;
    case OVER_BOTTOM:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OVER_BOTTOM, time, 0, false);
      break;
    case MOVE_LEFT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_MOVE_LEFT, time, 0, false);
      break;
    case MOVE_RIGHT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, time, 0, false);
      break;
    case MOVE_TOP:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_MOVE_TOP, time, 0, false);
      break;
    case MOVE_BOTTOM:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, time, 0, false);
      break;
    case FADE_IN:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_IN, time, 0, false);
      break;
    case FADE_ON:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_ON, time, 0, false);
      break;
    case FADE_OUT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_FADE_OUT, time, 0, false);
      break;
    case OUT_LEFT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OUT_LEFT, time, 0, false);
      break;
    case OUT_RIGHT:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OUT_RIGHT, time, 0, false);
      break;
    case OUT_TOP:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OUT_TOP, time, 0, false);
      break;
    case OUT_BOTTOM:
      lv_screen_load_anim(screen, LV_SCR_LOAD_ANIM_OUT_BOTTOM, time, 0, false);
      break;
    }
  }
  return screen;
}
