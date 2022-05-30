LTO_ENABLE 						= yes

KEY_OVERRIDE_ENABLE		= yes
COMBO_ENABLE 					= yes
TAP_DANCE_ENABLE 			= yes
KEYCOUNTER_ENABLE			= yes

# disable stuff to save space
GRAVE_ESC_ENABLE 			= no
MUSIC_ENABLE 					= no
MAGIC_ENABLE 					= no
SPACE_CADET_ENABLE 		= no
MOUSEKEY_ENABLE 			= no

SRC += jasonhazel.c
SRC += tapdances/tapdances.c
SRC += combos/combos.c
SRC += keyoverrides/keyoverrides.c
SRC += keymaps/keymaps.c


ifdef POINTING_DEVICE_ENABLE
		SRC += pointing/pointing.c
endif

ifdef OLED_ENABLE
		SRC += oled/oled.c
endif

ifeq ($(strip $(KEYCOUNTER_ENABLE)), yes)
		OPT_DEFS += -DKEYCOUNTER_ENABLE
endif

ifdef KEYCOUNTER_ENABLE
		SRC += keycounter/keycounter.c
endif