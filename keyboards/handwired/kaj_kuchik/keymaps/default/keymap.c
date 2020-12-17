#include "kb.h"

#include "combos.h"

#define ____ KC_TRNS

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
                  KC_COMM,
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
		____,
         ____,
          ____,
           ____,
            ____,
                ____,
                 KC_LEFT,
                  KC_DOWN,
                   KC_UP,
                    KC_RIGHT,
		____,
         ____,
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
		____,
         KC__VOLDOWN,
          KC__MUTE,
           KC__VOLUP,
            ____,
                ____,
                 ____,
                  ____,
                   KC_F11,
                    KC_F12,
		____,
         KC_MPRV,
          KC_MPLY,
           KC_MNXT,
               ____,
                ____,
                 ____,
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
