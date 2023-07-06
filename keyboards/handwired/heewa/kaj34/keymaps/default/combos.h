#pragma once

#include "kb.h"

const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM yu_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM doth_combo[] = {KC_DOT, KC_H, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM bn_combo[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM kp_23_combo[] = {KC_2, KC_3, COMBO_END};
const uint16_t PROGMEM kp_45_combo[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM kp_56_combo[] = {KC_5, KC_6, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    // Left Row 1
    COMBO(qw_combo, KC_GRV),
    COMBO(er_combo, KC_LBRC),
    COMBO(rt_combo, KC_LT),

    // Right Row 1
    COMBO(yu_combo, KC_GT),
    COMBO(ui_combo, KC_RBRC),
    COMBO(io_combo, KC_BACKSLASH),
    COMBO(op_combo, LSFT(KC_BACKSLASH)),

    // Left Row 2
    COMBO(as_combo, LSFT(KC_GRV)),
    COMBO(sd_combo, KC_EQL),
    COMBO(df_combo, KC_LPRN),
    COMBO(fg_combo, KC_LCBR),
    COMBO(kp_56_combo, KC_LPRN),

    // Right Row 2
    COMBO(doth_combo, KC_RCBR),
    COMBO(hj_combo, KC_RPRN),
    COMBO(jk_combo, KC_QUOT),
    COMBO(kl_combo, KC_SCLN),
    COMBO(kp_45_combo, KC_RPRN),

    // Left Row 3
    COMBO(cv_combo, KC_MINUS),

    // Right Row 3
    COMBO(bn_combo, LSFT(KC_SCLN)),
    COMBO(nm_combo, KC_SLSH),
    COMBO(kp_23_combo, KC_SLSH),
};
