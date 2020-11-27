/* Copyright 2018 'Masayuki Sunahara'
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST
};

#define ________ KC_TRNS
#define XXXXXXXX KC_NO
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_ADJ   ADJUST
#define KC_CTLTB CTL_T(KC_TAB)

#define SHFT_BSP RSFT_T(KC_BSPC)
#define SHFT_SPC RSFT_T(KC_SPC)
#define CTL_ESC  LCTL_T(KC_ESC)
#define CTL_ENT  RCTL_T(KC_ENT)
#define ALT_ENT  RALT_T(KC_ENT)

#define ALT_LFT  LALT(KC_LEFT)
#define ALT_DWN  LALT(KC_DOWN)
#define ALT_UP   LALT(KC_UP)
#define ALT_RGT  LALT(KC_RIGHT)

#define CMD_LFT  LGUI(KC_LEFT)
#define CMD_DWN  LGUI(KC_DOWN)
#define CMD_UP   LGUI(KC_UP)
#define CMD_RGT  LGUI(KC_RIGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( \
  //,---------------------------------------------------------------------.  ,---------------------------------------------------------------------.
     KC__VOLUP,   KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,     KC_8,     KC_9,     KC_0,  KC_MINS,   KC_EQL,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      KC__MUTE,   KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  KC_LBRC,  KC_RBRC,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
   KC__VOLDOWN,   KC_TAB,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_ADJ,     KC_H,     KC_J,     KC_K,     KC_L,  KC_SCLN,  KC_QUOT,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
       KC_BSPC,  KC_BSLS,     KC_Z,     KC_X,     KC_C,     KC_V,  KC_BSPC,    SHFT_SPC,     KC_B,     KC_N,     KC_M,  KC_COMM,   KC_DOT,  KC_SLSH,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                    KC_LOWER,  KC_LALT,  KC_RGUI,  CTL_ESC,     ALT_ENT,  KC_RGUI,  KC_RCTL, KC_RAISE \
                                //`---------------------------------------'  `---------------------------------------'
  ),

  [_LOWER] = LAYOUT( \
  //,---------------------------------------------------------------------.  ,---------------------------------------------------------------------.
        KC_GRV, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________,  KC_MINS,   KC_EQL, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________, ________, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________, ________, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________, ________, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                    ________, ________, ________, ________,    ________, ________, ________, ________ \
                                //`---------------------------------------'  `---------------------------------------'
  ),

  [_RAISE] = LAYOUT( \
  //,---------------------------------------------------------------------.  ,---------------------------------------------------------------------.
        KC_GRV, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________, ________, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________, ________,  KC_RBRC, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________,KC_PGDOWN,    KC_UP,  KC_PGUP,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________, ________,    ________, ________, ________, ________,  KC_LEFT,  KC_DOWN, KC_RIGHT,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                    ________, ________, ________, ________,    ________, ________, ________, ________ \
                                //`---------------------------------------'  `---------------------------------------'
  ),

  [_ADJUST] = LAYOUT( \
  //,---------------------------------------------------------------------.  ,---------------------------------------------------------------------.
       KC_MRWD, ________,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,   KC_F11,   KC_F12,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
       KC_MPLY, ________, ________, ________, ________, ________, ________,    ________,  ALT_LFT,  ALT_DWN,   ALT_UP,  ALT_RGT,  KC_RBRC, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
       KC_MFFD, ________, ________, ________, ________, ________, ________,    ________,  KC_LEFT,  KC_DOWN,    KC_UP, KC_RIGHT, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
      ________, ________, ________, ________, ________, ________,   KC_DEL,    ________,  CMD_LFT,  CMD_DWN,   CMD_UP,  CMD_RGT, ________, ________,\
  //|---------+---------+---------+---------+---------+---------+---------|  |---------+---------+---------+---------+---------+---------+---------|
                                    ________, ________, ________, ________,    ________, ________, ________, ________ \
                                //`---------------------------------------'  `---------------------------------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    // set_timelog();
  }

  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
        if (record->event.pressed) {
          layer_on(_ADJUST);
        } else {
          layer_off(_ADJUST);
        }
        return false;
        break;
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
