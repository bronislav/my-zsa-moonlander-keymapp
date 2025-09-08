#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif
#define CMD_LATCH_TIMEOUT 800

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  MAC_LOCK,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F22,         KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_MINUS,       
    KC_TRANSPARENT, LT(4, KC_A),    MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LGUI, KC_G),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, MT(MOD_RGUI, KC_M),MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_RALT, KC_I),LT(4, KC_O),    KC_UNDS,        
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_SHIFT,  CW_TOGG,        KC_TRANSPARENT,                                                                                                 MO(6),          CW_TOGG,        KC_RIGHT_SHIFT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(2, KC_SPACE),KC_ESCAPE,      KC_F23,                         KC_F24,         KC_ENTER,       LT(3, KC_BSPC)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RU_HARD,        RU_SHTI,        RU_TSE,         RU_U,           RU_KA,          RU_IE,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          RU_HA,          
    RU_YO,          LT(4, RU_EF),   MT(MOD_LALT, RU_YERU),MT(MOD_LCTL, RU_VE),MT(MOD_LSFT, RU_A),RU_PE,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RU_ER,          MT(MOD_RSFT, RU_O),MT(MOD_RCTL, RU_EL),MT(MOD_RALT, RU_DE),LT(4, RU_ZHE),  RU_E,           
    KC_TRANSPARENT, RU_YA,          RU_CHE,         RU_ES,          RU_EM,          RU_I,                                           RU_TE,          RU_SOFT,        RU_BE,          RU_YU,          RU_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_NO,          KC_7,           KC_8,           KC_9,           KC_F1,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_F12,         
    KC_NO,          KC_DOT,         MT(MOD_LALT, KC_4),MT(MOD_LCTL, KC_5),MT(MOD_LSFT, KC_6),KC_F2,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_F3,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_NO,          KC_7,           KC_8,           KC_9,           KC_F1,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_NO,          KC_F12,         
    KC_NO,          KC_DOT,         KC_4,           KC_5,           KC_6,           KC_F2,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RSFT, KC_LEFT),MT(MOD_RCTL, KC_DOWN),MT(MOD_RALT, KC_RIGHT),KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_0,           KC_1,           KC_2,           KC_3,           KC_F3,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_NO,          KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_QUOTE,       KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_MINUS,       
    KC_NO,          KC_TILD,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DQUO,        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_COLN,        KC_UNDS,        
    KC_TRANSPARENT, KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_NO,                                          KC_BSLS,        KC_PIPE,        KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         CW_TOGG,        KC_NO,          KC_PSCR,        KC_MS_BTN3,     KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_APPLICATION, KC_MS_BTN1,     KC_MS_BTN2,     KC_LEFT_GUI,    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_RIGHT_GUI,   KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_CAPS,        KC_MS_WH_LEFT,  KC_SCRL,        KC_MS_WH_RIGHT, KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_UP, KC_END, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_DOWN, KC_RIGHT, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_HOME, KC_UP, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_RSFT, KC_LEFT), MT(MOD_RCTL, KC_DOWN), COMBO_END};
const uint16_t PROGMEM combo5[] = { MT(MOD_RCTL, KC_DOWN), MT(MOD_RALT, KC_RIGHT), COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_F7, KC_F8, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_F6, KC_F7, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_PAGE_UP),
    COMBO(combo1, KC_PGDN),
    COMBO(combo2, KC_INSERT),
    COMBO(combo3, KC_DELETE),
    COMBO(combo4, KC_DELETE),
    COMBO(combo5, KC_PGDN),
    COMBO(combo6, KC_F4),
    COMBO(combo7, KC_F5),
};



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
    [0] = { {0,0,0}, {245,218,204}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {64,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {188,255,255}, {64,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {188,255,255}, {147,255,255}, {188,255,255}, {64,255,255}, {0,0,0}, {188,255,255}, {188,255,255}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {23,255,255}, {23,255,255}, {64,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {147,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {23,255,255}, {64,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {0,0,0}, {0,0,0}, {23,255,255}, {147,255,255}, {23,255,255}, {147,255,255}, {0,0,0}, {23,255,255}, {23,255,255}, {23,255,255}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {245,218,204}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {73,255,85}, {147,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {64,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {64,255,255}, {64,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {64,255,255}, {41,255,255}, {147,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {245,218,204}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {73,255,85}, {0,0,0}, {0,0,0}, {73,255,85}, {73,255,85}, {73,255,85}, {147,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {41,255,255}, {0,0,0}, {0,0,0}, {64,255,255}, {166,218,166}, {41,255,255}, {0,0,0}, {0,0,0}, {73,255,85}, {166,218,166}, {41,255,255}, {147,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {245,218,204}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {147,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {64,255,255}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {147,255,255}, {0,0,0}, {166,218,166}, {166,218,166}, {166,218,166}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {64,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {166,218,166}, {245,218,204}, {0,0,0}, {0,0,0}, {28,127,255}, {4,232,184}, {4,232,184}, {0,0,0}, {0,0,0}, {4,232,184}, {4,232,184}, {245,218,204}, {147,255,255}, {0,0,0}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {4,232,184}, {0,0,0}, {0,0,0}, {0,0,0}, {4,232,184}, {4,232,184}, {0,0,0}, {0,0,0}, {0,0,0}, {23,255,255}, {4,232,184}, {0,0,0}, {147,255,255}, {0,0,0}, {0,0,0}, {64,255,255}, {0,0,0}, {0,0,0}, {28,127,255}, {0,0,0}, {245,218,204}, {245,218,204}, {0,0,0}, {0,0,0} },

    [6] = { {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
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


static bool cmd_latched = false;
static uint16_t cmd_timer = 0;

static void release_cmd_latch(void) {
  if (cmd_latched) {
    unregister_code(KC_LGUI);
    cmd_latched = false;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (cmd_latched && record->event.pressed && (keycode != KC_F23 || keycode != KC_F24)) {
    release_cmd_latch();
  }

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

    case KC_F22:
        if (record->event.pressed) {
          tap_code16(G(KC_SPC));

          if (layer_state_is(0)) {
            layer_move(1);
          } else {
            layer_move(0);
          }
        }
        return false;

    case KC_F23:
        if (record->event.pressed) {
            if (!cmd_latched) {
              register_code(KC_LGUI);
              cmd_latched = true;
          }
          tap_code(KC_GRV);
          cmd_timer = timer_read();
        }
        return false;

    case KC_F24:
        if (record->event.pressed) {
          if (!cmd_latched) {
            register_code(KC_LGUI);
            cmd_latched = true;
          }
          tap_code(KC_TAB);
          cmd_timer = timer_read();
        }
        return false;
  }
  return true;
}

void matrix_scan_user(void) {
  if (cmd_latched && timer_elapsed(cmd_timer) > CMD_LATCH_TIMEOUT) {
    release_cmd_latch();
  }
}

void suspend_power_down_user(void) {
  release_cmd_latch();
}

void shutdown_user(bool jump_to_bootloader) {
  release_cmd_latch();
}
