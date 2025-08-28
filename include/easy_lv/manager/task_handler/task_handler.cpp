#include "task_handler.hpp"
#include <unistd.h>


void create_task() {
    while (true) {
        lv_timer_handler();
        usleep(10000);
    }
}
