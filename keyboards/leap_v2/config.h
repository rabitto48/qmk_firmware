// Copyright 2022 rabitto48 (@rabitto48)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/*
 * Keyboard Matrix Assignments
 */
#define MATRIX_ROW_PINS { GP10, GP11, GP12, GP13, GP14 }
#define MATRIX_COL_PINS { GP21, GP20, GP19, GP18, GP17, GP16, GP15 }

/*
 * Split Keyboard specific options
 */
#define SOFT_SERIAL_PIN GP1
#define USB_VBUS_PIN GP24

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP4
#define I2C1_SCL_PIN GP5

#define OLED_DISPLAY_128X64

#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }
#define ENCODERS_PAD_A_RIGHT { GP6 }
#define ENCODERS_PAD_B_RIGHT { GP7 }
#define ENCODER_RESOLUTION 1

#define RGB_DI_PIN GP22
#ifdef RGB_DI_PIN
#    define RGBLED_NUM 70
#    define RGBLED_SPLIT {35, 35}
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 10
#    define RGBLIGHT_LIMIT_VAL 170 /* The maximum brightness level */
#    define RGBLIGHT_EFFECT_BREATHE_MAX 255   // 0 to 255
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 1000
#    define RGBLIGHT_EFFECT_CHRISTMAS_STEP 4
#    define RGBLIGHT_EFFECT_TWINKLE_PROBABILITY 127/127
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define LAYER_STATE_8BITcd
#define NO_MUSIC_MODE