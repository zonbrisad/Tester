/**
 * -----------------------------------------------------------------
 * @brief Some common definitions for Atmel AVR/Arduino MCU's.
 *
 * @file  def_avr.h
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 * @license MIT
 *
 * -----------------------------------------------------------------
 */

#pragma once

#include <avr/io.h>
#include <stdbool.h>

// Atmel AVR specific -------------------------------------------------------

// AVR GPIO macros
#define gpio_init(port, direction, pullup) do {        \
    (direction ? _SET(DDR, port) : _CLEAR(DDR, port)); \
    (pullup ? _SET(PORT, port) : _CLEAR(PORT, port)); } while (0)

#define gpio_direction(port, direction) (direption ? _SET(DDR, port) : _CLEAR(DDR, port))
#define gpio_pullup(port, pullupp) (pullupp ? _SET(PORT, port) : _CLEAR(PORT, port))
#define gpio_write(port, val) (val ? _SET(PORT, port) : _CLEAR(PORT, port))
#define gpio_read(port) (_GET(PIN, port))
#define gpio_toggle(port) (_TOGGLE(PORT, port))

// General use bit manipulating commands
#define BitSet(x, y)    (x |= (1UL << y))
#define BitClear(x, y)  (x &= (~(1UL << y)))
#define BitToggle(x, y) (x ^= (1UL << y))
#define BitCheck(x, y)  (x & (1UL << y) ? 1 : 0)

// Access PORT, DDR and PIN
#define xPORT(port) (_PORT(port))
#define xDDR(port)  (_DDR(port))
#define xPIN(port)  (_PIN(port))

#define _PORT(port) (xPORT##port)
#define _DDR(port)  (xDDR##port)
#define _PIN(port)  (xPIN##port)

#define _SET(type, port, bit) (BitSet((type##port), bit))
#define _CLEAR(type, port, bit) (BitClear((type##port), bit))
#define _TOGGLE(type, port, bit) (BitToggle((type##port), bit))
#define _GET(type, port, bit) (BitCheck((type##port), bit))

// AVR Reset causes ---------------------------------------------------------
inline bool IS_POWER_ON_RESET(void)       { return MCUSR & (1<<PORF); }
inline bool IS_BROWN_OUT_RESET(void)      { return MCUSR & (1<<BORF); }
inline bool IS_WATCH_DOG_RESET(void)      { return MCUSR & (1<<WDRF); }
inline bool IS_EXTERNAL_RESET(void)       { return MCUSR & (1<<EXTRF); }
inline void CLEAR_RESETS(void)            { MCUSR = 0; }

// Reset MCU with watchdog --------------------------------------------------

#define RESET()                           { cli(); wdt_enable(WDTO_500MS); while(1); }
// inline void RESET(void)                    { cli(); wdt_enable(WDTO_15MS); while(1); }

// AVR ADC ------------------------------------------------------------------

inline void ADC_ENABLE(void)              { ADCSRA |= (1<<ADEN); }   // Enable continuous conversion
inline void ADC_DISSABLE(void)            { ADCSRA &= ~(1<<ADEN); }  // Dissable continuous conversion
inline void ADC_START(void)               { ADCSRA |= (1<<ADSC); }   // Start single conversion
inline void ADC_IE(void)                  { ADCSRA |= (1<<ADIE); }   // Enable ADC interrupt
inline void ADC_ID(void)                  { ADCSRA &= ~(1<<ADIE); }  // Disable ADC interrupt

#if defined(__AVR_ATmega1280__) || defined(__AVR_ATmega1281__) || \
defined(__AVR_ATmega2560__) || defined(__AVR_ATmega2561__)

inline void ADC_MUX(uint8_t channel)  { 
    if (channel > 7) BitSet(ADCSRB, MUX5); else BitClear(ADCSRB, MUX5);
    ADMUX = (ADMUX & 0b11100000) | (channel & 0b00000111);
}
#else
inline void ADC_MUX(uint8_t mux)          { ADMUX = (ADMUX & 0b11110000) | (mux); }
#endif

inline void ADC_REF_AREF(void)            { ADMUX = (ADMUX & 0b00011111); }              // Set voltage reference to AREF (external reference pin)
inline void ADC_REF_AVCC(void)            { ADMUX = (ADMUX & 0b00011111) | 0b01000000; } // Set voltage reference to AVcc (Input voltage)
inline void ADC_REF_INT(void)             { ADMUX = (ADMUX & 0b00011111) | 0b11000000; } // Set voltage reference to 1.1 V internal reference

//#define ADC_PRESCALER_2() ADCSRA = (ADCSRA & ~7) | 0
inline void ADC_PRESCALER_2(void)         { ADCSRA = (ADCSRA & 0b11111000) | 0b0001; }
inline void ADC_PRESCALER_4(void)         { ADCSRA = (ADCSRA & 0b11111000) | 0b0010; }
inline void ADC_PRESCALER_8(void)         { ADCSRA = (ADCSRA & 0b11111000) | 0b0011; }
inline void ADC_PRESCALER_16(void)        { ADCSRA = (ADCSRA & 0b11111000) | 0b0100; }
inline void ADC_PRESCALER_32(void)        { ADCSRA = (ADCSRA & 0b11111000) | 0b0101; }
inline void ADC_PRESCALER_64(void)        { ADCSRA = (ADCSRA & 0b11111000) | 0b0110; }
inline void ADC_PRESCALER_128(void)       { ADCSRA = (ADCSRA & 0b11111000) | 0b0111; }

inline uint16_t ADC_VALUE(void)           { return ADCL + (ADCH << 8); }

inline bool ADC_IS_BUSY(void)             { return (ADCSRA & (1<<ADSC)); }
inline void ADC_WAIT_COMPLETION(void)     { while (ADC_IS_BUSY()) {}}  // Busy wait for completion
inline void ADC_AUTOTRIGGER_ENABLE(void)  { ADCSRA |= (1<<ADATE); }     // ADC auto trigger enable

inline void ADC_TRG_FREE_RUNNING(void)    { ADCSRB = (ADCSRB & 0b00000111) | 0b000; }
inline void ADC_TRG_ANALOG_COMP(void)     { ADCSRB = (ADCSRB & 0b00000111) | 0b001; }
inline void ADC_TRG_EXTERNAL_INT(void)    { ADCSRB = (ADCSRB & 0b00000111) | 0b010; }
inline void ADC_TRG_TIMER0_COMPA(void)    { ADCSRB = (ADCSRB & 0b00000111) | 0b011; }
inline void ADC_TRG_TIMER0_OVF(void)      { ADCSRB = (ADCSRB & 0b00000111) | 0b100; }
inline void ADC_TRG_TIMER1_COMPB(void)    { ADCSRB = (ADCSRB & 0b00000111) | 0b101; }
inline void ADC_TRG_TIMER1_OVF(void)      { ADCSRB = (ADCSRB & 0b00000111) | 0b110; }
inline void ADC_TRG_TIMER1_CPT(void)      { ADCSRB = (ADCSRB & 0b00000111) | 0b111; }


// AVR TWI (I2C -------------------------------------------------------------

inline void I2C_Enable(bool enable)       { if (enable) BitSet(TWCR, TWEN); else BitClear(TWCR, TWEN); }
inline void I2C_Int_Enable(bool enable)   { if (enable) BitSet(TWCR, TWIE); else BitClear(TWCR, TWIE); }
inline void I2C_Bitrate(uint8_t bitrate)  { TWBR = bitrate; }
inline bool I2C_Is_Busy(void)             { return (!BitCheck(TWCR, TWINT)); }
inline void I2C_Wait_Completion(void)     { while(I2C_Is_Busy()) {} }


// AVR Timer 0 (8 bit) ------------------------------------------------------

// Clock source
inline void TIMER0_CLK_DISSABLE(void)     { TCCR0B &= 0b11111000; }        // Disable timer
inline void TIMER0_CLK_PRES_1(void)       { TCCR0B = (TCCR0B & 0b11111000) | 0b00000001; }  // Select prescaler 1/1
inline void TIMER0_CLK_PRES_8(void)       { TCCR0B = (TCCR0B & 0b11111000) | 0b00000010; }  // Select prescaler 1/8
inline void TIMER0_CLK_PRES_64(void)      { TCCR0B = (TCCR0B & 0b11111000) | 0b00000011; }  // Select prescaler 1/64
inline void TIMER0_CLK_PRES_256(void)     { TCCR0B = (TCCR0B & 0b11111000) | 0b00000100; }  // Select prescaler 1/256
inline void TIMER0_CLK_PRES_1024(void)    { TCCR0B = (TCCR0B & 0b11111000) | 0b00000101; }  // Select prescaler 1/1024
inline void TIMER0_CLK_EXT_FE(void)       { TCCR0B = (TCCR0B & 0b11111000) | 0b00000110; }  // External T0 falling edge
inline void TIMER0_CLK_EXT_RE(void)       { TCCR0B = (TCCR0B & 0b11111000) | 0b00000111; }  // External T0 rising edge

// Interrupt control
inline void TIMER0_OVF_IE(void)           { TIMSK0 |= (1<<TOIE0); }        // Enable overflow interrupt
inline void TIMER0_OVF_ID(void)           { TIMSK0 &= ~(1<<TOIE0); }       // Disable overflow interrupt
inline void TIMER0_OCA_IE(void)           { TIMSK0 |= (1<<OCIE0A); }       // Enable output compare A interrupt
inline void TIMER0_OCA_ID(void)           { TIMSK0 &= ~(1<<OCIE0A); }      // Disable output compare A interrupt
inline void TIMER0_OCB_IE(void)           { TIMSK0 |= (1<<OCIE0B); }       // Enable output compare B interrupt
inline void TIMER0_OCB_ID(void)           { TIMSK0 &= ~(1<<OCIE0B); }      // Disable output compare B interrupt

inline void  TIMER0_OCA_SET(uint8_t x)    { OCR0A = x; }                  // Set output compare A register
inline void  TIMER0_OCB_SET(uint8_t x)    { OCR0B = x; }                  // Set output compare B register
inline void  TIMER0_RELOAD(uint8_t x)     { TCNT0 = x; }                  // Reload timer register
    
// Waveform generation mode
inline void TIMER0_WGM_NORMAL(void)       { TCCR0A = (TCCR0A & 0b11111100) | 0b00000000; }
inline void TIMER0_WGM_PWM(void)          { TCCR0A = (TCCR0A & 0b11111100) | 0b00000001; } // PWM, phase correct
inline void TIMER0_WGM_FAST_PWM(void)     { TCCR0A = (TCCR0A & 0b11111100) | 0b00000011; } // Fast PWM

// Output modes
inline void TIMER0_OM_NORMAL(void)        { TCCR0A &= 0b00111111; }                        // OC0A disconnected
inline void TIMER0_OM_TOGGLE(void)        { TCCR0A = (TCCR0A & 0b00111111) | 0b01000000; } // Toggle OC0A on compare match
inline void TIMER0_OM_CLEAR(void)         { TCCR0A = (TCCR0A & 0b00111111) | 0b10000000; } // Clear OC0A on compare match
inline void TIMER0_OM_SET(void)           { TCCR0A = (TCCR0A & 0b00111111) | 0b11000000; } // Set OC0A on compare match

// AVR Timer 1 (16 bit) -----------------------------------------------------

// Clock source
inline void TIMER1_CLK_NONE(void)         { TCCR1B &= 0b11111000; }                        // Disable timer
inline void TIMER1_CLK_PRES_1(void)       { TCCR1B = (TCCR1B & 0b11111000) | 0b00000001; } // Select prescaler 1/1            
inline void TIMER1_CLK_PRES_8(void)       { TCCR1B = (TCCR1B & 0b11111000) | 0b00000010; } // Select prescaler 1/8           
inline void TIMER1_CLK_PRES_64(void)      { TCCR1B = (TCCR1B & 0b11111000) | 0b00000011; } // Select prescaler 1/64          
inline void TIMER1_CLK_PRES_256(void)     { TCCR1B = (TCCR1B & 0b11111000) | 0b00000100; } // Select prescaler 1/256         
inline void TIMER1_CLK_PRES_1024(void)    { TCCR1B = (TCCR1B & 0b11111000) | 0b00000101; } // Select prescaler 1/1024        
inline void TIMER1_CLK_EXT_FE(void)       { TCCR1B = (TCCR1B & 0b11111000) | 0b00000110; } // External T0 falling edge       
inline void TIMER1_CLK_EXT_RE(void)       { TCCR1B = (TCCR1B & 0b11111000) | 0b00000111; } // External T0 rising edge        

// Interrupt control
inline void TIMER1_OVF_IE(void)           { TIMSK1 |= (1<<TOIE1); }        // Enable overflow interrupt      
inline void TIMER1_OVF_ID(void)           { TIMSK1 &= ~(1<<TOIE1); }       // Disable overflow interrupt     
inline void TIMER1_OCA_IE(void)           { TIMSK1 |= (1<<OCIE1A); }       // Enable output compare A interrupt
inline void TIMER1_OCA_ID(void)           { TIMSK1 &= ~(1<<OCIE1A); }      // Disable output compare A interrupt
inline void TIMER1_OCB_IE(void)           { TIMSK1 |= (1<<OCIE1B); }       // Enable output compare B interrupt
inline void TIMER1_OCB_ID(void)           { TIMSK1 &= ~(1<<OCIE1B); }      // Disable output compare B interrupt
                                                             
inline void TIMER1_OCA_SET(uint16_t x)    { OCR1AH = (uint8_t) ((uint16_t)x>>8); OCR1AL = (uint8_t) ((uint16_t)x & 0xff); } // Set output compare A register
inline void TIMER1_OCB_SET(uint16_t x)    { OCR1BH = (uint8_t) ((uint16_t)x>>8); OCR1BL = (uint8_t) ((uint16_t)x & 0xff); } // Set output compare B register                                                           
inline void TIMER1_RELOAD(uint16_t x)     { TCNT1H = (uint8_t) ((uint16_t)x>>8); TCNT1L = (uint8_t)((uint16_t)x & 0xff); } // Reload timer register
                                                              
// AVR Timer 2 (8 bit) ------------------------------------------------------

// Clock source
inline void TIMER2_CLK_DISSABLE(void)     { TCCR2B &= 0b11111000; }        // Disable timer
inline void TIMER2_CLK_PRES_1(void)       { TCCR2B = (TCCR2B & 0b11111000) | 0b00000001; } // Select prescaler 1/1
inline void TIMER2_CLK_PRES_8(void)       { TCCR2B = (TCCR2B & 0b11111000) | 0b00000010; } // Select prescaler 1/8
inline void TIMER2_CLK_PRES_64(void)      { TCCR2B = (TCCR2B & 0b11111000) | 0b00000011; } // Select prescaler 1/64
inline void TIMER2_CLK_PRES_256(void)     { TCCR2B = (TCCR2B & 0b11111000) | 0b00000100; } // Select prescaler 1/256
inline void TIMER2_CLK_PRES_1024(void)    { TCCR2B = (TCCR2B & 0b11111000) | 0b00000101; } // Select prescaler 1/1024
inline void TIMER2_CLK_EXT_FE(void)       { TCCR2B = (TCCR2B & 0b11111000) | 0b00000110; } // External T0 falling edge
inline void TIMER2_CLK_EXT_RE(void)       { TCCR2B = (TCCR2B & 0b11111000) | 0b00000111; } // External T0 rising edge

// Interrupt control
inline void TIMER2_OVF_IE(void)           { TIMSK2 |= (1<<TOIE0); }   // Enable overflow interrupt
inline void TIMER2_OVF_ID(void)           { TIMSK2 &= ~(1<<TOIE0); }  // Disable overflow interrupt
inline void TIMER2_OCA_IE(void)           { TIMSK2 |= (1<<OCIE0A); }  // Enable output compare A interrupt
inline void TIMER2_OCA_ID(void)           { TIMSK2 &= ~(1<<OCIE0A); } // Disable output compare A interrupt
inline void TIMER2_OCB_IE(void)           { TIMSK2 |= (1<<OCIE0B); }  // Enable output compare B interrupt
inline void TIMER2_OCB_ID(void)           { TIMSK2 &= ~(1<<OCIE0B); } // Disable output compare B interrupt

inline void TIMER2_OCA_SET(uint8_t x)     { OCR2A = x; }              // Set output compare A register
inline void TIMER2_OCB_SET(uint8_t x)     { OCR2B = x; }              // Set output compare B register
inline void TIMER2_RELOAD(uint8_t x)      { TCNT2 = x; }              // Reload timer register

// Arduino specific ---------------------------------------------------------

#ifdef ARDUINO
#define ARDUINO_LED_PIN B,5
#endif

#ifdef ARDUINO_MEGA
#define ARDUINO_LED_PIN B,7
#endif

inline void ARDUINO_LED_INIT(void)   { gpio_init(ARDUINO_LED_PIN, 1, 0); }
inline void ARDUINO_LED_SET(bool on) { gpio_write(ARDUINO_LED_PIN, on); }
inline void ARDUINO_LED_ON(void)     { gpio_write(ARDUINO_LED_PIN, 1); }
inline void ARDUINO_LED_OFF(void)    { gpio_write(ARDUINO_LED_PIN, 0); }
inline void ARDUINO_LED_TOGGLE(void) { gpio_toggle(ARDUINO_LED_PIN); }
inline bool ARDUINO_LED_IS_ON(void)  { return gpio_read(ARDUINO_LED_PIN); }


/* Timer example code


ISR(TIMER0_COMPA_vect) {
  TIMER0_RELOAD(0);
  timer3++;

  if (timer3 >= 100) {
    timer3 = 0;
  }
}
 

// Timer 0
TIMER0_CLK_PRES_1024(); // set prescaler to 1/1024
TIMER0_OCA_IE();        // enable output compare A interrupt
TIMER0_OCA_SET(156);
sei();

*/

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

