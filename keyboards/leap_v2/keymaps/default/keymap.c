#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _NUM,
    _SHIFTED,
    _LED,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
    RGB_MOD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,    KC_EQL,  KC_6,    KC_7,        KC_8,    KC_9,    KC_0,    RGB_TOG, \
    KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,    KC_RBRC, KC_Y,    KC_U,        KC_I,    KC_O,    KC_P,    RGB_HUI, \
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_QUOT,    KC_NUHS, KC_H,    KC_J,        KC_K,    KC_L,    KC_SCLN, RGB_VAI, \
    KC_1,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,     KC_BSPC, KC_N,    KC_M,        KC_COMM, KC_DOT,  KC_SLSH, RGB_SAI, \
    KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, MO(_NUM),KC_SPC,  KC_LCTL,    KC_RSFT, KC_ENT,  MO(_SHIFTED),KC_DOWN, KC_LEFT, KC_UP,   KC_RGHT 
    ),
    /* LOWER */
    [_NUM] = LAYOUT(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,     KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_PSLS, KC_PMNS, KC_7,    KC_8,    KC_9,    KC_PDOT, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_PAST, KC_PPLS, KC_4,    KC_5,    KC_6,    KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_0,    KC_1,    KC_2,    KC_3,    KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XXXXXXX, KC_TRNS, KC_TRNS,    KC_TRNS, KC_PENT, MO(_LED),KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
    ),
    /* RAISE */
    [_SHIFTED] = LAYOUT(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,     KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_EXLM, KC_LCBR, KC_RCBR, KC_CIRC, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_UNDS, KC_LPRN, KC_RPRN, KC_DLR,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TILD, KC_LBRC, KC_RBRC, KC_COLN, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_LED),KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, XXXXXXX, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
    ),
    /* LOWER+RAISE */
    [_LED] = LAYOUT(
    KC_TRNS, RGB_M_P, RGB_M_B, RGB_M_SW,RGB_M_SN,RGB_M_K, KC_TRNS,    KC_TRNS, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XXXXXXX, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, XXXXXXX, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
    ),
};

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4,
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_write_P(qmk_logo, false);
}

void layer_data(void) {
    oled_write_P(PSTR("layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case _SHIFTED:
            oled_write_P(PSTR("Shifted\n"), false);
            break;
        case _LED:
            oled_write_P(PSTR("LED\n"), false);
            break;
        default:
            oled_write_P(PSTR("UNK\n"), false);
    }
}

void led_data(void) {
    oled_write_P(PSTR("L_mode: "), false);
    switch (rgblight_get_mode()) {
        case 0:
            oled_write_P(PSTR("OFF\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Static\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Breath_0\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("Breath_1\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("Breath_2\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("Breath_3\n"), false);
            break;
        case 6:
            oled_write_P(PSTR("Rainbow_M_0\n"), false);
            break;
        case 7:
            oled_write_P(PSTR("Rainbow_M_1\n"), false);
            break;
        case 8:
            oled_write_P(PSTR("Rainbow_M_2\n"), false);
            break;
        case 9:
            oled_write_P(PSTR("Rainbow_S_0\n"), false);
            break;
        case 10:
            oled_write_P(PSTR("Rainbow_S_1\n"), false);
            break;
        case 11:
            oled_write_P(PSTR("Rainbow_S_2\n"), false);
            break;
        case 12:
            oled_write_P(PSTR("Rainbow_S_3\n"), false);
            break;
        case 13:
            oled_write_P(PSTR("Rainbow_S_4\n"), false);
            break;
        case 14:
            oled_write_P(PSTR("Rainbow_S_5\n"), false);
            break;
        case 15:
            oled_write_P(PSTR("Snake_0\n"), false);
            break;
        case 16:
            oled_write_P(PSTR("Snake_1\n"), false);
            break;
        case 17:
            oled_write_P(PSTR("Snake_2\n"), false);
            break;
        case 18:
            oled_write_P(PSTR("Snake_3\n"), false);
            break;
        case 19:
            oled_write_P(PSTR("Snake_4\n"), false);
            break;
        case 20:
            oled_write_P(PSTR("Snake_5\n"), false);
            break;
        case 21:
            oled_write_P(PSTR("Knight_0\n"), false);
            break;
        case 22:
            oled_write_P(PSTR("Knight_1\n"), false);
            break;
        case 23:
            oled_write_P(PSTR("Knight_2\n"), false);
            break;
        case 24:
            oled_write_P(PSTR("XMAS\n"), false);
            break;  
        case 25:
            oled_write_P(PSTR("Gradient_0\n"), false);
            break; 
	case 26:
            oled_write_P(PSTR("Gradient_1\n"), false);
            break; 
	case 27:
            oled_write_P(PSTR("Gradient_2\n"), false);
            break; 
	case 28:
            oled_write_P(PSTR("Gradient_3\n"), false);
            break; 
	case 29:
            oled_write_P(PSTR("Gradient_4\n"), false);
            break; 
	case 30:
            oled_write_P(PSTR("Gradient_5\n"), false);
            break; 
	case 31:
            oled_write_P(PSTR("Gradient_6\n"), false);
            break; 
	case 32:
            oled_write_P(PSTR("Gradient_7\n"), false);
            break; 
	case 33:
            oled_write_P(PSTR("Gradient_8\n"), false);
            break; 
	case 34:
            oled_write_P(PSTR("Gradient_9\n"), false);
            break; 
	case 35:
            oled_write_P(PSTR("Test\n"), false);
            break; 
	case 36:
            oled_write_P(PSTR("Alternating\n"), false);
            break; 
        default:
            oled_write_P(PSTR("UNK\n"), false);
    }

} 

void coler_data(void) {
    char string[4];
    oled_write_P(PSTR("H:"), false);
    uint16_t h = rgblight_get_hue() / RGBLIGHT_HUE_STEP;
    string[3]  = '\0';
    string[2]  = '0' + h % 10;
    string[1]  = (h /= 10) % 10 ? '0' + (h) % 10 : (h / 10) % 10 ? '0' : ' ';
    string[0]  = h / 10 ? '0' + h / 10 : ' ';
    oled_write(string, false);
    oled_write_P(PSTR("/S:"), false);
    uint16_t s = rgblight_get_sat() / RGBLIGHT_SAT_STEP;
    string[3]  = '\0';
    string[2]  = '0' + s % 10;
    string[1]  = (s /= 10) % 10 ? '0' + (s) % 10 : (s / 10) % 10 ? '0' : ' ';
    string[0]  = s / 10 ? '0' + s / 10 : ' ';
    oled_write(string, false);
    oled_write_P(PSTR("/V:"), false);
    uint16_t v = rgblight_get_val() / RGBLIGHT_VAL_STEP;
    string[3]  = '\0';
    string[2]  = '0' + v % 10;
    string[1]  = (v /= 10) % 10 ? '0' + (v) % 10 : (v / 10) % 10 ? '0' : ' ';
    string[0]  = v / 10 ? '0' + v / 10 : ' ';
    oled_write(string, false);
    oled_write_P(PSTR("\n"), false);
}


#ifdef OLED_ENABLE
    oled_rotation_t oled_init_user(oled_rotation_t rotation) {
        return OLED_ROTATION_180;
    }
    void keybord_state(void) {
        layer_data();
        led_data();
        coler_data();
    }

    bool oled_task_user(void) {
        if (is_keyboard_master()) {
            keybord_state();
        } else {
            render_logo();
        }
        return false;
    }
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_WH_U);
        } else {
            tap_code(KC_WH_D);
        }
    }
    return false;
}

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
