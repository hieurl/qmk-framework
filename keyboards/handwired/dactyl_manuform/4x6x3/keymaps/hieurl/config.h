/*
Copyright 2020 Thanh Nguyen <thanhnguyen12@gmail.com>>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


//#define USE_SERIAL
//#define USE_I2C
//#define SPLIT_HAND_PIN D2
//#define MASTER_RIGHT
//#define USE_I2C
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD

#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_SPLIT
#define RGBLED_NUM 42    // Number of LEDs
#define RGBLED_SPLIT { 21,21 }

#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGBLIGHT_LIMIT_VAL 220
//#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#define DRIVER_LED_TOTAL 36 
//#define RGB_MATRIX_KEYPRESSES

//#define ENCODER_DIRECTION_FLI// #define ENCODER_RESOLUTION 2
#define LEADER_NO_TIMEOUT
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 500
