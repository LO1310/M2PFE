#pragma once

// !!!!BOARD !!!
#define LILYGO_WATCH_2020_V1
// #define LILYGO_WATCH_2020_V2
// #define LILYGO_WATCH_2020_V3

// #define LILYGO_WATCH_BLOCK
// #define LILYGO_WATCH_BLOCK_V1
// #define LILYGO_WATCH_2019_WITH_TOUCH
// #define LILYGO_WATCH_2019_NO_TOUCH

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM868
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_BMA423
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_PCF8563
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_BUTTON
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_TOUCH
// #define LILYGO_WATCH_HAS_BACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD
// #define LILYGO_WATCH_HAS_AXP202
// #define LILYGO_EINK_TOUCHSCREEN
// #define LILYGO_WATCH_HAS_DISPLAY
// #define LILYGO_WATCH_HAS_IRREMOTE
// #define LILYGO_WATCH_HAS_EINK
// #define LILYGO_EINK_GDEP015OC1

// #define LILYGO_BLOCK_ST7796S_MODULE
// #define LILYGO_BLOCK_ILI9488_MODULE
// #define LILYGO_WATCH_DRV2605
// #define LILYGO_WATCH_2020_PANEL_V1       //2020 new touch panel

#if defined(LILYGO_WATCH_2019_WITH_TOUCH)
#include "board/twatch2019_with_touch.h"
// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BACKLIGHT
#define LILYGO_WATCH_HAS_BUTTON

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM868
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_BUTTON
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_BACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD

// Hardware not support
#undef LILYGO_EINK_TOUCHSCREEN
#undef LILYGO_WATCH_HAS_IRREMOTE

#elif defined(LILYGO_WATCH_2019_NO_TOUCH)
#include "board/twatch2019_with_not_touch.h"
// Has
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BACKLIGHT
#define LILYGO_WATCH_HAS_BUTTON

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM868
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_LVGL
// #define LILYGO_WATCH_HAS_BACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD

// Hardware not support
#undef LILYGO_EINK_TOUCHSCREEN
#undef LILYGO_WATCH_HAS_IRREMOTE
#undef LILYGO_WATCH_HAS_TOUCH

#elif defined(LILYGO_WATCH_2020_V1)
#include "board/twatch2020_v1.h"
// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_BUZZER
#define LILYGO_WATCH_HAS_MOTOR
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_IRREMOTE
#define LILYGO_WATCH_HAS_BACKLIGHT

// Hardware not support
#undef  LILYGO_WATCH_HAS_NFC
#undef  LILYGO_WATCH_HAS_GPRS
#undef  LILYGO_WATCH_HAS_GPS
#undef  LILYGO_WATCH_HAS_LORA
#undef  LILYGO_WATCH_HAS_MPU6050
#undef  LILYGO_WATCH_HAS_MAX301XX
#undef  LILYGO_WATCH_HAS_SDCARD
#undef  LILYGO_WATCH_HAS_BUTTON
#undef  LILYGO_WATCH_HAS_MPR121
#undef  LILYGO_WATCH_HAS_BBQ_KEYBOARD
#undef  LILYGO_WATCH_HAS_S76_S78G
#undef  LILYGO_WATCH_HAS_SIM800L
#undef  LILYGO_WATCH_HAS_SIM868

#elif defined(LILYGO_WATCH_2020_V2)
#include "board/twatch2020_v2.h"

// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_IRREMOTE
#define LILYGO_WATCH_HAS_BACKLIGHT
#define LILYGO_WATCH_HAS_GPS
#define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_AIR530_GPS

// Hardware not support
#undef  LILYGO_WATCH_HAS_NFC
#undef  LILYGO_WATCH_HAS_GPRS
#undef  LILYGO_WATCH_HAS_LORA
#undef  LILYGO_WATCH_HAS_MPU6050
#undef  LILYGO_WATCH_HAS_MAX301XX
#undef  LILYGO_WATCH_HAS_BUTTON
#undef  LILYGO_WATCH_HAS_MPR121
#undef  LILYGO_WATCH_HAS_BBQ_KEYBOARD
#undef  LILYGO_WATCH_HAS_S76_S78G
#undef  LILYGO_WATCH_HAS_SIM800L
#undef  LILYGO_WATCH_HAS_SIM868
// #undef  LILYGO_WATCH_HAS_SDCARD

#ifndef LILYGO_WATCH_DRV2605
#define LILYGO_WATCH_DRV2605
#endif


#elif defined(LILYGO_WATCH_BLOCK)
#include "board/twatch_block.h"

#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BUTTON
#define LILYGO_WATCH_HAS_MPU6050

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM868
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_HAS_BACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD
// #define LILYGO_EINK_TOUCHSCREEN
// #define LILYGO_BLOCK_ST7796S_MODULE
// #define LILYGO_BLOCK_ILI9488_MODULE

#if defined(LILYGO_BLOCK_ST7796S_MODULE) || defined(LILYGO_BLOCK_ILI9488_MODULE) || defined(LILYGO_BLOCK_ILI9481_MODULE)    \
    || defined(LILYGO_GC9A01A_MODULE)

#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_BACKLIGHT

#ifndef LILYGO_GC9A01A_MODULE
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD
#define LILYGO_WATCH_HAS_TOUCH

#else

#undef TWATCH_TFT_DC
#undef TWATCH_TFT_RST
// Only GC9A01A_MODULE
#define TWATCH_TFT_DC              (gpio_num_t)23
#define TWATCH_TFT_RST             (gpio_num_t)27
#endif

#elif defined(LILYGO_EINK_GDEW0371W7) || defined(LILYGO_EINK_GDEH0154D67_TP)
#define LILYGO_WATCH_HAS_EINK
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD

#elif defined(LILYGO_EINK_GDEH0154D67_BL)

#define LILYGO_WATCH_HAS_EINK
#define LILYGO_WATCH_HAS_BACKLIGHT

#elif defined(LILYGO_EINK_GDEP015OC1)
#define LILYGO_WATCH_HAS_EINK
#undef LILYGO_WATCH_HAS_BACKLIGHT
#undef LILYGO_WATCH_HAS_TOUCH

#else
#undef LILYGO_WATCH_HAS_TOUCH
#undef LILYGO_WATCH_HAS_DISPLAY

#endif


#if defined(LILYGO_BLOCK_ILI9481_MODULE)
#define LILYGO_TOUCH_DRIVER_GTXXX
#else
#define LILYGO_TOUCH_DRIVER_FTXXX
#endif  /*LILYGO_BLOCK_ILI9481_MODULE*/


// Hardware not support
// #undef LILYGO_WATCH_LVGL
#undef LILYGO_WATCH_HAS_IRREMOTE
#undef LILYGO_WATCH_HAS_BMA423
#elif defined(LILYGO_WATCH_BLOCK_V1)
#include "board/twatch_block_v1.h"

#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_BUTTON
#define LILYGO_WATCH_HAS_MPU6050

// => Options
// #define LILYGO_WATCH_HAS_SIM800L
// #define LILYGO_WATCH_HAS_SIM868
// #define LILYGO_WATCH_HAS_NFC
// #define LILYGO_WATCH_HAS_GPRS
// #define LILYGO_WATCH_HAS_GPS
// #define LILYGO_WATCH_HAS_LORA
// #define LILYGO_WATCH_HAS_BUZZER
// #define LILYGO_WATCH_HAS_MOTOR
// #define LILYGO_WATCH_HAS_MPU6050
// #define LILYGO_WATCH_HAS_MAX301XX
// #define LILYGO_WATCH_HAS_SDCARD
// #define LILYGO_WATCH_HAS_MPR121
// #define LILYGO_WATCH_HAS_BBQ_KEYBOARD
// #define LILYGO_WATCH_HAS_S76_S78G
// #define LILYGO_WATCH_HAS_BACKLIGHT
// #define LILYGO_WATCH_HAS_GAMEPAD
// #define LILYGO_EINK_TOUCHSCREEN
// #define LILYGO_BLOCK_ST7796S_MODULE
// #define LILYGO_BLOCK_ILI9488_MODULE

#if defined(LILYGO_BLOCK_ST7796S_MODULE) || defined(LILYGO_BLOCK_ILI9488_MODULE) || defined(LILYGO_BLOCK_ILI9481_MODULE)    \
    || defined(LILYGO_GC9A01A_MODULE)

#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_BACKLIGHT

#ifndef LILYGO_GC9A01A_MODULE
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD
#define LILYGO_WATCH_HAS_TOUCH

#else

#undef TWATCH_TFT_DC
#undef TWATCH_TFT_RST
// Only GC9A01A_MODULE
#define TWATCH_TFT_DC              (gpio_num_t)23
#define TWATCH_TFT_RST             (gpio_num_t)27
#endif

#elif defined(LILYGO_EINK_GDEW0371W7) || defined(LILYGO_EINK_GDEH0154D67_TP)
#define LILYGO_WATCH_HAS_EINK
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD

#elif defined(LILYGO_EINK_GDEH0154D67_BL)

#define LILYGO_WATCH_HAS_EINK
#define LILYGO_WATCH_HAS_BACKLIGHT

#elif defined(LILYGO_EINK_GDEP015OC1)
#define LILYGO_WATCH_HAS_EINK
#undef LILYGO_WATCH_HAS_BACKLIGHT
#undef LILYGO_WATCH_HAS_TOUCH

#else
#undef LILYGO_WATCH_HAS_TOUCH
#undef LILYGO_WATCH_HAS_DISPLAY

#endif


#if defined(LILYGO_BLOCK_ILI9481_MODULE)
#define LILYGO_TOUCH_DRIVER_GTXXX
#else
#define LILYGO_TOUCH_DRIVER_FTXXX
#endif  /*LILYGO_BLOCK_ILI9481_MODULE*/


// Hardware not support
// #undef LILYGO_WATCH_LVGL
#undef LILYGO_WATCH_HAS_IRREMOTE
#undef LILYGO_WATCH_HAS_BMA423

#elif defined(LILYGO_LILYPI_V1)

#include "board/lilypi_v1.h"

#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_ADC
#define LILYGO_WATCH_HAS_SDCARD
#define LILYGO_WATCH_HAS_BUTTON

#if     defined(LILYGO_EINK_GDEW0371W7)
#define LILYGO_WATCH_HAS_EINK
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD

#elif   defined(LILYGO_BLOCK_ST7796S_MODULE) || defined(LILYGO_BLOCK_ILI9481_MODULE)
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_BACKLIGHT
#define LILYGO_TOUCHSCREEN_CALLBACK_METHOD

#endif  /*LILYGO_EINK_GDEW0371W7*/

#if defined(LILYGO_BLOCK_ILI9481_MODULE)
#define LILYGO_TOUCH_DRIVER_GTXXX
#else
#define LILYGO_TOUCH_DRIVER_FTXXX
#endif  /*LILYGO_BLOCK_ILI9481_MODULE*/

#elif defined(LILYGO_WATCH_2020_V3)

#include "board/twatch2020_v3.h"

// Has
#define LILYGO_WATCH_HAS_TOUCH
#define LILYGO_WATCH_HAS_DISPLAY
#define LILYGO_WATCH_HAS_MOTOR
#define LILYGO_WATCH_HAS_PCF8563
#define LILYGO_WATCH_HAS_BMA423
#define LILYGO_WATCH_HAS_AXP202
#define LILYGO_WATCH_HAS_IRREMOTE
#define LILYGO_WATCH_HAS_BACKLIGHT

// Hardware not support
#undef  LILYGO_WATCH_HAS_NFC
#undef  LILYGO_WATCH_HAS_GPRS
#undef  LILYGO_WATCH_HAS_LORA
#undef  LILYGO_WATCH_HAS_MPU6050
#undef  LILYGO_WATCH_HAS_MAX301XX
#undef  LILYGO_WATCH_HAS_BUTTON
#undef  LILYGO_WATCH_HAS_MPR121
#undef  LILYGO_WATCH_HAS_BBQ_KEYBOARD
#undef  LILYGO_WATCH_HAS_S76_S78G
#undef  LILYGO_WATCH_HAS_SIM800L
#undef  LILYGO_WATCH_HAS_SIM868
#undef  LILYGO_WATCH_AIR530_GPS
#undef  LILYGO_WATCH_HAS_SDCARD
#undef  LILYGO_WATCH_DRV2605


#else
#error "Please define Watch model"
#endif

#include "TTGO.h"

