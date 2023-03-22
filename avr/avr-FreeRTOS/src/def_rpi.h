/**
 * -----------------------------------------------------------------
 * @file  def_rpi.h
 * @brief Some common definitions for Raspberry PI.
 *
 *
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 *
 * Licence MIT
 * -----------------------------------------------------------------
 */

#ifndef DEF_RPI_H_
#define DEF_RPI_H_


// Raspberry PI -------------------------------------------------------------




// Raspberry PI Pinouts -----------------------------------------------------

/*
  Raspberry Pi B
  Rev 1

                       +-----------+
               3.3V    |  [1]  [2] |  5V
               GPIO  0 |  [3]  [4] |  5V
               GPIO  1 |  [5]  [6] |  GND
               GPIO  4 |  [7]  [8] |  GPIO 14 (UART0 TX)
               GND     |  [9] [10] |  GPIO 15 (UART0 RX)
               GPIO 17 | [11] [12] |  GPIO 18
               GPIO 27 | [13] [14] |  GND
               GPIO 22 | [15] [16] |  GPIO 23
               3.3V    | [17] [18] |  GPIO 24
   (SPI MOSI)  GPIO 10 | [19] [20] |  GND
   (SPI MISO)  GPIO  9 | [21] [22] |  GPIO 25
   (SPI SCLK)  GPIO 11 | [23] [24] |  GPIO  8 (SPI CE0)
               GND     | [25] [26] |  GPIO  7 (SPI CE1)
                       +-----------+


    Raspberry Pi A/B
  Rev 2

                       +-----------+
               3.3V    |  [1]  [2] |  5V
   (I2C SDA1)  GPIO  2 |  [3]  [4] |  5V
   (I2C SCL1)  GPIO  3 |  [5]  [6] |  GND
               GPIO  4 |  [7]  [8] |  GPIO 14 (UART0 TX)
               GND     |  [9] [10] |  GPIO 15 (UART0 RX)
               GPIO 17 | [11] [12] |  GPIO 18
               GPIO 27 | [13] [14] |  GND
               GPIO 22 | [15] [16] |  GPIO 23
               3.3V    | [17] [18] |  GPIO 24
   (SPI MOSI)  GPIO 10 | [19] [20] |  GND
   (SPI MISO)  GPIO  9 | [21] [22] |  GPIO 25
   (SPI SCLK)  GPIO 11 | [23] [24] |  GPIO  8 (SPI CE0)
               GND     | [25] [26] |  GPIO  7 (SPI CE1)
                       +-----------+


    Raspberry Pi B+

                       +-----------+
               3.3V    |  [1]  [2] |  5V
   (I2C SDA1)  GPIO  2 |  [3]  [4] |  5V
   (I2C SCL1)  GPIO  3 |  [5]  [6] |  GND
               GPIO  4 |  [7]  [8] |  GPIO 14 (UART0 TX)
               GND     |  [9] [10] |  GPIO 15 (UART0 RX)
               GPIO 17 | [11] [12] |  GPIO 18
               GPIO 27 | [13] [14] |  GND
               GPIO 22 | [15] [16] |  GPIO 23
               3.3V    | [17] [18] |  GPIO 24
   (SPI MOSI)  GPIO 10 | [19] [20] |  GND
   (SPI MISO)  GPIO  9 | [21] [22] |  GPIO 25
   (SPI SCLK)  GPIO 11 | [23] [24] |  GPIO  8 (SPI CE0)
               GND     | [25] [26] |  GPIO  7 (SPI CE1)
               DNC     | [27] [28] |  DNC
               GPIO  5 | [29] [30] |  GND
               GPIO  6 | [31] [32] |  GPIO 12
               GPIO 13 | [33] [34] |  GND
               GPIO 19 | [35] [36] |  GPIO 16
               GPIO 26 | [37] [38] |  GPIO 20
               GND     | [39] [40] |  GPIO 21
                       +-----------+

*/



#endif  /* DEF_H */

