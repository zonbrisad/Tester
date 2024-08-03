/**
 * -----------------------------------------------------------------
 * @file  def.h
 * @brief Some common definitions
 *
 *
 * @author Peter Malmberg <peter.malmberg@gmail.com>
 *
 * Licence MIT
 * -----------------------------------------------------------------
 */

#ifndef DEF_H_
#define	DEF_H_


// Type min/max -------------------------------------------------------------
 
#ifndef MAXCHAR
#define MAXCHAR         255
#endif

#ifndef MAXUCHAR
#define MAXUCHAR        255
#endif

#ifndef MAXSCHAR
#define MAXSCHAR        127
#endif

#ifndef MAXINT
#define MAXINT          32767
#endif

#ifndef MAXUINT
#define MAXUINT         65535
#endif

#ifndef MAXSINT
#define MAXSINT         32767
#endif

#ifndef MAXLONG
#define MAXLONG         2147483647
#endif

#ifndef MAXULONG
#define MAXULONG        4294967295
#endif

#ifndef MAXSLONG
#define MAXSLONG        2147483647
#endif

#ifndef FALSE
#define FALSE           0
#endif

#ifndef TRUE
#define TRUE            1
#endif

#ifndef NULL
#define NULL			(void)0
#endif

// Special character definitions --------------------------------------------

#define NUL             0
#define SOH             1
#define STX             2
#define ETX             3
#define EOT             4
#define ENQ             5
#define ACK             6
#define BEL             7
#define BS              8
#define HT              9
#define LF              10
#define VT              11
#define FF              12
#define CR              13
#define SO              14
#define SI              15
#define DLE             16
#define DC1             17
#define DC2             18
#define DC3             19
#define DC4             20
#define NAK             21
#define SYN             22
#define ETB             23
#define CAN             24
#define EM              25
#define SUB             26
#define ESC             27
#define FS              28
#define GS              29
//#define RS            30
//#define US              31


//  Unix Signal signals -------------------------------------------------

#define SIGHUP          1       // Hangup
#define SIGINT          2       // Interrupt
#define SIGQUIT         3       // Quit and dump core
#define SIGILL          4       // Illegal instruction
#define SIGTRAP         5       // Trace/breakpoint trap
#define SIGABRT         6       // Process aborted
#define SIGBUS          7       // Bus error: "access to undefined portion of memory object"
#define SIGFPE          8       // Floating point exception: "erroneous arithmetic operation"
#define SIGKILL         9       // Kill (terminate immediately)
#define SIGUSR1         10      // User-defined 1
#define SIGSEGV         11      // Segmentation violation
#define SIGUSR2         12      // User-defined 2
#define SIGPIPE         13      // Write to pipe with no one reading
#define SIGALRM         14      // Signal raised by alarm
#define SIGTERM         15      // Termination (request to terminate)
#define SIGCHLD         17      // Child process terminated, stopped (or continued*)
#define SIGCONT         18      // Continue if stopped
#define SIGSTOP	        19      // Stop executing temporarily
#define SIGTSTP         20      // Terminal stop signal
#define SIGTTIN	        21      // Background process attempting to read from tty ("in")
#define SIGTTOU         22      // Background process attempting to write to tty ("out")
#define SIGURG	        23      // Urgent data available on socket
#define SIGXCPU         24      // CPU time limit exceeded
#define SIGXFSZ         25      // File size limit exceeded
#define SIGVTALRM       26      // Signal raised by timer counting virtual time: "virtual timer expired"
#define SIGPROF         27      // Profiling timer expired
//#define SIGPOLL         29      // Pollable event
#define SIGSYS          31      // Bad syscall


// ANSI color codes ---------------------------------------------------------

#define E_OK            "\033[0;32m"
#define E_WARN          "\033[33;01m"
#define E_ERROR         "\033[31;01m"
#define E_BLACK         "\033[0;300m"
#define E_RED           "\033[0;31m"
#define E_GREEN         "\033[0;32m"
#define E_YELLOW        "\033[0;33m"
#define E_BLUE          "\033[0;34m"
#define E_MAGENTA       "\033[0;35m"
#define E_CYAN          "\033[0;36m"
#define E_GRAY          "\033[0;37m"
#define E_DARKGRAY      "\033[1;30m"
#define E_BR_RED        "\033[1;31m"
#define E_BR_GREEN      "\033[1;32m"
#define E_BR_YELLOW     "\033[1;33m"
#define E_BR_BLUE       "\033[1;34m"
#define E_BR_MAGENTA    "\033[1;35m"
#define E_BR_CYAN       "\033[1;36m"
#define E_WHITE         "\033[1;37m"

#define E_ON_BLACK      "\33[40"
#define E_ON_RED        "\33[41"
#define E_ON_GREEN      "\33[42"
#define E_ON_YELLOW     "\33[43"
#define E_ON_BLUE       "\33[44"
#define E_ON_MAGENTA    "\33[45"
#define E_ON_CYAN       "\33[46"
#define E_ON_WHITE      "\33[1;47"

#define E_END           "\033[0m"
#define E_CLEAR         "\033[2J"

#define E_WONR "\33[1;47\033[1;31m"

// ANSI movement codes ------------------------------------------------------

#define E_CUR_RETURN  "\033[;0F"      // cursor return
#define E_CUR_UP      "\033[;0A"      // cursor up
#define E_CUR_DOWN    "\033[;0B"      // cursor down
#define E_CUR_FORWARD "\033[;0C"      // cursor forward
#define E_CUR_BACK    "\033[;0D"      // cursor back

#define E_HIDE_CURSOR "\033[?25l"     // hide cursor
#define E_SHOW_CURSOR "\033[?25h"     // show cursor


#define BLACK(s)        E_BLACK        s E_END
#define RED(s)          E_RED          s E_END
#define GREEN(s)        E_GREEN        s E_END
#define YELLOW(s)       E_YELLOW       s E_END
#define BLUE(s)         E_BLUE         s E_END
#define MAGENTA(s)      E_MAGENTA      s E_END
#define CYAN(s)         E_CYAN         s E_END
#define GRAY(s)         E_GRAY         s E_END
#define DARKGRAY(s)     E_DARKGRAY     s E_END
#define BR_RED(s)       E_BR_RED       s E_END
#define BR_GREEN(s)     E_BR_GREEN     s E_END
#define BR_YELLOW(s)    E_BR_YELLOW    s E_END
#define BR_BLUE(s)      E_BR_BLUE      s E_END
#define BR_MAGENTA(s)   E_BR_MAGENTA   s E_END
#define BR_CYAN(s)      E_BR_CYAN      s E_END
#define WHITE(s)        E_WHITE        s E_END

#define CUR_RETURN() printf(E_CUR_RETURN);         // return to column 0
#define CLEAR()      printf(E_CLEAR)


// Debugging ----------------------------------------------------------------

// Filename without path
//#define FILEX (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#define WHERESTR  E_GREEN"DBG "E_WHITE"%4d"E_BR_CYAN" %-25s"E_END": "
#define WHEREARG  __LINE__, __FUNCTION__ 
#define DEBUGPRINT2(...)       fprintf(stderr, __VA_ARGS__)
#ifdef DEBUG
#define DEBUGPRINT(_fmt, ...)  DEBUGPRINT2(WHERESTR _fmt, WHEREARG, ##__VA_ARGS__)
#else
#define DEBUGPRINT(_fmt, ...)
#endif


// Misc ---------------------------------------------------------------------

#define UNUSED_PARAM(p)		(void)p


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


// Raspberry PI -------------------------------------------------------------

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



#endif	/* DEF_H */

