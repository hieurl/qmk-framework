#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif

extern keymap_config_t keymap_config;

#define TD_SHF TD(T_SHFCAP)
#define TD_SEMI TD(T_SEMCOL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_ESC, KC_1,    KC_2,  KC_3,    KC_4,  KC_5 ,                          KC_6,  KC_7,    KC_8,  KC_9,   KC_0,    KC_MINS,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P, KC_BSLS, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,  KC_SCLN, KC_BSPC,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      ESCLCTL, RGUI_T(KC_Z),KC_X,  KC_C,   KC_V,   KC_B, TG_LOWR,       TG_RAIS, KC_N,  KC_M, KC_COMM,KC_DOT, KC_SLSH, KC_TILD, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS,KC_RALT
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_LOWER] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,                        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_GRV, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,                          KC_HOME,KC_END, KC_LPRN,KC_RPRN,KC_PGUP,KC_PGDN, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT, KC_1,   KC_2,   KC_3,   KC_4,   KC_0,                          KC_LEFT,KC_DOWN, KC_UP, KC_RGHT,KC_PLUS,KC_MINS,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      ESCLCTL,KC_PERC,KC_LBRC,KC_RBRC,KC_MINS,KC_PIPE, TG_LOWR,      TG_RAIS,KC_CIRC, KC_DLR, KC_X,  KC_EQL,KC_ASTR,KC_SLSH, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_SPC, TT_RAIS,KC_RALT
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_RAISE] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_ESC, KC_1,    KC_2,  KC_3,    KC_4,  KC_5 ,                          KC_6,  KC_7,    KC_8,  KC_9,   KC_0,    KC_PIPE,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
       KC_GRV, KC_EXLM,KC_AT,  KC_LCBR,KC_RCBR,KC_QUOT,                       KC_PIPE,KC_ASTR,KC_RBRC, KC_AT, KC_PGUP,KC_PGDN, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT, KC_HASH,KC_DLR, KC_LPRN,KC_RPRN, KC_DQT,                       KC_AMPR,KC_LPRN,KC_RPRN,KC_COLN,KC_EQL, KC_BSPC, 
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      ESCLCTL, KC_PERC,KC_CIRC,KC_LBRC,KC_RBRC,KC_TILD,TG_LOWR,      TG_RAIS,KC_UNDS,  KC_UP, KC_DOWN,KC_DOT, KC_SLSH,KC_ESC, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,KC_RALT
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),
//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//    ESC    1      2     3     4     5                        6     7     8     9     0     - 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//      *     `     <     `     >     !                        @     [     -     ]     -     ⌦ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤
//      ^     \     {     =     }     #                        _     (     "     )           ⌫ 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     %     :     *     +     ~  TG_LOWR        DEL    $     &     ,     ?     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                 SPC RAISE RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
   [_FUNCT] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,                        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                         KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      RGBEMOD,_______,_______,_______,_______,_______,                       KC_LEFT,KC_DOWN, KC_UP, KC_RGHT,_______,_______,    
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      RGBETOG,_______,_______,_______,_______,_______,TG_LOWR,       TG_RAIS,_______,_______,_______,_______,_______, RESET, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,TD_CTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_QWERTY:
      if (record->event.pressed) {
//        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_on(_QWERTY);
      }
      return false;
    
    case ON_LOWER:
      if (record->event.pressed) {
//        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_LOWER);
      }
      return false;
    
    case ON_RAISE:
      if (record->event.pressed) {
//        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_RAISE);
      }
      return false;

    case ON_FUNCT:
      if (record->event.pressed) {
//        layer_off(_CONFIG);
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_FUNCT);
      }
      return false;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  state = update_tri_layer_state(state, _LOWER, _RAISE, _FUNCT);
  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}
