#include "liblvgl/core/lv_obj.h"
#include "liblvgl/core/lv_obj_event.h"
#include "liblvgl/core/lv_obj_tree.h"
#include "liblvgl/misc/lv_event.h"
#include "liblvgl/misc/lv_log.h"
#include "liblvgl/widgets/label/lv_label.h"
#include <string>
#include <unordered_map>

#pragma once
extern std::unordered_map<std::string, void (*)()> callback_map;
void event_handler(lv_event_t *e);
