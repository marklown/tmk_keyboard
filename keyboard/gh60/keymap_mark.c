#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /* Keymap 0: Default Layer - 62 keys ortholinear
    * ,-------------------------------------------------------.
    * |Grv| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = |Bsp|
    * |-------------------------------------------------------|
    * |Tab| Q | W | E | R | T | Y | U | I | O | P | [ | ] | \ |
    * |-------------------------------------------------------|
    * |Fn0| A | S | D | F | G | H | J | K | L | ; | ' | Enter |
    * |-------------------------------------------------------|
    * |Sft| Z | X | C | V | B | N | M | , | . | / |Shift  |pau|
    * |-------------------------------------------------------|
    * |Ctrl| Win| Alt|         Space          |Alt|Fn0|Fn1|Fn2|
    * `-------------------------------------------------------'
    */
    KEYMAP_MARK(
        GRV,     1,    2,   3,   4,   5,   6,   7,    8,   9,    0,   MINS,  EQL,   BSPC, \
        TAB,     Q,    W,   E,   R,   T,   Y,   U,    I,   O,    P,   LBRC, RBRC,   BSLS, \
        FN0,     A,    S,   D,   F,   G,   H,   J,    K,   L, SCLN,   QUOT,          ENT, \
        LSFT,    Z,    X,   C,   V,   B,   N,   M, COMM, DOT, SLSH,   RSFT      ,  PAUSE, \
        LCTL, LGUI, LALT,                SPC,                 RALT,   FN0,   FN1,   FN2),

   /* Keymap 1: Fn0 Layer
    * ,-------------------------------------------------------.
    * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del|
    * |-------------------------------------------------------|
    * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
    * |-------------------------------------------------------|
    * |Fn0|   |   |   |   |   |LFT|DWN|UP |RHT|   |   | Enter |
    * |-------------------------------------------------------|
    * |Sft|   |   |   |   |   |   |   |   |   |   |Shift  |   |
    * |-------------------------------------------------------|
    * |Ctrl| Win| Alt|         Space          |   |   |   |   |
    * `-------------------------------------------------------'
    */
    KEYMAP_MARK(
        ESC, 	F1,  	F2,  	F3,  	F4,  	F5,   	F6,   	F7,   	F8,   	F9,  F10,	F11,  F12, BSPC, \
        TRNS, TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,	TRNS,  TRNS, TRNS, TRNS, \
        TRNS, TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   LEFT,   DOWN,     UP,  RIGHT, TRNS,  TRNS,        ENT, \
        LSFT, TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS, TRNS,  RSFT, 	   TRNS, \
        LCTL, LGUI,   LALT,                            SPC,                   TRNS, TRNS,  TRNS,       TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  				// to Fn0 overlay
	[1] = ACTION_LAYER_TAP_KEY(1, KC_CAPSLOCK),		// capslock by hold fn0 then tap fn0
};
