#pragma once

#include "km_config.h"
#include "tapdance.h"

void td_finish__reset(tap_dance_state_t *state, void *user_data) {
    if (state->count >= 4) {
        reset_keyboard();
        reset_tap_dance(state);
    } else {
        tap_code(KC_X);
    }
}

void td_press__bspc(tap_dance_state_t *state, void *user_data) {
    if (state->count < 1) {
        return;
    }

    switch (state->count) {
        case 1:
            break;

        case 2:
            layer_on(_DUAL_NUMPAD);
            break;

        case 3:
            // Went past a double tap, so back out of mod & catch up on ignored taps
            layer_off(_DUAL_NUMPAD);
            tap_code(KC_BSPC);
            tap_code(KC_BSPC);

            // From now on, each press should be handled normally
            register_code(KC_BSPC);
            break;

        default:
            unregister_code(KC_BSPC);
            register_code(KC_BSPC);
    }
}

void td_finish__bspc(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        // A single press was ignored, so either hold or tap
        if (!state->pressed || state->interrupted) {
            tap_code(KC_BSPC);
        } else {
            register_code(KC_BSPC);
        }
    } else if (state->count == 2 && (state->pressed || state->interrupted)) {
        // Either way, treat this as a hold, since "interrupted" is a mod-press
    } else if (state->count == 2) {
        layer_off(_DUAL_NUMPAD);
        tap_code(KC_BSPC);
        tap_code(KC_BSPC);
    }
    // leave the else state alone too, since it could be either a tap or hold
}

void td_reset__bspc(tap_dance_state_t *state, void *user_data) {
    // Whatever, just turn it all off...
    layer_off(_DUAL_NUMPAD);
    unregister_code(KC_BSPC);
}
