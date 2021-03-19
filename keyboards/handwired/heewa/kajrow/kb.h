#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K00, K01, K02, K03, K04, \
	K10, K11, K12, K13, K14, \
	K20, K21, K22, K23, K24, \
	K300, K30, K31, K32, K33, K34, \
	K40, K41, K42, \
	K50, K51, K52, \
	K05, K06, K07, K08, K09, K010, K011, K012, \
	K15, K16, K17, K18, K19, K110, K111, \
	K25, K26, K27, K28, K29, K210, K211, \
	K35, K36, K37, K38, K39, K310, K311, K312 \
) { \
	{   K00,   K01,   K02,   K03,   K04, KC_NO,   K41,   K50 }, \
	{   K10,   K11,   K12,   K13,   K14, KC_NO,   K42,   K51 }, \
	{   K20,   K21,   K22,   K23,   K24, KC_NO,   K40,   K52 }, \
	{   K30,   K31,   K32,   K33,   K34, KC_NO,  K300, KC_NO }, \
	{   K09,   K08,   K07,   K06,   K05,   K010,   K011,   K012 }, \
	{   K19,   K18,   K17,   K16,   K15,   K110,   K111, KC_NO }, \
	{   K29,   K28,   K27,   K26,   K25,   K210,   K211, KC_NO }, \
	{   K39,   K38,   K37,   K36,   K35,   K310,   K311,   K312 } \
}

#endif
