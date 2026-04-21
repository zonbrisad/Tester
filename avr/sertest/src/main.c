/**
 *---------------------------------------------------------------------------
 * @brief    Program for testing terminal functions over serial port.
 *
 * @file     main.c
 * @author   Peter Malmberg <peter.malmberg@gmail.com>
 * @version  0.01
 * @date     2026-04-15
 * @license  MIT
 *
 *---------------------------------------------------------------------------
 *
 *
 */
#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>

#include "uart.h"
#include "LEF.h"
#include "def.h"
#include "def_avr.h"
#include "lcd.h"

#define UART_BAUD_RATE 57600
typedef enum {
	EVENT_Timer1 = 0,
    EVENT_Timer_msg,
    EVENT_LCD
} Events;

typedef enum {
    MSG_UPDATE_LCD = 0
} msg_t;

static FILE mystdout = FDEV_SETUP_STREAM((void *)uart_putc, NULL, _FDEV_SETUP_WRITE);

LEF_Timer timer1;
LEF_Timer timer_lcd;
LEF_Timer timer_msg;
LEF_Led   led;

#define LCD_RS_PIN C, 5    /**< pin for RS line         */
// #define LCD_RW_PIN B, 6    /**< pin for Read/Write line */
#define LCD_E_PIN C, 4     /**< pin for Enable line     */
#define LCD_DATA4_PIN C, 3 /**< pin for 4bit data bit 0  */
#define LCD_DATA5_PIN C, 2 /**< pin for 4bit data bit 1  */
#define LCD_DATA6_PIN C, 1 /**< pin for 4bit data bit 2  */
#define LCD_DATA7_PIN C, 0 /**< pin for 4bit data bit 3  */

static uint16_t lcd_gpio_callback(HD44780_MSG msg, uint16_t data_arg) {
    uint16_t result = 0;
    switch (msg) {
        case HD44780_MSG_INIT:
        // gpio_init(LCD_RW_PIN, true, false);
            gpio_init(LCD_RS_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            gpio_init(LCD_E_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            gpio_init(LCD_DATA4_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            gpio_init(LCD_DATA5_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            gpio_init(LCD_DATA6_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            gpio_init(LCD_DATA7_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);
            break;
        case HD44780_MSG_GPIO_DATA_DIRECTION:
            gpio_direction(LCD_DATA4_PIN, data_arg);
            gpio_direction(LCD_DATA5_PIN, data_arg);
            gpio_direction(LCD_DATA6_PIN, data_arg);
            gpio_direction(LCD_DATA7_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_DATA_READ:
            if (gpio_read(LCD_DATA4_PIN)) result |= 0x01;
            if (gpio_read(LCD_DATA5_PIN)) result |= 0x02;
            if (gpio_read(LCD_DATA6_PIN)) result |= 0x04;
            if (gpio_read(LCD_DATA7_PIN)) result |= 0x08;
            break;
        case HD44780_MSG_GPIO_DATA_WRITE:
            gpio_write(LCD_DATA7_PIN, data_arg & 0x80);
            gpio_write(LCD_DATA6_PIN, data_arg & 0x40);
            gpio_write(LCD_DATA5_PIN, data_arg & 0x20);
            gpio_write(LCD_DATA4_PIN, data_arg & 0x10);
            break;
        case HD44780_MSG_GPIO_E:
            gpio_write(LCD_E_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_E_TOGGLE:
            gpio_write(LCD_E_PIN, 1);
            _delay_us(HD44780_DELAY_ENABLE_PULSE);
            gpio_write(LCD_E_PIN, 0);
            break;
        case HD44780_MSG_GPIO_RW:
            // gpio_write(LCD_RW_PIN, data_arg);
            break;
        case HD44780_MSG_GPIO_RS:
            gpio_write(LCD_RS_PIN, data_arg);
            break;
        case HD44780_MSG_DELAY_E:
            _delay_us(HD44780_DELAY_ENABLE_PULSE);
            break;
        case HD44780_MSG_DELAY_US:
            data_arg = data_arg / 10;
            while (data_arg--) _delay_us(10);
            break;
        case HD44780_MSG_BACKLIGHT:
            //TIMER_OCA(3, data_arg);  // set PWM on LCD backlight
            break;

        default:
            break;
    }
    return result;
}

const PROGMEM char cc[][10] = {
		E_BLACK, E_RED, E_GREEN, E_YELLOW, E_BLUE, E_MAGENTA,
		E_CYAN, E_GRAY, E_DARKGRAY, E_BR_RED, E_BR_GREEN, E_BR_YELLOW,
		E_BR_BLUE, E_BR_MAGENTA, E_BR_CYAN, E_WHITE};

static void fill_screen(void) {
    for (size_t i = 1; i <= 24; i++) {
        if ((i == 1) || (i == 24)) {
            printf_P(PSTR("+----%2d--+--------+--------+--------+--------+-----"
                          "---+--------+--------+"),
                     i);
            // continue;
        } else
            printf_P(PSTR("Line %2d"), i);

        if (i < 24) printf_P(PSTR("\n"));
    }
}

static void cmd_erase(char* args) {
    UNUSED(args);
    // fill_screen();
    printf(E_ERASE_DISPLAY);
}
static void cmd_eraseb(char* args) {
    UNUSED(args);
    // fill_screen();
    printf(E_CUR_POS(12, 1));
    printf(E_ERASE_DISPLAY_TO_END);
}
static void cmd_erasea(char* args) {
    UNUSED(args);
    // fill_screen();
    printf(E_CUR_POS(12, 1));
    printf(E_ERASE_DISPLAY_TO_BEGINING);
}
static void cmd_erasela(char* args) {
    UNUSED(args);
    printf(E_SAVE_CURSOR_POS E_CUR_PREVIOUS_LINE);
    printf(E_ERASE_LINE_TO_END);
    printf(E_RESTORE_CURSOR_POS);
}
static void cmd_delete(char* args) {
    UNUSED(args);
    fill_screen();
    printf(E_SAVE_CURSOR_POS);
    printf(E_CUR_POS(5, 1));
    LEF_Delay(30);
    for (size_t i = 0; i < 10; i++) {
        printf(E_DELETE_LINE);
        LEF_Delay(15);
    }
    printf(E_RESTORE_CURSOR_POS);
    printf_P(PSTR("\n"));
}
static void cmd_insert(char* args) {
    UNUSED(args);
    fill_screen();
    printf(E_SAVE_CURSOR_POS);
    printf(E_CUR_POS(5, 1));
    LEF_Delay(30);
    for (size_t i = 0; i < 10; i++) {
        printf_P(PSTR(E_INSERT_LINE));
        LEF_Delay(15);
    }
    printf_P(PSTR(E_RESTORE_CURSOR_POS));
    printf_P(PSTR("\n"));
}

#define BAR 25
static void print_bar(size_t l, size_t max) {
    char buf[96];
	UNUSED(max);
    for (size_t i = 0; i < l; i++) {
        buf[i] = '=';
    }
    buf[l] = '\0';
    printf_P(PSTR("  [%-25s]  %2d"), buf, l);
}

static void cmd_bar(char* args) {
    UNUSED(args);
    for (size_t i = 0; i <= BAR; i++) {
        print_bar(i, BAR);
        LEF_Delay(5);
        printf("\r");
    }
    printf("\n");
}

#define MRT 23
static void cmd_mrtcu(char* args) {
    UNUSED(args);
    for (size_t j = 0; j < 20; j++) {
        for (size_t i = 0; i < MRT; i++) {
            printf_P(PSTR("Row  %2d %2d\n"), i, j + i);
        }

        if (j < 19) {
            for (size_t i = 0; i < MRT; i++) {
                printf(E_CUR_UP);
            }
        }
        _delay_ms(100);
    }
    printf("\n");
}

static void cmd_mrtcp(char* args) {
    UNUSED(args);
    for (size_t j = 0; j < 20; j++) {
        for (size_t i = 0; i < MRT; i++) {
            printf_P(PSTR("Row  %2d %2d\n"), i, j + i);
        }

        if (j < 19) printf(E_CUR_POS(1, 1));
        _delay_ms(100);
    }
    printf_P(PSTR("\n"));
}

#define E_FG256(x) "\e[38;5;" #x "m"
#define E_BG256(x) "\e[48;5;" #x "m"
#define E_FG256P "\e[38;5;%dm"
#define E_BG256P "\e[48;5;%dm"

static void cmd_c16(char* args) {
    char buf[192];
    char* p;
    UNUSED(args);

    p = buf;

    for (size_t i = 0; i < 16; i++) {
        printf(E_FG256P " %2d " E_RESET, i, i);
        p += sprintf(p, E_BG256P " %2d " E_RESET, i, i);
        p++;
        p[0] = ' ';
        p--;

        if ((i == 7) || (i == 15)) {
            p = buf;
            printf_P(PSTR("       %s\n"), buf);
        }
    }
    printf("\n");
}

static void cmd_c256(char* args) {
    char buf[128];
    char* p;
    UNUSED(args);

    cmd_c16("");

    p = buf;

    for (size_t i = 16; i < 256; i++) {
        printf_P(PSTR(E_FG256P " %4d " E_RESET), i, i);
        p += sprintf(p, E_BG256P " %4d " E_RESET, i, i);
        p++;
        p[0] = ' ';
        p--;
        if (((i - 15) % 6) == 0) {
            p = buf;
            printf("  %s\n", buf);
        }
    }
}

static void cmd_attr(char* args) {
    UNUSED(args);
    printf_P(PSTR("Text attributes\n"));
    printf_P(PSTR(E_RESET "Normal text\n"));
    printf_P(PSTR(E_BOLD "Bold text" E_RESET "\n"));
    printf_P(PSTR(E_DIM "Dim text" E_RESET "\n"));
    printf_P(PSTR(E_ITALIC "Italic text" E_RESET "\n"));
    printf_P(PSTR(E_UNDERLINE "Underline text" E_RESET "\n"));
    printf_P(PSTR(E_BLINK "Blink text" E_RESET "\n"));
    printf_P(PSTR(E_REVERSE "Reverse text" E_RESET "\n"));
    printf_P(PSTR(E_CROSSED "Crossed text" E_RESET "\n"));
    printf_P(PSTR(E_OVERLINED "Overlined text" E_RESET "\n"));

    /*
     * Keep this code!
     * It produce a weird rendering error from attribute Underline and forward
     * Probably a bug in mpterm terminal renderer.
     */
    /*
      printf(E_BOLD "Bold text\n" E_RESET);
            printf(E_DIM "Dim text\n" E_RESET);
            printf(E_ITALIC "Italic text\n" E_RESET);
            printf(E_UNDERLINE "Underline text\n" E_RESET);
            printf(E_BLINK "Blink text\n" E_RESET);
            printf(E_REVERSE "Reverse text\n" E_RESET);
            printf(E_CROSSED "Crossed text\n" E_RESET);
            printf(E_OVERLINED "Overlined text\n" E_RESET);
    */
}

static void print_rows(size_t r) {
    for (size_t i = 1; i <= r; i++) {
        printf_P(PSTR("Row %d\n"), i);
    }
}

static void cmd_r100(char* args) {
    UNUSED(args);
    print_rows(100);
}

static void cmd_r1000(char* args) {
    UNUSED(args);
    print_rows(1000);
}

static void cmd_r10000(char* args) {
    UNUSED(args);
    print_rows(10000);
}

static void cmd_help(char* args) {
    UNUSED(args);
    LEF_Cli_print();
}

const PROGMEM LEF_CliCmd commands[] = {
    LEF_CLI_LABEL("Text attributes"),
    {cmd_attr, "attr", "Print attributes"},
    {cmd_c16, "c16", "Print 16 terminal colors"},
    {cmd_c256, "c256", "Print 256 terminal colors"},
    LEF_CLI_LABEL("Erase tests"),
    {cmd_erase, "erase", "Clear entire screen"},
    {cmd_erasea, "erasea", "Clear all above cursor"},
    {cmd_eraseb, "eraseb", "Clear all below screen"},
    {cmd_erasela, "erasela", "Erase line above"},
    LEF_CLI_LABEL("Scrolling"),
    {cmd_insert, "insert", "Insert line"},
    {cmd_delete, "delete", "Delete line"},
    LEF_CLI_LABEL("Generators"),
    {cmd_r100, "r100", "Print 100 rows"},
    {cmd_r1000, "r1000", "print 1000 rows"},
    {cmd_r10000, "r10000", "print 10000 rows"},
    LEF_CLI_LABEL("Animators"),
    {cmd_bar, "bar", "Print progressbar"},
    LEF_CLI_LABEL("Tests"),
    {cmd_mrtcu, "mrtcu", "Multirow Cursor Up test"},
    {cmd_mrtcp, "mrtcp", "Multirow Cursor Position test"},
    LEF_CLI_LABEL("Other"),
    {(void*)(char*)LEF_print_sysinfo, "info", "System info"},
    {cmd_help, "help", "Print help information"},
};

ISR(TIMER1_COMPA_vect) {
    TIMER1_RELOAD(0);
    LEF_systick();
    LEF_Timer_update(&timer1);
    LEF_Timer_update(&timer_lcd);
    LEF_Timer_update(&timer_msg);
	ARDUINO_LED_SET(LEF_Led_update(&led));
}

static void update_lcd(uint8_t msg) {
    char buf[16];
    switch (msg) {
        case 0:
            lcd_gotoxy(0, 0);
            lcd_puts_P("Terminal tester");
            lcd_gotoxy(0, 1);
            lcd_puts_P("  57600 bits/s");
            break;
        case 1:
            lcd_gotoxy(0, 0);
            sprintf(buf, "Rx: %6lu", rx_bytes);
            lcd_puts(buf);
            lcd_gotoxy(0, 1);
            sprintf(buf, "Tx: %6lu", tx_bytes);
            lcd_puts(buf);
            break;
        default:
            break;
    }
}

#define LCD_BACKLIGHT_PIN D,6
static void hw_init(void) {
    stdout = &mystdout;

	ARDUINO_LED_INIT();

    // Timer 0 (8 bit) setup for PWM on OCA0 for LCD backlight control
    TIMER0_CLK_PRES_64();
    TIMER0_WGM_FAST_PWM();
    TIMER0_OM_CLEAR();
    TIMER0_OCA_SET(200  );
    gpio_init(LCD_BACKLIGHT_PIN, GPIO_OUTPUT, GPIO_NO_PULLUP);

    // Timer 1 (16 bit) Sytem timer
    TIMER1_CLK_PRES_256();  // set prescaler to 1/1024
    TIMER1_OCA_SET(625);
    TIMER1_OCA_IE();  // enable output compare A interrupt

    uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));

    lcd_init(lcd_gpio_callback, HD44780_MODE_ON);
    update_lcd(0);

    sei();  // Enable all interrupts
}

static bool pre_event_handler(LEF_Event *event) {
    if (event->id == EVENT_LCD) {
        update_lcd(1);
        return true;
    }
    return false;
}

static bool main_event_handler(LEF_Event *event) {
    uint16_t ch;
    switch (event->id) {
        case EVENT_Timer1:
            ch = uart_getc();
            while ((ch & 0xff00) != UART_NO_DATA) {
                LEF_Cli_putc(ch);
                ch = uart_getc();
            }
            break;
        case LEF_EVENT_CLI:
            LEF_Cli_exec(event);
            break;

        case EVENT_Timer_msg:
            switch (event->func) {
                case MSG_UPDATE_LCD:
                    LEF_Timer_start_repeat(&timer_lcd, 10);
                    lcd_clear();
                    update_lcd(1);
                    break;
                default:
                    break;
            }
            break;
    }
    return true;
}

int main() {
 	
	LEF_init();
	LEF_Led_init(&led, LED_BLINK);
    LEF_Timer_init(&timer1, EVENT_Timer1);
    LEF_Timer_start_repeat(&timer1, 10);
    LEF_Timer_init(&timer_lcd, EVENT_LCD);
    // LEF_Timer_start_repeat(&timer_lcd, 10);
    LEF_Timer_init(&timer_msg, EVENT_Timer_msg);
    LEF_Timer_start_single_msg(&timer_msg, 400, MSG_UPDATE_LCD);
	LEF_CLI_INIT(commands);

    hw_init();

    printf_P(PSTR("\n\nSerial terminal testprogram\n\n"));

    LEF_Run(main_event_handler, pre_event_handler);

    return 0;
}
