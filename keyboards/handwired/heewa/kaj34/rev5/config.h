#pragma once

#define DEVICE_VER      0x0005

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { F6, F7, B1, D4, C6, D7 }
#define MATRIX_COL_PINS { B3, B2, F5, B6, F4, E6, B4, D0, B5, D1 }
#define UNUSED_PINS { }

#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 3
