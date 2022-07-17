RGB_MATRIX_EFFECT(no_light)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
// Custom light for "no light" mode. The 
// RGB_MATRIX_NONE doesn't seem to work (keeps
// going to RGB_MATRIX_SOLID_COLOR when we tried)
static bool no_light(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, RGB_OFF);
    }
    return rgb_matrix_check_finished_leds(led_max);
}
#endif