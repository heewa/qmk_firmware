#ifndef KB_H
#define KB_H

#include "quantum.h"

// 1-indexed, row & col according to wiring/pins, rR1-3 == rows 4-6

#define LAYOUT( \
	KrL1c1, KrL1c2, KrL1c3, KrL1c4, KrL1c5, \
	KrL2c1, KrL2c2, KrL2c3, KrL2c4, KrL2c5, \
	KrL3c1, KrL3c2, KrL3c3, KrL3c4, \
	KrR1c5, KrR1c4, KrR1c3, KrR1c2, KrR1c1, \
	KrR2c5, KrR2c4, KrR2c3, KrR2c2, KrR2c1, \
	        KrR3c4, KrR3c3, KrR3c2, KrR3c1, \
    KrL1c6,  KrL2c6,  KrL3c6, \
    KrR1c6,  KrR3c6,  KrR2c6 \
) { \
    { KrL1c1, KrL1c2, KrL1c3, KrL1c4, KrL1c5, KrL1c6 }, \
    { KrL2c1, KrL2c2, KrL2c3, KrL2c4, KrL2c5, KrL2c6 }, \
    { KrL3c1, KrL3c2, KrL3c3, KrL3c4, KC_NO,  KrL3c6 }, \
    { KrR1c1, KrR1c2, KrR1c3, KrR1c4, KrR1c5, KrR1c6 }, \
    { KrR2c1, KrR2c2, KrR2c3, KrR2c4, KrR2c5, KrR2c6 }, \
    { KrR3c1, KrR3c2, KrR3c3, KrR3c4, KC_NO,  KrR3c6 } \
}

#endif
