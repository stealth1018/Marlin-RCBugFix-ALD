/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * ALD pin assignments (AT90USB1286)
 * Requires the Teensyduino software with Teensy++ 2.0 selected in Arduino IDE!
 * http://www.pjrc.com/teensy/teensyduino.html
 */

#ifndef __AVR_AT90USB1286__
  #error "Oops!  Make sure you have 'Teensy++ 2.0' selected from the 'Tools -> Boards' menu."
#endif
/*
#if ENABLED(AT90USBxx_TEENSYPP_ASSIGNMENTS)  // use Teensyduino Teensy++2.0 pin assignments instead of Marlin traditional.
  #error "These ALD assignments depend on traditional Marlin assignments, not AT90USBxx_TEENSYPP_ASSIGNMENTS in fastio.h"
#endif
*/
#define BOARD_NAME         "ALD"
#define LARGE_FLASH        true

#define X_STEP_PIN         28
#define X_DIR_PIN          29
#define X_ENABLE_PIN       19

#define Y_STEP_PIN         30
#define Y_DIR_PIN          31
#define Y_ENABLE_PIN       18

#define Z_STEP_PIN         32
#define Z_DIR_PIN          33
#define Z_ENABLE_PIN       17

#define E0_STEP_PIN        34
#define E0_DIR_PIN         35
#define E0_ENABLE_PIN      13

#define HEATER_0_PIN       15  // Extruder
#define HEATER_1_PIN       -1
#define HEATER_2_PIN       -1
#define HEATER_BED_PIN     14  // Bed
#define FAN_PIN            16  // Fan
// You may need to change FAN_PIN to 16 because Marlin isn't using fastio.h
// for the fan and Teensyduino uses a different pin mapping.


#define X_STOP_PIN         47
#define Y_STOP_PIN         37
#define Z_STOP_PIN         36
#define TEMP_0_PIN          1  // Extruder / Analog pin numbering
#define TEMP_BED_PIN        0  // Bed / Analog pin numbering

#define TEMP_1_PIN         -1
#define TEMP_2_PIN         -1

#define SDPOWER            -1
#define SDSS               20
#define LED_PIN            -1
#define PS_ON_PIN          -1
#define KILL_PIN           -1
#define ALARM_PIN          -1

#define DIGIPOTSS_PIN 24
#define DIGIPOT_CHANNELS {0,1,2,3} // X Y Z E0 E1 digipot channels to stepper driver mapping


#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support
  #define SCK_PIN          21
  #define MISO_PIN         23
  #define MOSI_PIN         22
#endif


      #define LCD_PINS_RS        9
      #define LCD_PINS_ENABLE    8
      #define LCD_PINS_D4        7
      #define LCD_PINS_D5        6
      #define LCD_PINS_D6        5
      #define LCD_PINS_D7        4

      //The encoder and click button
      #define BTN_EN1  10 //must be a hardware interrupt pin
      #define BTN_EN2  11 //must be hardware interrupt pin
      #define BTN_ENC  12 //the click
      //not connected to a pin currently
      #define SD_DETECT_PIN 2

      //from the same bit in the RAMPS Newpanel define
      //encoder rotation values
      #define encrot0 0
      #define encrot1 1
      #define encrot2 3
      #define encrot3 2

      #define BLEN_C 2
      #define BLEN_B 1
      #define BLEN_A 0