#pragma once

#include "kb.h"

enum {
    TD_RESET,
    TD_BSPC,
};

void td_finish__reset(tap_dance_state_t *state, void *user_data);

void td_press__bspc(tap_dance_state_t *state, void *user_data);
void td_finish__bspc(tap_dance_state_t *state, void *user_data);
void td_reset__bspc(tap_dance_state_t *state, void *user_data);

tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(td_finish__reset),
    //[TD_BSPC] = ACTION_TAP_DANCE_FN_ADVANCED(td_press__bspc, td_finish__bspc, td_reset__bspc),
};
