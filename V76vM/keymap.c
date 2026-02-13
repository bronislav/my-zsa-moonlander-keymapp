#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_F22,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           CW_TOGG,                                        CW_TOGG,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),MT(MOD_LGUI, KC_O),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SPACE,                                                                                                       KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(3),          MO(2),          KC_TRANSPARENT,                 MO(4),          MO(2),          LT(3, KC_TAB)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RU_SHTI,        RU_TSE,         RU_U,           RU_KA,          TD(DANCE_0),    KC_TRANSPARENT,                                 KC_TRANSPARENT, RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          RU_HA,          
    KC_TRANSPARENT, MT(MOD_LGUI, RU_EF),MT(MOD_LALT, RU_YERU),MT(MOD_LCTL, RU_VE),MT(MOD_LSFT, RU_A),RU_PE,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RU_ER,          MT(MOD_RSFT, RU_O),MT(MOD_RCTL, RU_EL),MT(MOD_RALT, RU_DE),MT(MOD_LGUI, RU_ZHE),RU_E,           
    KC_TRANSPARENT, RU_YA,          RU_CHE,         RU_ES,          RU_EM,          RU_I,                                           RU_TE,          TD(DANCE_1),    RU_BE,          RU_YU,          RU_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, 
    KC_TAB,         KC_NO,          KC_7,           KC_8,           KC_9,           KC_F1,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_F12,         
    KC_NO,          KC_DOT,         KC_4,           KC_5,           KC_6,           KC_F2,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_F3,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_QUOTE,       KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_TRANSPARENT, 
    KC_NO,          KC_TILD,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_UNDS,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DQUO,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_NO,                                          KC_BSLS,        KC_PIPE,        KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        KC_SYSTEM_SLEEP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAC_LOCK,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_W, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_DELETE),
    COMBO(combo1, KC_BSPC),
    COMBO(combo2, KC_ESCAPE),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_A):
            return g_tapping_term + 100;
        case MT(MOD_LALT, KC_R):
            return g_tapping_term + 100;
        case MT(MOD_LCTL, KC_S):
            return g_tapping_term + 100;
        case MT(MOD_RCTL, KC_E):
            return g_tapping_term + 100;
        case MT(MOD_LALT, KC_I):
            return g_tapping_term + 100;
        case MT(MOD_LGUI, KC_O):
            return g_tapping_term + 100;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {152,255,255}, {0,0,0}, {166,218,166}, {73,255,85}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {23,255,255}, {152,255,255}, {0,0,0}, {166,218,166}, {73,255,85}, {0,0,0}, {188,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {0,0,0}, {166,218,166}, {73,255,85}, {0,0,0}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {188,255,255}, {23,255,255}, {0,0,0}, {166,218,166}, {73,255,85}, {0,0,0}, {23,255,255} },

    [2] = { {0,0,0}, {245,218,204}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {64,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {64,255,255}, {64,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {64,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {147,255,255}, {0,0,0}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {147,255,255}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}



typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RU_IE);
        tap_code16(RU_IE);
        tap_code16(RU_IE);
    }
    if(state->count > 3) {
        tap_code16(RU_IE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(RU_IE); break;
        case DOUBLE_TAP: register_code16(RU_YO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RU_IE); register_code16(RU_IE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(RU_IE); break;
        case DOUBLE_TAP: unregister_code16(RU_YO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RU_IE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(RU_SOFT);
        tap_code16(RU_SOFT);
        tap_code16(RU_SOFT);
    }
    if(state->count > 3) {
        tap_code16(RU_SOFT);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(RU_SOFT); break;
        case DOUBLE_TAP: register_code16(RU_HARD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(RU_SOFT); register_code16(RU_SOFT);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(RU_SOFT); break;
        case DOUBLE_TAP: unregister_code16(RU_HARD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(RU_SOFT); break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_LOCK:
      HCS(0x19E);

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

