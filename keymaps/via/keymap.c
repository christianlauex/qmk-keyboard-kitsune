#include QMK_KEYBOARD_H
#include <lib/lib8tion/lib8tion.h>
extern rgblight_config_t rgblight_config;

// RGB Indicator
#define INDICATOR_CAPSLOCK

// Keycodes
enum custom_keycodes {
  WIN_MAC = QK_KB_0,
  UG_BRIU,
  UG_BRID
};

// Keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, MO(2),            KC_SPC,           MO(3),   KC_RALT,          MO(4),   KC_RCTL
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, MO(2),            KC_SPC,           MO(3),   KC_LGUI,          MO(4),   KC_RCTL
    ),
    [2] = LAYOUT(
        KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,
        KC_CAPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_ENT,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_COMM, KC_DOT,  KC_SLSH, _______,
        _______, _______, _______, XXXXXXX,          KC_SPC,           MO(4),   _______,          MO(4),   _______
    ),
    [3] = LAYOUT(
        XXXXXXX, MS_BTN5, MS_BTN1, MS_UP,   MS_BTN2, MS_WHLU, XXXXXXX, KC_HOME, KC_UP,   KC_PGUP, KC_BSLS, KC_DEL,
        XXXXXXX, MS_BTN4, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD, KC_APP,  KC_LEFT, KC_DOWN, KC_RGHT, KC_LBRC, KC_RBRC,
        _______, MS_BTN3, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_END,  KC_INS,  KC_PGDN, XXXXXXX, _______,
        _______, _______, _______, MO(4),            KC_SPC,           XXXXXXX, _______,          MO(5),   _______
    ),
    [4] = LAYOUT(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11,  KC_F12,
        WIN_MAC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, XXXXXXX,          XXXXXXX,          MO(5),   _______,          XXXXXXX, _______
    ),
    [5] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UG_BRIU, XXXXXXX, XXXXXXX, KC_BRIU, KC_VOLU, KC_MPRV, KC_MNXT, KC_MPLY,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, UG_BRID, XXXXXXX, XXXXXXX, KC_BRID, KC_VOLD, KC_MUTE, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, XXXXXXX,          XXXXXXX,          XXXXXXX, _______,          XXXXXXX, _______
    ),
    [6] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, XXXXXXX,          XXXXXXX,          XXXXXXX, _______,          XXXXXXX, _______
    ),
    [7] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, XXXXXXX,          XXXXXXX,          XXXXXXX, _______,          XXXXXXX, _______
    ),
    [8] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, XXXXXXX,          XXXXXXX,          XXXXXXX, _______,          XXXXXXX, _______
    )
};

// RGB indicator
const rgblight_segment_t PROGMEM indicator_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_WHITE}
);
const rgblight_segment_t PROGMEM indicator_windows_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_CYAN}
);
const rgblight_segment_t PROGMEM indicator_macos_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_MAGENTA}
);

const rgblight_segment_t* const PROGMEM indicator_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    indicator_capslock_layer, // Higher layers take priority
    indicator_windows_layer,
    indicator_macos_layer
);

// Enable the LED layers
void keyboard_post_init_user(void) {
    rgblight_layers = indicator_rgb_layers;
}

#ifdef INDICATOR_CAPSLOCK
bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
#endif

// Processing
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case WIN_MAC:
            if (record->event.pressed) {
                if (get_highest_layer(default_layer_state) == 0) { // Toggle Windows and macOS modes
                    set_single_persistent_default_layer(1);
                    rgblight_blink_layer(2, 500);
                } else {
                    set_single_persistent_default_layer(0);
                    rgblight_blink_layer(1, 500);
                }
            }
            return false;
        case UG_BRIU:
            if (record->event.pressed) {
                uint8_t new_val = qadd8(rgblight_config.val, RGBLIGHT_VAL_STEP);
                rgblight_config.val = new_val;
                eeconfig_update_rgblight(rgblight_config.raw);
                rgblight_set();
            }
            return false;
        case UG_BRID:
            if (record->event.pressed) {
                uint8_t new_val = qsub8(rgblight_config.val, RGBLIGHT_VAL_STEP);
                rgblight_config.val = new_val;
                eeconfig_update_rgblight(rgblight_config.raw);
                rgblight_set();
            }
            return false;
        default:
            return true;
    }
}