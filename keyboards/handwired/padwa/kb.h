#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K1, K2, K3, \
    K4, K5, K6 \
) { \
	{ K1 }, \
    { K2 }, \
    { K3 }, \
    { K4 }, \
    { K5 }, \
    { K6 }, \
    { TO(0) } \
}

enum {
    TD_RESET,
};

void handle_reset_tap(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 3) {
        reset_keyboard();
        reset_tap_dance(state);
    } else {
        tap_code(KC_Z);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(handle_reset_tap),
};

#define LAYER_SELECT { \
    { TO(1) }, \
    { TO(2) }, \
    { TO(3) }, \
    { TO(4) }, \
    { TO(5) }, \
    { TO(6) }, \
    { TD(TD_RESET) } \
}

#endif
