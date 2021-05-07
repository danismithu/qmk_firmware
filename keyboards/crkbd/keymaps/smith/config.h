#pragma once

#define EE_HANDS
//#define MASTER_LEFT
#define SPLIT_USB_DETECT

#undef USE_I2C
#undef SSD1306OLED

#define USE_SERIAL_PD2

#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_TERM 250

#define NO_ACTION_ONESHOT

#define OLED_FONT_H "keyboards/crkbd/keymaps/smith/glcdfont.c"

#define RGBLIGHT_SLEEP

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLED_NUM 6
#    define RGBLIGHT_LIMIT_VAL 100
#    define RGBLIGHT_HUE_STEP 16
#    define RGBLIGHT_SAT_STEP 32
#    define RGBLIGHT_VAL_STEP 32

#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_KNIGHT
#endif

