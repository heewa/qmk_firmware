#pragma once

#include "kb.h"

enum {
    TD_RESET,
    TD_BSPC,
};

void td_finish__reset(qk_tap_dance_state_t *state, void *user_data);

void td_press__bspc(qk_tap_dance_state_t *state, void *user_data);
void td_finish__bspc(qk_tap_dance_state_t *state, void *user_data);
void td_reset__bspc(qk_tap_dance_state_t *state, void *user_data);

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(td_finish__reset),
    //[TD_BSPC] = ACTION_TAP_DANCE_FN_ADVANCED(td_press__bspc, td_finish__bspc, td_reset__bspc),
};
