#include "main.h"
#include "easy_lv/easy_lv.hpp"
#include "easy_lv/objects/align.hpp"
#include "easy_lv/objects/screens/screens.hpp"

void initialize() {
	init();
	Screen main_screen = create_screen();
	create_button("button", main_screen, nullptr, CENTER, 0, 0);
	create_label("label", main_screen, CENTER, 0, 40);
	load_screen(main_screen);

	lv_init();
}