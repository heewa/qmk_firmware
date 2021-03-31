#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Leave this first
    LAYER_SELECT,

    // Layer 1
	KEYMAP(
		KC_AUDIO_VOL_DOWN,
         KC_AUDIO_MUTE,
          KC_AUDIO_VOL_UP,
        KC_MEDIA_PREV_TRACK,
         KC_MEDIA_PLAY_PAUSE,
          KC_MEDIA_NEXT_TRACK),

    // Layer 2
	KEYMAP(
		KC_1,
         KC_2,
          KC_3,
        KC_4,
         KC_5,
          KC_6),

    // Layer 3
	KEYMAP(
		KC_Q,
         KC_W,
          KC_E,
        KC_A,
         KC_S,
          KC_D),

    // Layer 4
	KEYMAP(
		KC_R,
         KC_T,
          KC_Y,
        KC_F,
         KC_G,
          KC_H),

    // Layer 5
	KEYMAP(
		KC_U,
         KC_I,
          KC_O,
        KC_J,
         KC_K,
          KC_L),

    // Layer 6
	KEYMAP(
		KC_F1,
         KC_F2,
          KC_F3,
        KC_F4,
         KC_F5,
          KC_F6),

    // Layer 7
	KEYMAP(
		KC_F7,
         KC_F8,
          KC_F9,
        KC_F10,
         KC_F11,
          KC_F12),

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
