#pragma once

enum layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes { QWERTY = SAFE_RANGE, LOWER, RAISE, ADJUST, RGBRST };

#define SFT_EQ MT(MOD_LSFT, KC_EQL)
#define SFT_QT MT(MOD_RSFT, KC_QUOT)

#define SFT_A MT(MOD_LSFT, KC_A)
//#define CTL_Z MT(MOD_LCTL, KC_Z)
#define CMD_Z MT(MOD_LGUI, KC_Z)

#define SFT_SCLN MT(MOD_RSFT, KC_SCLN)
#define CTL_SLSH MT(MOD_RCTL, KC_SLSH)

#define LOW_DEL LT(_LOWER, KC_DEL)
#define ADJ_GRV LT(_ADJUST, KC_GRV)
#define KC_ANGL LSFT(KC_COMM)
#define KC_ANGR LSFT(KC_DOT)

#define RAI_SPC LT(_RAISE, KC_SPC)
#define LOW_ENT LT(_LOWER, KC_ENT)
#define LOW_LPRN LT(_LOWER, KC_9)
#define RAI_BSPC LT(_RAISE, KC_BSPC)
#define SFT_PMNS MT(MOD_RSFT, KC_PMNS)
#define SFT_TAB MT(MOD_LSFT, KC_TAB)
#define ADJ_EQ LT(_ADJUST, KC_EQL)
