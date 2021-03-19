#ifndef KB_H
#define KB_H

#include "quantum.h"

static const int J1_X_PIN = 2;
static const int J1_Y_PIN = 3;

#define KEYMAP( \
	K1, K2, K3 \
) { \
	{ K1 }, \
    { K2 }, \
    { K3 } \
}

#endif
