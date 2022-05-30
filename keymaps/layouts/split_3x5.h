#pragma once
#include "jasonhazel.h"

/*
 *
 *                                  ,----------------------------------.           ,----------------------------------.
 *                                  |   Q  |   W  |   E  |   R  |   T  |           |   Y  |   U  |   I  |   O  |   P  |
 *                                  |------+------+------+------+------|           |------+------+------+------+------|
 *                                  |   A  |   S  |   D  |   F  |   G  |           |   H  |   J  |   K  |   L  |   ;  |
 *                                  |------+------+------+------+------|           |------+------+------+------+------|
 *                                  |   Z  |   X  |   C  |   V  |   B  |           |   N  |   M  |   ,  |   .  |   /  |
 *                                  `----------------------------------'           `----------------------------------'
 */

#define SHARED_QWERTY       KC_QESC,	KC_W,		KC_E,     	KC_R,    	KC_T,            KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,       \
                            KC_A,		KC_S,		KC_D,		KC_F,		KC_G,            KC_H,		KC_J,		KC_K,		KC_L,		KC_QUOT,    \
                            KC_Z,		KC_GUIX,	KC_ALTC,	KC_V,		KC_B,            KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH


#define SHARED_SYMBOLS      KC_EXLM,  KC_AT,    KC_HASH,  	KC_DLR,   	KC_PERC,        KC_CIRC,  	KC_AMPR,  	KC_ASTR,	KC_NO,    	KC_PIPE,    \
                            KC_GRV,   KC_NO,    KC_EQL,  	KC_UNDS,  	KC_NO,        	KC_SBKT,  	KC_CBKT,  	KC_PARN,  	KC_LTGT, 	KC_BSLASH,  \
                            KC_NO,    KC_NO,    KC_PLUS, 	KC_MINS,   	KC_NO,          KC_NO,  	KC_NO,		KC_COLN,  	KC_DOT,   	KC_SCLN


#define SHARED_NUMBERS      KC_NO,    KC_NO,    KC_NO,    KC_NO,	KC_NO,    		KC_NO,    	KC_NO,    	KC_NO,      KC_NO, 		KC_NO, 		\
                            KC_1,     KC_2,     KC_3,     KC_4,     KC_5,           KC_6,      	KC_7,     	KC_8,     	KC_9,     	KC_0,      	\
                            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO

#define SHARED_NAVIGATION   KC_NO,   	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,         KC_NO,     	KC_HOME,  KC_UP,    KC_END,   KC_BSPC,    \
                            KC_TAB,   	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,         KC_NO,		KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_ENT,     \
                            KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,    	KC_NO,         KC_NO,		KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_DEL

