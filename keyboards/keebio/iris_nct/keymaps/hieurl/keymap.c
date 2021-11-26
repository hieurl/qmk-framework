#include QMK_KEYBOARD_H

#ifdef RGBLIGHT_ENABLE
#  include "rgb_underglow.h"
#endif

#ifdef TAP_DANCE_ENABLE
#  include "tap_dances.h"
#endif
#define MOUSEKEY_INTERVAL 20
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_WHEEL_DELAY 0

extern keymap_config_t keymap_config;

// #define LOW_SLS LT(_LOWER, KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_GRV, KC_1,    KC_2,  KC_3,    KC_4,  KC_5 ,                          KC_6,  KC_7,    KC_8,  KC_9,   KC_0,    KC_MINS,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,  KC_SCLN,KC_BSLS,
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      KC_LCTL,  KC_Z,    KC_X,  KC_C,   KC_V,   KC_B,  KC_LGUI,       KC_DEL, KC_N,  KC_M, KC_COMM,KC_DOT, KC_SLSH, KC_QUOT, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_ESC ,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS,KC_RALT
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_LOWER] = LAYOUT(
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,                        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_GRV, KC_5,   KC_6,   KC_7,   KC_8,   KC_9,                          TM_HOME,TM_END, KC_HOME,KC_END, KC_PGUP,KC_PGDN, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT, KC_1,   KC_2,   KC_3,   KC_4,   KC_0,                          KC_LEFT,KC_DOWN, KC_UP, KC_RIGHT,KC_PLUS,KC_MINS,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      KC_LCTL,KC_PERC,KC_PSCR,TM_SELECT,TM_NVER,TM_NHOR, KC_LGUI,      KC_DEL,TM_LEFT, TM_RIGHT,KC_EXLM,KC_EQL,KC_QUES,KC_DQT, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_ESC,TT_LOWR, KC_SPC,               KC_SPC, KC_LGUI,KC_RALT
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_RAISE] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_ESC,   KC_1,    KC_2,  KC_3,    KC_4,  KC_5 ,                          KC_6,  KC_7,    KC_8,  KC_9,   KC_0,    KC_PIPE,
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
       KC_GRV, VI_QUIT,VI_SAVE,KC_LCBR,KC_RCBR,KC_QUOT,                       KC_CIRC,KC_DLR ,KC_LBRC,KC_RBRC,KC_PGUP,KC_PGDN, 
   //├────────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LSFT, GIT_ADD,GIT_STS, KC_LPRN,KC_RPRN, KC_DQT,                     GIT_PUSH,KC_LPRN,KC_RPRN,KC_COLN,KC_EQL, KC_BSPC, 
   //├────────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      KC_LCTL, GIT_CM ,GIT_DIF,KC_LBRC,KC_RBRC,VI_PREV,KC_LGUI,        KC_DEL,KC_LEFT,KC_RIGHT,VI_HOME,VI_END, KC_SLSH,RESET, 
   //└────────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                   KC_ESC,KC_LGUI, KC_SPC,               KC_ENT, TT_RAIS ,KC_RALT
    //                            └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

  [_FUNCT] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,                        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,                         KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      RGBEMOD,RGB_MOD,_______,RGB_VAD, RGB_VAI,_______,                       KC_LEFT,KC_DOWN, KC_UP, KC_RGHT,_______,_______,    
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      RGBETOG, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI,_______,TG_LOWR,       TG_RAIS,_______,_______,_______,_______,_______, RESET, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,KC_RCTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),

//   ┌─────┬─────┬─────┬─────┬─────┬─────┐                  ┌─────┬─────┬─────┬─────┬─────┬─────┐
//   TAB     Q     W     E     R     T                        Y     U     I     O     P       
//   ├─────┼─────┼─────┼─────┼─────┼─────┤                  ├─────┼─────┼─────┼─────┼─────┼─────┤ 
//    ⎋ ^     A     S     D     F     G                        H     J     K     L   SCLN   QUOT 
//   ├─────┼─────┼─────┼─────┼─────┼─────┼─────┐      ┌─────┼─────┼─────┼─────┼─────┼─────┼─────┤
//      ⇧     Z     X     C     V     B    LOW          RAIS   N     M     ,     .     /     ⇧ 
//   └─────┴─────┴─────┴──┬──┴──┬──┴──┬──┴──┬──┘      └──┬──┴──┬──┴──┬──┴──┬──┴─────┴─────┴─────┘
//                         LGUI  LOWER  ENT                SPC  RAISE  RALT
//                        └─────┴─────┴─────┘            └─────┴─────┴─────┘ 
  [_CONFIG] = LAYOUT(
   //┌────────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6 ,                        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,
   //┌───────┬───────┬───────┬───────┬───────┬───────┐                      ┌───────┬───────┬───────┬───────┬───────┬───────┐
      KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                          KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSLS, 
   //├───────┼───────┼───────┼───────┼───────┼───────┤                      ├───────┼───────┼───────┼───────┼───────┼───────┤
      KC_LCTL, KC_A,  KC_S,   KC_D,   KC_F,   KC_G,                          KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_BSPC,
   //├───────┼───────┼───────┼───────┼───────┼───────┼───────┐      ┌───────┼───────┼───────┼───────┼───────┼───────┼───────┤ 
      KC_LCTL, KC_Z,   KC_X,    KC_C,   KC_V,   KC_B, TG_LOWR,       TG_RAIS, KC_N,  KC_M,   KC_COMM,KC_DOT, KC_SLSH, RESET, 
   //└───────┴───────┴───────┴───┬───┴───┬───┴───┬───┴───┬───┘      └───┬───┴───┬───┴───┬───┴───┬───┼───────┼───────┼───────┤
                                  KC_LGUI,TT_LOWR, KC_SPC,               KC_ENT, TT_RAIS ,KC_RCTRL
    //                           └───────┴───────┴───────┘              └───────┴───────┴───────┘ 
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ON_QWERTY:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_RAISE);
        layer_on(_QWERTY);
      }
      return false;
    
    case ON_LOWER:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_RAISE);
        layer_off(_QWERTY);
        layer_on(_LOWER);
      }
      return false;
    
    case ON_RAISE:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_FUNCT);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_RAISE);
      }
      return false;

    case ON_FUNCT:
      if (record->event.pressed) {
        layer_off(_CONFIG);
        layer_off(_RAISE);
        layer_off(_LOWER);
        layer_off(_QWERTY);
        layer_on(_FUNCT);
      }
      return false;
      
    case VI_SAVE:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)":w"SS_TAP(X_ENT));
      }
      break;
    case VI_QUIT:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)":q"SS_TAP(X_ENT));
      }
      break;
    case VI_PREV:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)":b#"SS_TAP(X_ENT));
      }
      break;
    case VI_HOME:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)"^i");
      }
      break;
    case VI_END:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)"$i"SS_TAP(X_RIGHT));
      }
      break;

    case TM_NVER:
      if (record->event.pressed) {
          SEND_STRING("`|");
      }
      break;
    case TM_NHOR:
      if (record->event.pressed) {
          SEND_STRING("`-");
      }
      break;
    case TM_SELECT:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)"`[k");
      }
      break;
    case TM_LEFT:
      if (record->event.pressed) {
          SEND_STRING("`"SS_TAP(X_LEFT));
      }
      break;
    case TM_RIGHT:
      if (record->event.pressed) {
          SEND_STRING("`"SS_TAP(X_RIGHT));
      }
      break;
    case TM_HOME:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)"^i");
      }
      break;
    case TM_END:
      if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_ESC)"$i"SS_TAP(X_RIGHT));
      }
      break;

    case GIT_STS:
      if (record->event.pressed) {
          SEND_STRING("git status ."SS_TAP(X_ENT));
      }
      break;
    case GIT_DIF:
      if (record->event.pressed) {
          SEND_STRING("git diff HEAD ."SS_TAP(X_ENT));
      }
      break;
    case GIT_CM:
      if (record->event.pressed) {
          SEND_STRING("git commit"SS_TAP(X_ENT)"i");
      }
      break;
    case GIT_ADD:
      if (record->event.pressed) {
          SEND_STRING("git add ."SS_TAP(X_ENT));
      }
      break;
    case GIT_PUSH:
      if (record->event.pressed) {
          SEND_STRING("git push origin ");
      }
      break;
  }

  #ifdef RGBLIGHT_ENABLE
    if (!process_rgb_keycodes(keycode, record)) {
        return false;
    }
  #endif

  return true;
}


void encoder_update_user(uint8_t index, bool clockwise) {
   if (layer_state_is(_CONFIG)){
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_MS_D);
            } else {
                tap_code(KC_MS_U);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_MS_R);
            } else {
                tap_code(KC_MS_L);
            }
        }
   }else{
      if (index == 0) {
          if (clockwise) {
              tap_code(KC_VOLD);
          } else {
              tap_code(KC_VOLU);
          }
        } else if (index == 1) {
          if (clockwise) {
              tap_code(KC_PGDN);
          } else {
              tap_code(KC_PGUP);
          }
      }
   }
}


layer_state_t layer_state_set_user(layer_state_t state) {

  #ifdef RGBLIGHT_ENABLE
    handle_layer_changes(state);
  #endif

  return state;
}
