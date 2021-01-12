#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define COMBO_TERM 20

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6061
#define DEVICE_VER      0x0001
#define MANUFACTURER    HeewaBarfchin
#define PRODUCT         Joywa
#define DESCRIPTION     keyboard

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 1

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B4 }
#define MATRIX_COL_PINS { B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
