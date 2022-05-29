#include "jasonhazel.h"
#include "shared/3x5.h"

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


#define KM_QWERTY           SHARED_QWERTY,    \
                            KC_OCTL,  OSL_SYM, KC_OSFT,         KC_SPC,   OSL_NUM,  KC_ENT  

#define KM_SYMBOLS          SHARED_SYMBOLS,    \
                            KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_ENT

#define KM_NUMBERS          SHARED_NUMBERS,    \
                            KC_TRNS,  KC_TRNS, KC_TRNS,         KC_TRNS,   KC_TRNS,  KC_ENT  

#define KM_NAVIGATION       SHARED_NAVIGATION, \
                            KC_TRNS,  KC_TRNS, KC_TRNS,        KC_TRNS,   KC_TRNS,  KC_ENT  

