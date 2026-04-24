
/** 
 * External references
 * 
 * https://github.com/damadmai/pfleury
 * https://github.com/efthymios-ks/AVR-HD44780
 * https://github.com/aostanin/avr-hd44780?tab=readme-ov-file
 *
 */

#include "lcd.h"

#include <inttypes.h>
#include <stdbool.h>

#if defined(__AVR__)
#include <avr/pgmspace.h>
#include <util/delay.h>
#define lcd_delay_us(us) _delay_us(us)
#endif

#if defined(PICO_BOARD)
#include "pico/stdlib.h"
#define lcd_delay_us(us) sleep_us(us)
#endif

static uint16_t do_nothing_callback(HD44780_MSG msg, uint16_t data_arg) {
    (void)msg;
    (void)data_arg;
    return 0;
}

hd44780_callback lcd_callback = do_nothing_callback;

#if HD44780_CONTROLLER_KS0073
const uint8_t line_offsets[] = {00, 32, 64, 96};
#else
const uint8_t line_offsets[] = {00, 64, 20, 84};
#endif

inline void lcd_delay(uint16_t us)              { lcd_callback(HD44780_MSG_DELAY_US, us); }
inline void lcd_gpio_init(void)                 { lcd_callback(HD44780_MSG_INIT, 0); }  // initiate gpio pins
inline void lcd_pin_e_delay(void)               { lcd_callback(HD44780_MSG_DELAY_E, 0); }
inline void lcd_pin_e_set(bool state)           { lcd_callback(HD44780_MSG_GPIO_E, state); }
inline void lcd_pin_e_toggle(void)              { lcd_callback(HD44780_MSG_GPIO_E_TOGGLE, 0); }
inline void lcd_pin_rw_set(bool state)          { lcd_callback(HD44780_MSG_GPIO_RW, state); }
inline void lcd_pin_rs_set(bool state)          { lcd_callback(HD44780_MSG_GPIO_RS, state); }
inline void lcd_pins_data_direction(bool write) { lcd_callback(HD44780_MSG_GPIO_DATA_DIRECTION, write);}
inline void lcd_pins_data_write(uint8_t data)   { lcd_callback(HD44780_MSG_GPIO_DATA_WRITE, data); }
inline uint8_t lcd_pins_data_read(void)         { return lcd_callback(HD44780_MSG_GPIO_DATA_READ, 0); }


#define HD44780_START_LINE1  line_offsets[0]
#define HD44780_START_LINE2  line_offsets[1]
#define HD44780_START_LINE3  line_offsets[2]
#define HD44780_START_LINE4  line_offsets[3]


#if HD44780_DISP_LINES == 1
#define LCD_FUNCTION_DEFAULT HD44780_FUNC_4BIT_LINE
#else
#define LCD_FUNCTION_DEFAULT HD44780_FUNC_4BIT_2LINES
#endif

#if HD44780_CONTROLLER_KS0073
#if LCD_LINES == 4

#define KS0073_EXTENDED_FUNCTION_REGISTER_ON \
    0x2C /* |0|010|1100 4-bit mode, extension-bit RE = 1 */
#define KS0073_EXTENDED_FUNCTION_REGISTER_OFF \
    0x28 /* |0|010|1000 4-bit mode, extension-bit RE = 0 */
#define KS0073_4LINES_MODE 0x09 /* |0|000|1001 4 lines mode */

#endif
#endif

/**
 * Write byte to display controller
 * 
 * @param data byte to be written
 * @param rs 0=instruction, 1=data
 */
static void lcd_write(uint8_t data, uint8_t rs) {

    lcd_pin_rs_set(rs);
    lcd_pin_rw_set(0);  

    lcd_pins_data_direction(true);
    lcd_pins_data_write(data);
    lcd_pin_e_toggle();
        
    lcd_pins_data_write(data<<4);
    lcd_pin_e_toggle();

    lcd_pins_data_write(0b11110000);
}

/**
 * Read byte from display controller
 *
 * @param rs 0=busy flag, 1=data
 * @return byte read from controller
//  */
// static uint8_t lcd_read(uint8_t rs) {
//     uint8_t data = 0;

//     lcd_pin_rs_set(rs);
//     lcd_pin_rw_set(1);    /* RW=1  read mode      */

//     lcd_pins_data_direction(false);  // set data pins as inputs

//     /* read high nibble first */
//     lcd_pin_e_set(1);
//     lcd_pin_e_delay();
//     data = lcd_pins_data_read();
//     lcd_pin_e_set(0);

//     data = data << 4;

//     lcd_pin_e_delay();  /* Enable 500ns low       */

//     /* read low nibble */
//     lcd_pin_e_set(1);
//     lcd_pin_e_delay();
//     data |= lcd_pins_data_read();
//     lcd_pin_e_set(0);
//     return data;
// }

/**
 * Send instruction to LCD controller
 * 
 * @param cmd command instruction 
 */
void lcd_send_command(uint8_t cmd) {
    lcd_write(cmd, 0);
    if ((cmd == HD44780_INST_CLEAR) | (cmd == HD44780_INST_HOME))
        lcd_delay_us(HD44780_DELAY_CMD_CLR);
    else
        lcd_delay_us(HD44780_DELAY_CMD);
}

/**
 * Send data to LCD controller
 * 
 * @param data data to be sent
 */
void lcd_send_data(uint8_t data) {
    lcd_write(data, 1);
    lcd_delay_us(HD44780_DELAY_CMD);
}

void lcd_gotoxy(uint8_t x, uint8_t y) {
    lcd_send_command(HD44780_INST_DDRAM + line_offsets[y] + x);
}

void lcd_putc(char c) {
    lcd_send_data(c);
} 

void lcd_puts(const char* s) {
    register char c;

    while ((c = *s++)) {
        lcd_putc(c);
    }
} 

void lcd_init(hd44780_callback callback, uint8_t mode) {
    lcd_callback = callback;

    // initiate gpio pins and set as outputs
    lcd_gpio_init();            
    lcd_pins_data_direction(true);
    lcd_pins_data_write(0b11110000);

    // waiting for controller to initiate
    lcd_delay(HD44780_DELAY_BOOTUP); 

    lcd_pins_data_write(HD44780_INIT_SEQ); 

    lcd_pin_e_toggle();
    lcd_delay(HD44780_DELAY_INIT); 

    lcd_pin_e_toggle();
    lcd_delay(HD44780_DELAY_INIT_REP); 

    lcd_pin_e_toggle();
    lcd_delay(HD44780_DELAY_INIT_REP); 

    // set 4-bit mode
    lcd_pins_data_write(HD44780_4BIT_MODE); 
    lcd_pin_e_toggle();
    lcd_delay(HD44780_DELAY_INIT_4BIT); 

    // controller now in 4-bit mode

// #if KS0073_4LINES_MODE
//     lcd_command(KS0073_EXTENDED_FUNCTION_REGISTER_ON);
//     lcd_command(KS0073_4LINES_MODE);
//     lcd_command(KS0073_EXTENDED_FUNCTION_REGISTER_OFF);
// #else
//     lcd_send_command(LCD_FUNCTION_DEFAULT); /* function set: display lines  */
// #endif


    lcd_send_command(LCD_FUNCTION_DEFAULT); /* function set: display lines  */

    //lcd_send_command(HD44780_MODE_OFF);
    lcd_off();

    lcd_clear();  // clear display

    lcd_send_command(HD44780_MODE_DEFAULT);  // entry mode

    lcd_send_command(mode);  // display/cursor mode
}

#if defined(__AVR__)

void lcd_puts_p(const char* progmem_s) {
    register char c;

    while ((c = pgm_read_byte(progmem_s++))) {
        lcd_putc(c);
    }
}

#endif