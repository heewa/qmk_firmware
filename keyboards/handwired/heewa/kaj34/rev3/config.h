#pragma once

#define DEVICE_VER      0x0003

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, B4, B5, B3, B2, B6 }
#define MATRIX_COL_PINS { F6, D4, F7, C6, B1, D7 }
#define UNUSED_PINS { D3, D2, D1, D0, F4, F5 }

#define MOUSEKEY_DELAY 300
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 3
