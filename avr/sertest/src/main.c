
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#include "uart.h"
#include "main.h"
#include "LEF.h"
#include "def.h"

#define UART_BAUD_RATE 57600

void hw_init(void);
void printSysInfo(void);

void cmd_help(char *args);
void cmd_c16(char *args);
void cmd_c256(char *args);
void cmd_attr(char *args);
void cmd_r100(char *args);
void cmd_r1000(char *args);
void cmd_r10000(char *args);
void cmd_bar(char *args);
void cmd_mrtcu(char *args);
void cmd_mrtcp(char *args);
void cmd_erase(char *args);
void cmd_erasea(char *args);
void cmd_eraseb(char *args);
void cmd_erasela(char *args);
void cmd_insert(char *args);
void cmd_delete(char *args);

typedef enum
{
	EVENT_Timer1 = 0,
} Events;

static FILE mystdout = FDEV_SETUP_STREAM((void *)uart_putc, NULL, _FDEV_SETUP_WRITE);

LEF_Timer timer1;

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
		{printSysInfo, "info", "System info"},
		{cmd_help, "help", "Print help information"},
};

const PROGMEM char cc[][10] = {
		E_BLACK, E_RED, E_GREEN, E_YELLOW, E_BLUE, E_MAGENTA,
		E_CYAN, E_GRAY, E_DARKGRAY, E_BR_RED, E_BR_GREEN, E_BR_YELLOW,
		E_BR_BLUE, E_BR_MAGENTA, E_BR_CYAN, E_WHITE};
// const PROGMEM char bgcc[][10] = {
// 	E_BLACK, E_RED, E_GREEN, E_YELLOW, E_BLUE, E_MAGENTA,
// 	E_CYAN, E_GRAY, E_DARKGRAY, E_BR_RED, E_BR_GREEN, E_BR_YELLOW,
// 	E_BR_BLUE, E_BR_MAGENTA, E_BR_CYAN, E_WHITE};

void fill_screen(void);
void fill_screen(void)
{
	for (size_t i = 1; i <= 24; i++)
	{
		if ((i == 1) || (i == 24))
		{
			printf_P(PSTR("+----%2d--+--------+--------+--------+--------+--------+--------+--------+"), i);
			// continue;
		}
		else
			printf_P(PSTR("Line %2d"), i);

		if (i < 24)
			printf_P(PSTR("\n"));
	}
}

void cmd_erase(char *args)
{
	UNUSED(args);
	// fill_screen();
	printf(E_ERASE_DISPLAY);
}
void cmd_eraseb(char *args)
{
	UNUSED(args);
	// fill_screen();
	printf(E_CUR_POS(12, 1));
	printf(E_ERASE_DISPLAY_TO_END);
}
void cmd_erasea(char *args)
{
	UNUSED(args);
	// fill_screen();
	printf(E_CUR_POS(12, 1));
	printf(E_ERASE_DISPLAY_TO_BEGINING);
}
void cmd_erasela(char *args)
{
	UNUSED(args);
	printf(E_SAVE_CURSOR_POS E_CUR_PREVIOUS_LINE);
	printf(E_ERASE_LINE_TO_END);
	printf(E_RESTORE_CURSOR_POS);
}
void cmd_delete(char *args)
{
	UNUSED(args);
	fill_screen();
	printf(E_SAVE_CURSOR_POS);
	printf(E_CUR_POS(5, 1));
	_delay_ms(300);
	for (size_t i = 0; i < 10; i++)
	{
		printf(E_DELETE_LINE);
		_delay_ms(300);
	}
	printf(E_RESTORE_CURSOR_POS);
	printf_P(PSTR("\n"));
}
void cmd_insert(char *args)
{
	UNUSED(args);
	fill_screen();
	printf(E_SAVE_CURSOR_POS);
	printf(E_CUR_POS(5, 1));
	_delay_ms(300);
	for (size_t i = 0; i < 10; i++)
	{
		printf(E_INSERT_LINE);
		_delay_ms(300);
	}
	printf(E_RESTORE_CURSOR_POS);
	printf_P(PSTR("\n"));
}

void print_bar(int l, int max);
void print_bar(int l, int max)
{
	size_t i;
	char buf[96];
	for (i = 0; i < l; i++)
	{
		buf[i] = '=';
	}
	buf[l] = '\0';
	printf("  [%*s]  \n", max, buf);
}

#define BAR 30
void print_bar2(int l, int max);
void print_bar2(int l, int max)
{
	char buf[96];
	for (size_t i = 0; i < l; i++)
	{
		buf[i] = '=';
	}
	buf[l] = '\0';
	printf("  [%-30s]  %2d", buf, l);
}

void cmd_bar(char *args)
{
	UNUSED(args);
	for (size_t i = 0; i <= BAR; i++)
	{
		print_bar2(i, BAR);
		_delay_ms(100);
		printf("\r");
	}
	printf("\n");
}

#define MRT 23
void cmd_mrtcu(char *args)
{
	UNUSED(args);
	for (size_t j = 0; j < 20; j++)
	{
		for (size_t i = 0; i < MRT; i++)
		{
			printf("Row  %2d %2d\n", i, j + i);
		}

		if (j < 19)
		{
			for (size_t i = 0; i < MRT; i++)
			{
				printf(E_UP);
			}
		}
		_delay_ms(100);
	}
	printf("\n");
}

void cmd_mrtcp(char *args)
{
	UNUSED(args);
	for (size_t j = 0; j < 20; j++)
	{
		for (size_t i = 0; i < MRT; i++)
		{
			printf("Row  %2d %2d\n", i, j + i);
		}

		if (j < 19)
			printf(E_CUR_POS(1, 1));
		_delay_ms(100);
	}
	printf("\n");
}

#define E_FG256(x) "\e[38;5;" #x "m"
#define E_BG256(x) "\e[48;5;" #x "m"
#define E_FG256P "\e[38;5;%dm"
#define E_BG256P "\e[48;5;%dm"

void cmd_c16(char *args)
{
	UNUSED(args);

	for (size_t i = 0; i < 16; i++)
	{
		printf(E_FG256P " %3d " E_RESET, i, i);
		if (i == 7)
		{
			printf("\n");
		}
	}
	printf("\n\n");
	for (size_t i = 0; i < 16; i++)
	{
		printf(E_BG256P " %3d " E_RESET, i, i);
		if (i == 7)
		{
			printf("\n");
		}
	}
	printf("\n\n");
}

void cmd_c256(char *args)
{
	char buf[128];
	char *p;
	UNUSED(args);

	cmd_c16("");

	p = buf;

	for (size_t i = 16; i < 256; i++)
	{

		printf(E_FG256P " %3d " E_RESET, i, i);
		p += sprintf(p, E_BG256P " %3d " E_RESET, i, i);
		p++;
		p[0] = ' ';
		p--;
		if (((i - 15) % 6) == 0)
		{
			p = buf;
			printf("  %s\n", buf);
		}
	}
}

void cmd_attr(char *args)
{
	UNUSED(args);
	printf("Text attributes\n");
	printf("Normal text\n");
	printf(E_BOLD "Bold text\n" E_RESET);
	printf(E_DIM "Dim text\n" E_RESET);
	printf(E_ITALIC "Italic text\n" E_RESET);
	printf(E_UNDERLINE "Underline text\n" E_RESET);
	printf(E_BLINK "Blink text\n" E_RESET);
	printf(E_REVERSE "Reverse text\n" E_RESET);
	printf(E_CROSSED "Crossed text\n" E_RESET);
	printf(E_OVERLINED "Overlined text\n" E_RESET);
}

void print_rows(int r)
{
	for (size_t i = 1; i <= r; i++)
	{
		printf("Row %d\n", i);
	}
}

void cmd_r100(char *args)
{
	UNUSED(args);
	print_rows(100);
}

void cmd_r1000(char *args)
{
	UNUSED(args);
	print_rows(1000);
}

void cmd_r10000(char *args)
{
	UNUSED(args);
	print_rows(10000);
}

void cmd_help(char *args)
{
	UNUSED(args);
	LEF_Cli_print();
}

void printInfo(char *a, char *b)
{
	defprintf(E_BR_MAGENTA "%-20s" E_RESET " " E_CYAN "%s\n" E_RESET, a, b);
}

void printSysInfo(void)
{
	char buf[16];
	printInfo("Build:", __DATE__ "  "__TIME__);
	printInfo("C Standard:", STRINGIZE(__STDC_VERSION__));

#ifdef __GNUC__
	printInfo("GNU C ver:", __GNUC_VERSION__);
#endif

#ifdef __BIG_ENDIAN__
	printInfo("Byteorder:", "big endian");
#endif
#ifdef __LITTLE_ENDIAN__
	printInfo("Byteorder:", "little endian");
#endif

#ifdef __cplusplus
	printInfo("C++:", "enabled");
#endif

#ifdef __OPTIMIZE__
#ifdef __OPTIMIZE_SIZE__
	printInfo("Optimization, size:", "Enabled");
#else
	printInfo("Optimization:", "Enabled");
#endif
#endif

	sprintf(buf, "%d", sizeof(void *));
	//  printf("Size %d\n",sizeof(void*));

	printInfo("Pointer size:", buf);
}

ISR(TIMER1_COMPA_vect)
{
	TIMER1_RELOAD(0);
	LEF_TimerUpdate(&timer1);
}

void hw_init(void)
{
	stdout = &mystdout;

	// Timer 1 (16 bit)
	TIMER1_CLK_PRES_256(); // set prescaler to 1/1024
	TIMER1_OCA_SET(625);
	TIMER1_OCA_IE(); // enable output compare A interrupt

	uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
	sei(); // Enable all interrupts
}

int main()
{
	uint16_t ch;
	LEF_Event event;

	LEF_Init();

	LEF_TimerInit(&timer1, EVENT_Timer1);
	LEF_TimerStartRepeat(&timer1, 10);

	// LEF_Button_init(&button, EVENT_Button);
	// LEF_Buzzer_init();
	//	LEF_CliInit(commands, sizeof(commands) / sizeof((commands)[0]) );
	LEF_Cli_init(commands, LARRAY_LENGTH(commands));

	hw_init();

	printf("\n\nArduino serial port testprogram\n\n");

	printSysInfo();

	while (true)
	{
		LEF_Wait(&event);

		switch (event.id)
		{
		case EVENT_Timer1:
			ch = uart_getc();
			while ((ch & 0xff00) != UART_NO_DATA)
			{
				LEF_Cli_putc(ch);
				ch = uart_getc();
			}

			break;

		case LEF_EVENT_CLI:
			LEF_Cli_exec();
			break;
		}
	}
	return 0;
}
