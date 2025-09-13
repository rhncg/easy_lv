#include "task_handler.hpp"
#include "main.h"


void create_task() {
    while (true) {
        lv_timer_handler();
        pros::delay(10);
    }
}
