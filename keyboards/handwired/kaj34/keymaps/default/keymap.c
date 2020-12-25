#include "kb.h"

#include "combos.h"

#define ____ KC_TRNS

enum {
    TD_RESET,
};

void handle_reset_tap(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 4) {
        reset_keyboard();
        reset_tap_dance(state);
    } else {
        tap_code(KC_X);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_RESET] = ACTION_TAP_DANCE_FN(handle_reset_tap),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0
	KEYMAP(
		KC_Q,
         KC_W,
          KC_E,
           KC_R,
            KC_T,
                KC_Y,
                 KC_U,
                  KC_I,
                   KC_O,
                    KC_P,
		KC_A,
         KC_S,
          KC_D,
           KC_F,
            KC_G,
                LSFT(KC_SCLN),
                 KC_H,
                  KC_J,
                   KC_K,
                    KC_L,
		LT(2, KC_Z),
         KC_X,
          KC_C,
           KC_V,
               KC_B,
                KC_N,
                 KC_M,
                  LT(3, KC_COMM),
        KC_BSPC,
          KC_RGUI,
          CTL_T(KC_ESC),
        SFT_T(KC_SPC),
          LT(1, KC_TAB),
          ALT_T(KC_ENT)),

    // Layer 1
	KEYMAP(
		KC_1,
         KC_2,
          KC_3,
           KC_4,
            KC_5,
                KC_6,
                 KC_7,
                  KC_8,
                   KC_9,
                    KC_0,
		LSFT(KC_SLSH),
         ____,
          ____,
           ____,
            ____,
                KC_SCLN,
                 KC_LEFT,
                  KC_DOWN,
                   KC_UP,
                    KC_RIGHT,
        LT(3, KC_Z),
		 TD(TD_RESET),
          ____,
           ____,
                KC_HOME,
                 KC_PGDN,
                  KC_PGUP,
                   KC_END,

        KC_DEL,
          ____,
          ____,
        SFT_T(KC_INS),
          ____,
          ____),

    // Layer 2
	KEYMAP(
		____,
         ____,
          ____,
           ____,
            ____,
                ____,
                 KC_KP_7,
                  KC_KP_8,
                   KC_KP_9,
                    ____,
		____,
         KC__VOLDOWN,
          KC__MUTE,
           KC__VOLUP,
            ____,
                ____,
                 KC_KP_4,
                  KC_KP_5,
                   KC_KP_6,
                    KC_KP_0,
		____,
         KC_MPRV,
          KC_MPLY,
           KC_MNXT,
               KC_KP_1,
                KC_KP_2,
                 KC_KP_3,
                  KC_DOT,
        KC_BSPC,
          KC_RGUI,
          LCTL(KC_ESC),
        LSFT(KC_SPC),
          LT(3, KC_TAB),
          LALT(KC_ENT)),

    // Layer 3
	KEYMAP(
		KC_F1,
         KC_F2,
          KC_F3,
           KC_F4,
            KC_F5,
                KC_F6,
                 KC_F7,
                  KC_F8,
                   KC_F9,
                    KC_F10,
		KC_F11,
         KC_F12,
          KC_MS_WH_LEFT,
           KC_MS_WH_UP,
            KC_MS_WH_RIGHT,
                KC_MS_BTN3,
                KC_MS_BTN1,
                  KC_MS_UP,
                   KC_MS_BTN2,
                    ____,
		____,
         ____,
          ____,
           KC_MS_WH_DOWN,
               KC_MS_LEFT,
                KC_MS_DOWN,
                 KC_MS_RIGHT,
                  ____,
        ____,
          ____,
          ____,
        ____,
          ____,
          ____),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	//keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // handle reverse shifted keys
    uint8_t mod_state = get_mods();
    switch (keycode) {
        case KC_1:
        case KC_2:
        case KC_3:
        case KC_4:
        case KC_5:
        case KC_6:
        case KC_7:
        case KC_8:
        case KC_9:
        case KC_0:

            if (record->event.pressed) {
                if (mod_state & MOD_MASK_SHIFT) {
                    del_mods(MOD_MASK_SHIFT);
                } else {
                    add_mods(MOD_MASK_SHIFT);
                }
                register_code(keycode);
                set_mods(mod_state);

                return false;
            }

            break;
    }

	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
