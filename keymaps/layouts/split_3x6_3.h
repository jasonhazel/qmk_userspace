#include "jasonhazel.h"

/* Qwerty
 *
 * ,----------------------------------.           ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|           |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  |
 * `----------------------------------'           `----------------------------------'
 *                  ,---------------------.    ,---------------------.
 *                  | CTRL | SYMB | SHFT  |    | Space | NUM | ENTER |
 *                  `---------------------'    `---------------------.
 */


#define KM_QWERTY           KC_TRNS,KC_QESC,  KC_W,     KC_E,     KC_R,    KC_T,            KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,    KC_TRNS,   \
                            KC_TRNS,KC_A,     KC_S,     KC_D,     KC_F,    KC_G,            KC_H,     KC_J,     KC_K,     KC_L,     KC_QUOT, KC_TRNS,   \
                            KC_TRNS,KC_Z,     KC_GUIX,  KC_ALTC,  KC_V,    KC_B,            KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH, KC_TRNS,   \
                                                KC_OCTL,  OSL_SYM, KC_OSFT,         KC_SPC,   OSL_NUM,  KC_ENT  

#define KM_SYMBOLS          KC_TRNS,KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,        KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_NO,    KC_NO,   KC_TRNS,   \
                            KC_TRNS,KC_GRV,   KC_NO,    KC_NO,    KC_UNDS,  KC_MINS,        KC_EQL,   KC_SBKT,  KC_CBKT,  KC_PARN,  KC_BSLASH,KC_TRNS,  \
                            KC_TRNS,KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,          KC_PLUS,  KC_NO,    KC_COLN,  KC_DOT,   KC_SCLN,  KC_TRNS,  \
                                                KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_ENT
// -------------------------------------------------------------------------------------------------------------------------------------
#define KM_SYMBOLS_2        KC_TRNS,KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,        KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_NO,    KC_NO,    KC_TRNS,  \
                            KC_TRNS,KC_GRV,   KC_NO,    KC_NO,    KC_UNDS,  KC_MINS,        KC_EQL,   KC_SBKT,  KC_CBKT,  KC_PARN,  KC_BSLASH,KC_TRNS,  \
                            KC_TRNS,KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,          KC_PLUS,  KC_NO,    KC_COLN,  KC_DOT,   KC_SCLN,   KC_TRNS, \
                                                KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_ENT
// -------------------------------------------------------------------------------------------------------------------------------------
#define KM_NUMBERS          KC_TRNS,KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,          KC_F6,     KC_F7,    KC_F8,    KC_F9,    KC_F10, KC_TRNS,  \
                            KC_TRNS,KC_1,     KC_2,     KC_3,     KC_4,     KC_5,           KC_6,      KC_7,     KC_8,     KC_9,     KC_0,   KC_TRNS,   \
                            KC_TRNS,KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_F11,         KC_F12,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_TRNS,  \
                                                KC_TRNS,  KC_TRNS, KC_TRNS,         KC_TRNS,   KC_TRNS,  KC_ENT  

#define KM_NAVIGATION      KC_TRNS, KC_ESC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,     KC_HOME,  KC_UP,    KC_END,   KC_BSPC, KC_TRNS,   \
                           KC_TRNS, KC_TAB,   KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,     KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_ENT,   KC_TRNS,  \
                            KC_TRNS,KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,     KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_DEL,   KC_TRNS,  \
                                                KC_TRNS,  KC_TRNS, KC_TRNS,        KC_TRNS,   KC_TRNS,  KC_ENT  

