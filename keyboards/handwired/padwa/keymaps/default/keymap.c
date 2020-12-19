#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Leave this first
    LAYER_SELECT,

    // Layer 1
	KEYMAP(
		KC_Q,
         KC_W,
          KC_E,
        KC_R,
         KC_T,
          KC_Y),

    // Layer 2
	KEYMAP(
		KC_A,
         KC_S,
          KC_D,
        KC_F,
         KC_G,
          KC_H),

    // Layer 3
	KEYMAP(
		KC_Z,
         KC_X,
          KC_C,
        KC_V,
         KC_B,
          KC_N),

    // Layer 4
	KEYMAP(
		KC_Z,
         KC_X,
          KC_C,
        KC_V,
         KC_B,
          KC_N),

    // Layer 5
	KEYMAP(
		KC_Z,
         KC_X,
          KC_C,
        KC_V,
         KC_B,
          KC_N),

    // Layer 6
	KEYMAP(
		KC_Z,
         KC_X,
          KC_C,
        KC_V,
         KC_B,
          KC_N),

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
