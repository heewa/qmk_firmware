#include "kajrow.h"

#define ____ KC_TRNS

enum {
    TD_RESET,
};

void handle_reset_tap(tap_dance_state_t *state, void *user_data) {
    if (state->count >= 4) {
        reset_keyboard();
        reset_tap_dance(state);
    } else {
        tap_code(KC_F1);
    }
}

tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(handle_reset_tap),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	LAYOUT(
		KC_1, KC_2, KC_3, KC_4, KC_5,
		KC_Q, KC_W, KC_E, KC_R, KC_T,
		KC_A, KC_S,  KC_D, KC_F, KC_G,
		KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,

        KC_BSPC, KC_RGUI, CTL_T(KC_ESC),
        LT(1, KC_TAB), ALT_T(KC_ENT), SFT_T(KC_SPC),

		KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS,
		KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
		KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_UP,
		KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LEFT, KC_DOWN, KC_RIGHT),

	LAYOUT(
		TD(TD_RESET), KC_F2, KC_F3, KC_F4, KC_F5,
        ____, ____, ____, ____, ____,
        KC_KB_VOLUME_DOWN, KC_KB_MUTE, KC_KB_VOLUME_UP, ____, ____,
        ____, KC_MPRV, KC_MPLY, KC_MNXT, ____, ____,

        KC_DEL, ____, ____,
        ____, ____, KC_INS,

        KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ____,
        ____, ____, ____, ____, ____, ____, ____,
        KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, ____, ____, KC_PGUP,
        ____, ____, ____, ____, ____, KC_HOME, KC_PGDN, KC_END),

};
