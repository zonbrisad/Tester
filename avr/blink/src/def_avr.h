/**
 * -----------------------------------------------------------------
 * @file  def_avr.h
 * @brief Some common definitions for Atmel AVR/Arduino MCU's.
 *
 *
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 *
 * Licence MIT
 * -----------------------------------------------------------------
 */

#ifndef DEF_AVR_H_
#define DEF_AVR_H_


// Atmel AVR specific -------------------------------------------------------

// Reset causes -------------------------------------------------------------
#define IS_POWER_ON_RESET()            (MCUSR & (1<<PORF))
#define IS_BROWN_OUT_RESET()           (MCUSR & (1<<BORF))
#define IS_WATCH_DOG_RESET()           (MCUSR & (1<<WDRF))
#define IS_JTAG_RESET_RESET()          (MCUSR & (1<<JTRF))
#define IS_EXTERNAL_RESET()            (MCUSR & (1<<EXTRF))
#define CLEAR_RESETS()                 MCUSR  &= ~31              /* clearing all resets */


// Reset MCU with watchdog --------------------------------------------------

#define RESET()                     wdt_enable(WDTO_500MS); while(1) {}


// AVR Timers ---------------------------------------------------------------

#define TIMER0_DISSABLE()     TCCR0B &= 0xF8                  /* Disable timer                  */
#define TIMER0_PRES_1()       TIMER0_DISSABLE(); TCCR0B |= 1  /* Select prescaler 1/1           */
#define TIMER0_PRES_8()       TIMER0_DISSABLE(); TCCR0B |= 2  /* Select prescaler 1/8           */
#define TIMER0_PRES_64()      TIMER0_DISSABLE(); TCCR0B |= 3  /* Select prescaler 1/64          */
#define TIMER0_PRES_256()     TIMER0_DISSABLE(); TCCR0B |= 4  /* Select prescaler 1/256         */
#define TIMER0_PRES_1024()    TIMER0_DISSABLE(); TCCR0B |= 5  /* Select prescaler 1/1024        */
#define TIMER0_EXT_FE()       TIMER0_DISSABLE(); TCCR0B |= 6  /* External T0 falling edge       */
#define TIMER0_EXT_RE()       TIMER0_DISSABLE(); TCCR0B |= 7  /* External T0 rising edge        */
#define TIMER0_OVF_IE()       TIMSK0 |= (1<<TOIE0)            /* Enable overflow interrupt      */
#define TIMER0_OVF_ID()       TIMSK0 &= ~(1<<TOIE0)           /* Disable overflow interrupt     */
#define TIMER0_RELOAD(x)      TCNT0 = x                       /* Reload timer register          */

#define TIMER1_DISSABLE()     TCCR1B &= 0xF8                  /* Disable timer                  */
#define TIMER1_PRES_1()       TIMER1_DISSABLE(); TCCR1B |= 1  /* Select prescaler 1/1           */
#define TIMER1_PRES_8()       TIMER1_DISSABLE(); TCCR1B |= 2  /* Select prescaler 1/8           */
#define TIMER1_PRES_64()      TIMER1_DISSABLE(); TCCR1B |= 3  /* Select prescaler 1/64          */
#define TIMER1_PRES_256()     TIMER1_DISSABLE(); TCCR1B |= 4  /* Select prescaler 1/256         */
#define TIMER1_PRES_1024()    TIMER1_DISSABLE(); TCCR1B |= 5  /* Select prescaler 1/1024        */
#define TIMER1_EXT_FE()       TIMER1_DISSABLE(); TCCR1B |= 6  /* External T0 falling edge       */
#define TIMER1_EXT_RE()       TIMER1_DISSABLE(); TCCR1B |= 7  /* External T0 rising edge        */
#define TIMER1_OVF_IE()       TIMSK1 |= (1<<TOIE1)            /* Enable overflow interrupt      */
#define TIMER1_OVF_ID()       TIMSK1 &= ~(1<<TOIE1)           /* Disable overflow interrupt     */
#define TIMER1_RELOAD(x)      TCNT1H = (uint8_t) ((uint16_t)x>>8); TCNT1L = (uint8_t)((uint16_t)x & 0xff)  /* Reload timer register          */


// Arduino specific ---------------------------------------------------------

#ifdef ARDUINO_MEGA
#define ARD_LED_INIT()             DDRB  |= (1<<PB7)
#define ARD_LED_ON()               PORTB |= (1<<PB7)
#define ARD_LED_OFF()              PORTB &= ~(1<<PB7)
#define ARD_LED_TOGGLE()           PORTB ^= (1<<PB7)
#define ARD_IS_LED_ON()            (PINB && (1<<PB7))
#endif

#ifdef ARDUINO
#define ARD_LED_INIT()             DDRB  |= (1<<PB5)
#define ARD_LED_ON()               PORTB |= (1<<PB5)
#define ARD_LED_OFF()              PORTB &= ~(1<<PB5)
#define ARD_LED_TOGGLE()           PORTB ^= (1<<PB5)
#define ARD_IS_LED_ON()            (PINB && (1<<PB5))
#endif


/*
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |         GND/RST2  [ ][ ]            |
         |       MOSI2/SCK2  [ ][ ]  A5/SCL[ ] |   C5
         |          5V/MISO2 [ ][ ]  A4/SDA[ ] |   C4
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                    SCK/13[ ] |   B5
         | [ ]IOREF                 MISO/12[ ] |   .
         | [ ]RST                   MOSI/11[ ]~|   .
         | [ ]3V3    +---+               10[ ]~|   .
         | [ ]5v    -| A |-               9[ ]~|   .
         | [ ]GND   -| R |-               8[ ] |   B0
         | [ ]GND   -| D |-                    |
         | [ ]Vin   -| U |-               7[ ] |   D7
         |          -| I |-               6[ ]~|   .
         | [ ]A0    -| N |-               5[ ]~|   .
         | [ ]A1    -| O |-               4[ ] |   .
         | [ ]A2     +---+           INT1/3[ ]~|   .
         | [ ]A3                     INT0/2[ ] |   .
         | [ ]A4/SDA  RST SCK MISO     TX>1[ ] |   .
         | [ ]A5/SCL  [ ] [ ] [ ]      RX<0[ ] |   D0
         |            [ ] [ ] [ ]              |
         |  UNO_R3    GND MOSI 5V  ____________/
          \_______________________/

                      +-----+
         +------------| USB |------------+
         |            +-----+            |
    B5   | [ ]D13/SCK        MISO/D12[ ] |   B4
         | [ ]3.3V           MOSI/D11[ ]~|   B3
         | [ ]V.ref     ___    SS/D10[ ]~|   B2
    C0   | [ ]A0       / N \       D9[ ]~|   B1
    C1   | [ ]A1      /  A  \      D8[ ] |   B0
    C2   | [ ]A2      \  N  /      D7[ ] |   D7
    C3   | [ ]A3       \_0_/       D6[ ]~|   D6
    C4   | [ ]A4/SDA               D5[ ]~|   D5
    C5   | [ ]A5/SCL               D4[ ] |   D4
         | [ ]A6              INT1/D3[ ]~|   D3
         | [ ]A7              INT0/D2[ ] |   D2
         | [ ]5V                  GND[ ] |
    C6   | [ ]RST                 RST[ ] |   C6
         | [ ]GND   5V MOSI GND   TX1[ ] |   D0
         | [ ]Vin   [ ] [ ] [ ]   RX1[ ] |   D1
         |          [ ] [ ] [ ]          |
         |          MISO SCK RST         |
         | NANO-V3                       |
         +-------------------------------+



                           D0   D1   RST
            GND  GND  VCC  RX   TX   /DTR
         +--------------------------------+
         |  [ ]  [ ]  [ ]  [ ]  [ ]  [ ]  |
         |              FTDI              |
     D1  | [ ]1/TX                 RAW[ ] |
     D0  | [ ]0/RX                 GND[ ] |
         | [ ]RST        SCL/A5[ ] RST[ ] |   C6
         | [ ]GND        SDA/A4[ ] VCC[ ] |
     D2  | [ ]2/INT0    ___         A3[ ] |   C3
     D3  |~[ ]3/INT1   /   \        A2[ ] |   C2
     D4  | [ ]4       /PRO  \       A1[ ] |   C1
     D5  |~[ ]5       \ MINI/       A0[ ] |   C0
     D6  |~[ ]6        \___/    SCK/13[ ] |   B5
     D7  | [ ]7          A7[ ] MISO/12[ ] |   B4
     B0  | [ ]8          A6[ ] MOSI/11[ ]~|   B3
     B1  |~[ ]9                  SS/10[ ]~|   B2
         |           [RST-BTN]            |
         +--------------------------------+



                                      +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |           GND/RST2  [ ] [ ]         |
         |         MOSI2/SCK2  [ ] [ ]  SCL[ ] |   D0
         |            5V/MISO2 [ ] [ ]  SDA[ ] |   D1
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                        13[ ]~|   B7
         | [ ]IOREF                      12[ ]~|   B6
         | [ ]RST                        11[ ]~|   B5
         | [ ]3V3      +----------+      10[ ]~|   B4
         | [ ]5v       | ARDUINO  |       9[ ]~|   H6
         | [ ]GND      |   MEGA   |       8[ ]~|   H5
         | [ ]GND      +----------+            |
         | [ ]Vin                         7[ ]~|   H4
         |                                6[ ]~|   H3
         | [ ]A0                          5[ ]~|   E3
         | [ ]A1                          4[ ]~|   G5
         | [ ]A2                     INT5/3[ ]~|   E5
         | [ ]A3                     INT4/2[ ]~|   E4
         | [ ]A4                       TX>1[ ]~|   E1
         | [ ]A5                       RX<0[ ]~|   E0
         | [ ]A6                               |
         | [ ]A7                     TX3/14[ ] |   J1
         |                           RX3/15[ ] |   J0
         | [ ]A8                     TX2/16[ ] |   H1
         | [ ]A9                     RX2/17[ ] |   H0
         | [ ]A10               TX1/INT3/18[ ] |   D3
         | [ ]A11               RX1/INT2/19[ ] |   D2
         | [ ]A12           I2C-SDA/INT1/20[ ] |   D1
         | [ ]A13           I2C-SCL/INT0/21[ ] |   D0
         | [ ]A14                              |
         | [ ]A15                              |   Ports:
         |                RST SCK MISO         |    22=A0  23=A1
         |         ICSP   [ ] [ ] [ ]          |    24=A2  25=A3
         |                [ ] [ ] [ ]          |    26=A4  27=A5
         |                GND MOSI 5V          |    28=A6  29=A7
         | G                                   |    30=C7  31=C6
         | N 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 5 |    32=C5  33=C4
         | D 2 0 8 6 4 2 0 8 6 4 2 0 8 6 4 2 V |    34=C3  35=C2
         |         ~ ~                         |    36=C1  37=C0
         | @ # # # # # # # # # # # # # # # # @ |    38=D7  39=G2
         | @ # # # # # # # # # # # # # # # # @ |    40=G1  41=G0
         |           ~                         |    42=L7  43=L6
         | G 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 5 |    44=L5  45=L4
         | N 3 1 9 7 5 3 1 9 7 5 3 1 9 7 5 3 V |    46=L3  47=L2
         | D                                   |    48=L1  49=L0    SPI:
         |                                     |    50=B3  51=B2     50=MISO 51=MOSI
         |     2560                ____________/    52=B1  53=B0     52=SCK  53=SS
          \_______________________/

*/



//  http://busyducks.com/wp_4_1/2015/11/16/ascii-art-arduino-pinouts/

#endif  /* DEF_AVR_H */

