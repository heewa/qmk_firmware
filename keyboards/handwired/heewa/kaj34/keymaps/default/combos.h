#include "kb.h"

const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM mc_combo[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM hj_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM yu_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM fg_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM sch_combo[] = {KC_COLN, KC_H, COMBO_END};
const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM bn_combo[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM nm_combo[] = {KC_N, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(jk_combo, KC_QUOT),
    COMBO(sd_combo, KC_EQL),
    COMBO(xc_combo, KC_BSLASH),
    COMBO(qw_combo, KC_GRV),
    COMBO(op_combo, KC_SCLN),
    COMBO(nm_combo, KC_SLSH),
    COMBO(df_combo, KC_LPRN),
    COMBO(hj_combo, KC_RPRN),
    COMBO(er_combo, KC_LBRC),
    COMBO(ui_combo, KC_RBRC),
    COMBO(rt_combo, KC_LT),
    COMBO(yu_combo, KC_GT),
    COMBO(fg_combo, KC_LCBR),
    COMBO(sch_combo, KC_RCBR),
    COMBO(cv_combo, KC_MINUS),
    COMBO(bn_combo, LSFT(KC_SCLN)),
};
