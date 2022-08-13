#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _COLEMAK 1
#define _NUMPAD 2
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 5

enum custom_keycodes {
   LAYOUT = SAFE_RANGE,
   LIGHT,
   NUMPAD,
   LOWER,
   RAISE,
   ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, LOWER,   KC_SPC,                    KC_ENT,  RAISE,   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

   // Colemak-dh layer
   [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______,          _______, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, LOWER,   _______,                   _______, RAISE,   _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

    [_NUMPAD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_PAST,  KC_P7,   KC_P8,   KC_P9,  KC_PAST, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            KC_PSLS,  KC_P4,   KC_P5,   KC_P6,  KC_PMNS, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, KC_PDOT,  KC_P1,   KC_P2,   KC_P3,  KC_PPLS, KC_PENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______,  KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______,                            KC_MINS, KC_PGDN, KC_PGUP, KC_LBRC, KC_RBRC, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_LBRC, KC_RBRC, _______,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, KC_LT,   KC_GT,   _______, _______,          _______, _______, _______, _______, KC_COMM, KC_DOT,  KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_BTN2, KC_MS_U, KC_BTN1, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_MINS, KC_INS,                             KC_PGUP, KC_EQL,  _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ACL0, KC_ACL1, KC_ACL2, KC_PIPE, KC_DEL,  _______,          _______, KC_PGDN, KC_PLUS, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_UNDS,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, NUMPAD,  _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     QK_BOOT, LAYOUT,  _______, _______, _______, _______,                            LIGHT,   _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            RGB_MOD, RGB_SPI, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, RGB_SPD, RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

/**
 * @brief Cycle between no lighting, rainbow animation and solid back lighting modes. Using a custom 
 *          "no light" mode instead of RGB_MATRIX_NONE (for some reason, the keyboard keeps going to
 *          RGB_MATRIX_SOLID_COLOR when we try using RGB_MATRIX_NONE).
 */
void next_light_mode(void) {
   switch(rgb_matrix_get_mode()) {
      case RGB_MATRIX_CUSTOM_no_light:
         rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
         break;
      case RGB_MATRIX_SOLID_COLOR:
         rgb_matrix_mode(RGB_MATRIX_CYCLE_LEFT_RIGHT);
         break;
      default:
         rgb_matrix_mode(RGB_MATRIX_CUSTOM_no_light);
         break;
   }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
      case LAYOUT:
         if (record->event.pressed) {
            if (IS_LAYER_ON_STATE(default_layer_state, _COLEMAK)) {
               set_single_persistent_default_layer(_QWERTY);
            } else {
               set_single_persistent_default_layer(_COLEMAK);
            }
         }
         return false;
         break;
      case LIGHT:
         if (record->event.pressed) {
            next_light_mode();
         }
         return false;
         break;
      case NUMPAD:
         if (record->event.pressed) {
            layer_invert(_NUMPAD);
         }
         return false;
         break;
      case LOWER:
         if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
         } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
         }
         return false;
         break;
      case RAISE:
         if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
         } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
         }
         return false;
         break;
      case ADJUST:
         if (record->event.pressed) {
            layer_on(_ADJUST);
         } else {
            layer_off(_ADJUST);
         }
         return false;
         break;
   }
   return true;
}

uint8_t min(uint8_t a, uint8_t b) {
   if (a < b) {
      return a;
   }
   return b;
}

uint8_t max(uint8_t a, uint8_t b) {
   if (a > b) {
      return a;
   }
   return b;
}

void set_range(uint8_t start, uint8_t stop, uint8_t led_min, uint8_t led_max, uint8_t red, uint8_t green, uint8_t blue) {
   if (stop < led_min || led_max < start) {
      // Out of range
      return;
   }

   for(uint8_t i=max(start, led_min); i < min(stop, led_max); i++) {
      rgb_matrix_set_color(i, red, blue, green);
   }
}

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
   // Underglow lights for base layer.
   if (IS_LAYER_ON_STATE(default_layer_state, _COLEMAK)) {
      set_range(28, 31, led_min, led_max, 0, 0, 125);
      set_range(62, 65, led_min, led_max, 0, 0, 125);
      set_range(31, 34, led_min, led_max, 0, 125, 0);
      set_range(65, 68, led_min, led_max, 0, 125, 0);
   }

   // Keylights for numpad.
   if (IS_LAYER_ON(_NUMPAD)) {
      for (uint8_t i = led_min; i < led_max; i++) {
         if ((i >= 41 && i <= 43) || (i >= 48 && i <= 50) || (i >= 53 && i <= 55) || i == 58) {
            // numpad numbers
            rgb_matrix_set_color(i, 179, 92, 45);
         } else if (i == 40 || i == 51 || i == 44 || i == 47 || i == 56) {
            // operaters
            rgb_matrix_set_color(i, 75, 0, 128);
         } else if (i == 52) {
            // numpad decimal
            rgb_matrix_set_color(i, 0, 0, 50);
         } else if (i == 57 || i == 60) {
            // enter
            rgb_matrix_set_color(i, 0, 150, 0);
         } else if ((i < 28  || 33 < i) && i < 62) {
            rgb_matrix_set_color(i, RGB_OFF);
         }
      }
   }
}
