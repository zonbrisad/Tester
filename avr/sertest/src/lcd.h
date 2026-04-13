/**
 * Platform independent driver for HD44780 based LCDs.
 * 
 * @author Peter Malmberg
 * 
 * @brief Some basic functions for driving LCD's based on HD44780 chips.
 * 
 * The driver supports 4-bit IO mode only. Hardware interfacing is done via a callback function.
 */
#pragma once

#include <inttypes.h>
#include <stdbool.h>

#if defined(__AVR__)
#include <avr/pgmspace.h>
#endif

typedef enum {
    HD44780_MSG_INIT,
    HD44780_MSG_GPIO_E,
    HD44780_MSG_GPIO_RS,
    HD44780_MSG_GPIO_RW,
    HD44780_MSG_GPIO_E_TOGGLE,
    HD44780_MSG_GPIO_DATA_READ,
    HD44780_MSG_GPIO_DATA_WRITE,
    HD44780_MSG_GPIO_DATA_DIRECTION,
    HD44780_MSG_DELAY_US,
    HD44780_MSG_DELAY_E,
    HD44780_MSG_BACKLIGHT,
} HD44780_MSG;

typedef uint16_t (*hd4470_callback)(HD44780_MSG msg, uint16_t data);

/**
 * At init a callback function must be given. It is via this function that the library
 * interfaces with the hardware. This makes the library relatively hardware independent.
 * The driver will "ask" the callback to perform instruction that it messages to the callback. 
 * The different messages are listed above. The simplest is probably to implement a switch statement
 * where the different messages are handle with case statements. Se below. 
 *
 * GPIO pins:
 * RW
 * RS
 * E
 * DB4 - DB7
 * 
 * @code
 * uint16_t my_lcd_cb(D44780_MSG msg, uint16_t data) {
 *     switch (msg) {
 *     case HD44780_MSG_INIT:
 *         // Initiate gpio
 *         break;
 *     case HD44780_MSG_GPIO_E:
 *         // set gpio E if data>0, clear if 0
 *         break;    
 *     case ...  // and so on
 *     }
 * }
 * @endcode
 */

/**@{*/

/**
 * LCD controller type setting
 *
 * 0 for HD44780 controller, 1 for KS0073
 */
#define HD44780_CONTROLLER_KS0073 0 

/**
 * LCD geometry settings
 */
#define HD44780_DISP_LINES            2     // Number of lines on display
#define HD44780_DISP_COLUMNS         20     // Number of columns on display

/**
 * Various bus related delays.
 * 
 * The delays can be adjusted if needed. Various chips may have varying timing.
 */
#define HD44780_DELAY_BOOTUP       16000   // (us) delay in micro seconds after power-on 
#define HD44780_DELAY_INIT          5000   // (us) after initialization command sent 
#define HD44780_DELAY_INIT_REP        70   // (us) after initialization command repeated
#define HD44780_DELAY_INIT_4BIT       70   // (us) after setting 4-bit mode 
#define HD44780_DELAY_BUSY             4   // (us) time in micro seconds the address counter is updated after busy flag is cleared
#define HD44780_DELAY_ENABLE_PULSE     1   // (us) enable signal pulse width in micro seconds
#define HD44780_DELAY_CMD             50   // (us) delay for command or data transmition
#define HD44780_DELAY_CMD_CLR       2000   // (us) delay for clear display or cursor home

/** 
 * HD44780 LCD instructions. 
 *
 * Instruction         RS R/W DB7 DB6 DB5 DB4 DB3 DB2 DB1 DB0  Description
 * Clear display       0   0   0   0   0   0   0   0   0   1   Clear entire display
 * Return home         0   0   0   0   0   0   0   0   1   -   Return cursor to home
 * Entry mode set      0   0   0   0   0   0   0   1  I/D  S   Set cursor move direction(I/D) and 
 *                                                             specifies display shift (S)
 * Display control     0   0   0   0   0   0   1   D   C   B   Sets entire display (D) on/off, 
 *                                                             cursor on/off (C), and 
 *                                                             blinking of cursor position character (B).
 * Cursor/display move 0   0   0   0   0   1  S/C R/L  -   -   Moves cursor and shifts display 
 *                                                             without changing DDRAM contents.
 * Function set        0   0   0   0   1   DL  N   F   -   -   Sets interface data length (DL), 
 *                                                             number of display lines (N), 
 *                                                             and character font (F).
 * Set CGRAM address   0   0   0   1  ACG ACG ACG ACG ACG ACG  Sets CGRAM address 
 * Set DDRAM address   0   0   1  ADD ADD ADD ADD ADD ADD ADD  Sets DDRAM address
 * Busyflag & address  0   1   BF  AC  AC  AC  AC  AC  AC  AC  Reads busy flag (BF), and
 *                                                             address counter (AC)
 * I/D = 1:  Increment
 * I/D = 0:  Decrement
 * S   = 1:  Accompanies display shift
 * S/C = 1:  Display shift
 * S/C = 0:  Cursor move
 * R/L = 1:  Shift to the right
 * R/L = 0:  Shift to the left
 * DL  = 1:  8 bits
 * DL  = 0:  4 bits
 * N   = 1:  2 lines
 * N   = 0:  1 line
 * F   = 1:  5x10 dots
 * F   = 0:  5x8 dots
 * BF  = 1:  Internaly operating (busy)
 * BF  = 0:  Instructions acceptable (not busy)
 *        
 * 
 * DDRAM: Display Data Ram
 * CGRAM: Character Generator RAM
 * ACG:   CGRAM address
 * ADD:   DDRAM address
 * AC: Address Counter                                                            
 */


#define HD44780_INST_CLEAR          0b00000001
#define HD44780_INST_HOME           0b00000010
#define HD44780_INST_ENTRY_MODE     0b00000100
#define HD44780_INST_CONTROL        0b00001000
#define HD44780_INST_MOVE           0b00010000
#define HD44780_INST_FUNCTION       0b00100000
#define HD44780_INST_CGRAM          0b01000000
#define HD44780_INST_DDRAM          0b10000000

#define HD44780_BUSY_FLAG          0b10000000

#define HD44780_ENTRY_DEC_NOSHIFT  (HD44780_INST_ENTRY_MODE | 0b00000000) // decrease cursor on move, display shift off
#define HD44780_ENTRY_DEC_SHIFT    (HD44780_INST_ENTRY_MODE | 0b00000001) // decrease cursor on move, display shift on
#define HD44780_ENTRY_INC_NOSHIFT  (HD44780_INST_ENTRY_MODE | 0b00000010) // decrease cursor on move, display shift off
#define HD44780_ENTRY_INC_SHIFT    (HD44780_INST_ENTRY_MODE | 0b00000011) // decrease cursor on move, display shift on

#define HD44780_MODE_OFF             (HD44780_INST_CONTROL | 0b00000000)
#define HD44780_MODE_ON              (HD44780_INST_CONTROL | 0b00000100)
#define HD44780_MODE_ON_CURSOR       (HD44780_INST_CONTROL | 0b00000110)
#define HD44780_MODE_ON_CURSOR_BLINK (HD44780_INST_CONTROL | 0b00000111)

#define HD44780_MOVE_CURSOR_LEFT   (HD44780_INST_MOVE | 0b00000000)
#define HD44780_MOVE_CURSOR_RIGHT  (HD44780_INST_MOVE | 0b00000100)
#define HD44780_MOVE_DISPLAY_LEFT  (HD44780_INST_MOVE | 0b00001000)
#define HD44780_MOVE_DISPLAY_RIGHT (HD44780_INST_MOVE | 0b00001100)

#define LCD_FUNCTION_10DOTS        2      
#define HD44780_FUNC_8BIT          0b00010000
#define HD44780_FUNC_2LINES        0b00001000
#define HD44780_FUNC_10DOTS        0b00000100   

#define HD44780_FUNC_4BIT_1LINE    (HD44780_INST_FUNCTION)
#define HD44780_FUNC_4BIT_2LINES   (HD44780_INST_FUNCTION | HD44780_FUNC_2LINES)
#define HD44780_FUNC_8BIT_1LINE    (HD44780_INST_FUNCTION | HD44780_FUNC_8BIT)
#define HD44780_FUNC_8BIT_2LINES   (HD44780_INST_FUNCTION | HD44780_FUNC_8BIT | HD44780_FUNC_2LINES)

#define HD44780_MODE_DEFAULT       HD44780_ENTRY_INC_NOSHIFT
#define HD44780_INIT_SEQ           0b00110000  
#define HD44780_4BIT_MODE          0b00100000  // Put LCD in 4 bit mode

extern volatile bool lcd_wrap;
extern hd4470_callback lcd_callback;

/**
 * @brief   Initialize display an set mode
 * @param   mode HD44780_OFF            
 *               HD44780_ON             
 *               HD44780_ON_CURSOR      
 *               HD44780_ON_CURSOR_BLINK
 */
extern void lcd_init(hd4470_callback callback, uint8_t mode);

/**
 * @brief   Send LCD controller instruction command
 * 
 * @param   cmd instruction to send to LCD controller, see HD44780 data sheet
 */
extern void lcd_send_command(uint8_t cmd);

/**
 * @brief   Clear display and set cursor to home position
 */
inline void lcd_clear(void) { lcd_send_command(HD44780_INST_CLEAR); }

// inline void lcd_wrap_enable(bool enable) { lcd_wrap = enable; }

/**
 * @brief Move cursor to home position in the upper left corner (0,0)
 * 
 */
inline void lcd_home(void) { lcd_send_command(HD44780_INST_HOME); }


inline void lcd_move_right(void) { lcd_send_command(HD44780_MOVE_DISPLAY_RIGHT); }
inline void lcd_move_left(void) { lcd_send_command(HD44780_MOVE_DISPLAY_LEFT); }

/**
 * @brief Set operating mode of display
 * 
 * @param mode new operating mode
 */
inline void lcd_mode(uint8_t mode) { lcd_send_command(mode); }

/**
 * @brief Turn display on
 *
 */
inline void lcd_on(void) { lcd_send_command(HD44780_MODE_ON); }

/**
 * @brief Turn display on and show cursor
 */
inline void lcd_on_cursor(void) { lcd_send_command(HD44780_MODE_ON_CURSOR); }

/**
 * @brief Turn display on and show cursor blinking
 */
inline void lcd_on_cursor_blink(void) { lcd_send_command(HD44780_MODE_ON_CURSOR_BLINK); }

/**
 * @brief Turn display off
 */
inline void lcd_off(void) { lcd_send_command(HD44780_MODE_OFF); }

/**
 * @brief Control lcd backlight
 * 
 * @param val 0 = off, >0 on or variable intensity 
 */
inline void lcd_backlight(uint16_t val) { lcd_callback(HD44780_MSG_BACKLIGHT, val); }

/**
 * Move cursor to new position
 *
 * @param x horizontal position, 0 is at the left
 * @param y horizontal position, 0 is the first line
 */
extern void lcd_gotoxy(uint8_t x, uint8_t y);

/**
 * @brief    Insert character at cursor position
 * @param    c character to be inserted                               
 */
extern void lcd_putc(char c);


/**
 * @brief    Insert string at cursor position
 * @param    s string to be inserted                               
 */
extern void lcd_puts(const char *s);

/**
 * @brief    Send data byte to LCD controller 
 *
 * @param    data data to be sent to controller
 */
extern void lcd_send_data(uint8_t data);

#if defined(__AVR__)
/**
 * @brief    Insert string from AVR program memory
 * @param    progmem_s string from program memory be be inserted                                      
 */
extern void lcd_puts_p(const char *progmem_s);

/**
 * @brief Convenience macro
 */
#define lcd_puts_P(__s)         lcd_puts_p(PSTR(__s))

#endif


