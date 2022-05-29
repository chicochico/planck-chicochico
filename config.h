#pragma once

/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 125
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"v1.0.0"
#define RGB_MATRIX_STARTUP_SPD 60
#define RETRO_TAPPING_PER_KEY
#define NO_MUSIC_MODE

#ifndef NO_DEBUG
#define NO_DEBUG
#endif

#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif
