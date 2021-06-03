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
	{ K00,   K01,   K02,   K03,   K04, \
      K10,   K11,   K12,   K13,   K14, \
      K62,  K72 }, \
	{ K20,   K21,   K22,   K23,   K24, \
      K30,   K31,   K32,   K33,   K34, \
      K60,  K70 }, \
	{ K40,   K41,   K42,   K43,   KC_NO, \
      KC_NO, K50,   K51,   K52,   K53, \
      K61,  K71 }  \
}

#endif
