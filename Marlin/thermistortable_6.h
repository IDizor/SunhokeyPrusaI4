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
// My custom table for thermistor HT-NTC100K
// Based on https://3dua.info/topic/76-kalibrovka-termistorov-v-marlin/
const short temptable_6[][2] PROGMEM = {
  { OV(   1), 713 },
  { OV(  17), 300 }, // top rating 300C
  { OV(  20), 295 },
  { OV(  23), 290 },
  { OV(  27), 285 },
  { OV(  31), 280 },
  { OV(  37), 270 },
  { OV(  43), 260 },
  { OV(  51), 250 },
  { OV(  61), 240 },
  { OV(  73), 230 },
  { OV(  87), 220 },
  { OV( 106), 210 },
  { OV( 128), 200 },
  { OV( 155), 190 },
  { OV( 189), 180 },
  { OV( 230), 170 },
  { OV( 278), 160 },
  { OV( 336), 150 },
  { OV( 402), 140 },
  { OV( 476), 130 },
  { OV( 554), 120 },
  { OV( 635), 110 },
  { OV( 713), 100 },
  { OV( 784),  90 },
  { OV( 846),  80 },
  { OV( 897),  50 },
  { OV( 937),  40 },
  { OV( 966),  30 },
  { OV( 986),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
}; 
