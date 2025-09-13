#include "init.hpp"
#include "main.h"

void init() {
    lv_init();
    create_task();
    pros::Task task_handler(create_task, "LVGL Task");
}