#include "jasonhazel.h"
#include "shared/split_3x5.h"
#include "shared/split_thumb_3.h"

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


#define KM_QWERTY           SHARED_QWERTY, SHARED_QWERTY_THUMB 
#define KM_SYMBOLS          SHARED_SYMBOLS, SHARED_DEFAULT_THUMB
#define KM_NUMBERS          SHARED_NUMBERS, SHARED_DEFAULT_THUMB
#define KM_NAVIGATION       SHARED_NAVIGATION, SHARED_DEFAULT_THUMB  

