#include "joywa.h"

#include "print.h"
#include "pointing_device.h"

void matrix_init_kb(void) {
}

void keyboard_post_init_kb(void) {
    debug_enable = true;
    //debug_matrix = true;
    //debug_keyboard = true;
    //debug_mouse = true;
}
