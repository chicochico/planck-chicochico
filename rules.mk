ifdef AUDIO_ENABLE
SRC += muse.c
endif
# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
WEBUSB_ENABLE = no
ORYX_ENABLE = no
AUDIO_ENABLE = no
ENCODER_ENABLE = no
LTO_ENABLE = yes
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
