/**
 *---------------------------------------------------------------------------
 * @brief    Test of HD44780 type lcd.
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-24
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */

// Include ------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "pico/stdlib.h"
#include "main.h"

#include "lcd.h"


// Macros -------------------------------------------------------------------


// Prototypes ---------------------------------------------------------------


// Datatypes ----------------------------------------------------------------


// Variables ----------------------------------------------------------------
const uint LED_PIN = 25;


// Code ---------------------------------------------------------------------

#define LCD_RS_PIN 13    /**< pin for RS line         */
#define LCD_RW_PIN 12    /**< pin for Read/Write line */
#define LCD_E_PIN 11     /**< pin for Enable line     */
#define LCD_DATA4_PIN 18 /**< pin for 4bit data bit 0  */
#define LCD_DATA5_PIN 19 /**< pin for 4bit data bit 1  */
#define LCD_DATA6_PIN 20 /**< pin for 4bit data bit 2  */
#define LCD_DATA7_PIN 21 /**< pin for 4bit data bit 3  */

static uint16_t lcd_gpio_callback(HD44780_MSG msg, uint16_t data_arg) {
    uint16_t result = 0;
    switch (msg) {
        case HD44780_MSG_INIT:
            gpio_init(LCD_E_PIN);
            gpio_init(LCD_RW_PIN);
            gpio_init(LCD_RS_PIN);
            gpio_init(LCD_DATA4_PIN);
            gpio_init(LCD_DATA5_PIN);
            gpio_init(LCD_DATA6_PIN);
            gpio_init(LCD_DATA7_PIN);
            gpio_set_dir(LCD_E_PIN, GPIO_OUT);
            gpio_set_dir(LCD_RW_PIN, GPIO_OUT);
            gpio_set_dir(LCD_RS_PIN, GPIO_OUT);
            gpio_set_dir(LCD_DATA4_PIN, GPIO_OUT);
            gpio_set_dir(LCD_DATA5_PIN, GPIO_OUT);
            gpio_set_dir(LCD_DATA6_PIN, GPIO_OUT);
            gpio_set_dir(LCD_DATA7_PIN, GPIO_OUT);

            break;
        case HD44780_MSG_GPIO_DATA_DIRECTION:
            gpio_set_dir(LCD_DATA4_PIN, data_arg);
            gpio_set_dir(LCD_DATA5_PIN, data_arg);
            gpio_set_dir(LCD_DATA6_PIN, data_arg);
            gpio_set_dir(LCD_DATA7_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_DATA_READ:
            break;
        case HD44780_MSG_GPIO_DATA_WRITE:
            gpio_put(LCD_DATA7_PIN, data_arg & 0x80);
            gpio_put(LCD_DATA6_PIN, data_arg & 0x40);
            gpio_put(LCD_DATA5_PIN, data_arg & 0x20);
            gpio_put(LCD_DATA4_PIN, data_arg & 0x10);
            break;
        case HD44780_MSG_GPIO_E:
            gpio_put(LCD_E_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_E_TOGGLE:
            gpio_put(LCD_E_PIN, 1);
            sleep_us(HD44780_DELAY_ENABLE_PULSE);
            gpio_put(LCD_E_PIN, 0);
            break;
        case HD44780_MSG_GPIO_RW:
            gpio_put(LCD_RW_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_RS:
            gpio_put(LCD_RS_PIN, data_arg);
            break;
        case HD44780_MSG_DELAY_E:
            sleep_us(HD44780_DELAY_ENABLE_PULSE);
            break;
        case HD44780_MSG_DELAY_US:
            data_arg = data_arg / 10;
            while (data_arg--) sleep_us(10);
            break;
        case HD44780_MSG_BACKLIGHT:
            //TIMER_OCA(3, data_arg);  // set PWM on LCD backlight
            break;

        default:
            break;
    }
    return result;
}

static void hw_init(void) {
    stdio_init_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    lcd_init(lcd_gpio_callback, HD44780_MODE_ON);
}

int main(void) {

    hw_init();
    
    gpio_put(LED_PIN, 1);
    printf("HD44780 LCD test.\n");
    
    lcd_gotoxy(0, 0);
    lcd_puts("Hello, world!");
    lcd_gotoxy(0, 1);
    lcd_puts("HD44780 LCD test");
    sleep_ms(5000);
    
    while(true) {
    }
    return 0;
}
