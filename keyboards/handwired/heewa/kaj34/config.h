#pragma once

#include "config_common.h"

#define COMBO_TERM 20
#define COMBO_COUNT 21

#define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
// #define TAPPING_FORCE_HOLD_PER_KEY
// #define TAPPING_PERMISSIVE_HOLD_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 60

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
