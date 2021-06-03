#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, \
	K20, K21, K22, K23, K24, \
	K40, K41, K42, K43, \
	K10, K11, K12, K13, K14, \
	K30, K31, K32, K33, K34, \
	K50, K51, K52, K53, \
    K60,  K61,  K62,  \
    K70,  K71,  K72  \
) { \
	{ K00,   K02,   K04,   K11,   K13,   K62 }, \
	{ K01,   K03,   K10,   K12,   K14,   K60 }, \
	{ K20,   K22,   K24,   K31,   K33,   K61 }, \
	{ K21,   K23,   K30,   K32,   K34,   K71 }, \
	{ K40,   K42,   KC_NO, K50,   K52,   K70 }, \
	{ K41,   K43,   KC_NO, K51,   K53,   K72 }  \
}

#endif
