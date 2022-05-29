#include QMK_KEYBOARD_H
#ifdef KEY_OVERRIDE_ENABLE
  const key_override_t override_backspace = ko_make_basic(MOD_MASK_SHIFT, KC_SPC, KC_BSPC);
  const key_override_t override_delete    = ko_make_basic(MOD_MASK_CTRL, KC_SPC, KC_DEL);

  const key_override_t **key_overrides = (const key_override_t *[]){
      &override_backspace,
      &override_delete,
      NULL
  };
#endif