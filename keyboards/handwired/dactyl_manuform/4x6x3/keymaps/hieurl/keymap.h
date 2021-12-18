
#pragma once
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _CONFIG 1
#define _LOWER  2
#define _FUNCT 3
#define _RAISE 4

enum custom_keycodes {
  ON_QWERTY = SAFE_RANGE,
 
  ON_LOWER,
  ON_RAISE, ON_FUNCT,

  RGBETOG,
  RGBEMOD,

  GIT_STS,
  GIT_DIF,
  GIT_CM,
  GIT_ADD,
  GIT_PUSH,

  VI_SAVE,
  VI_QUIT,
  VI_PREV,
  VI_HOME,
  VI_END,
  VI_REPL,

  TM_NEW,
  TM_CLOSE,
  TM_NVER,
  TM_NHOR,
  TM_LEFT,
  TM_RIGHT,
  TM_UP,
  TM_DOWN,
  TM_SELECT,
  TM_HOME,
  TM_END
};

#define MO_LOWR MO(_LOWER)
#define MO_RAIS MO(_RAISE)

#define TT_LOWR TT(_LOWER)
#define TT_RAISE TT(_RAISE)
#define TT_FUNCT TT(_FUNCT)

#define TG_LOWR TG(_LOWER)
#define TG_RAIS TG(_RAISE)
#define TG_FUNCT TG(_FUNCT)

#define TD_CTRL TD(T_CTRL)
#define TD_ALT TD(T_ALT)
#define TD_ENT TD(T_ENT)
