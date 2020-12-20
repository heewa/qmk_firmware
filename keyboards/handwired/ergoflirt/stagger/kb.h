#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K010, K011, \
	K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K110, K111, \
	K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K210, \
	K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K310, \
	K40, \
	K50, K51, K52, K53, K54, K55, \
	K60, K61, K62, K63 \
) { \
	{ K00,   K02,   K04,   K06,   K08,   K010,    K50,   K60 }, \
	{ K01,   K03,   K05,   K07,   K09,   K011,    K51,   K61 }, \
	{ K10,   K12,   K14,   K16,   K18,   K110,    K52,   K62 }, \
	{ K11,   K13,   K15,   K17,   K19,   K111,    K53,   K63 }, \
	{ K20,   K22,   K24,   K26,   K28,   K210,    K54,   KC_NO }, \
	{ K21,   K23,   K25,   K27,   K29,   K40,   K55,   KC_NO }, \
	{ K32,   K34,   K36,   K38,   K310,  K30,    KC_NO, KC_NO }, \
	{ K31,   K33,   K35,   K37,   K39,   KC_NO,   KC_NO, KC_NO }  \
}

#endif
