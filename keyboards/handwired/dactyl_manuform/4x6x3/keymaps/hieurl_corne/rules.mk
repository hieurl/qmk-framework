EXTRAFLAGS        += -flto

MOUSEKEY_ENABLE = yes

RGBLIGHT_ENABLE = yes
SRC += rgb_underglow.c

#RGB_MATRIX_ENABLE = yes
#RGB_MATRIX_DRIVER = WS2812

TAP_DANCE_ENABLE = yes
SRC += tap_dances.c

LEADER_ENABLE = yes
