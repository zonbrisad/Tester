
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>

#include "uart.h"
#include "main.h"
#include "LEF.h"
#include "def.h"

#define UART_BAUD_RATE 57600

void hw_init(void);

void cmd_c16(char *args);
void cmd_c256(char *args);
void cmd_r100(char *args);
void cmd_r1000(char *args);
void cmd_r10000(char *args);
void cmd_help(char *args);

typedef enum {
	EVENT_Timer1 = 0,
} Events;

static FILE mystdout = FDEV_SETUP_STREAM((void*)uart_putc, NULL, _FDEV_SETUP_WRITE);

LEF_Timer timer1;

const PROGMEM LEF_CliCmd commands[] = {
	LEF_CLI_LABEL("Color"),
	{cmd_c16 ,   "c16",    "Print 16 terminal colors"},
	{cmd_c256 ,  "c256",   "Print 256 terminal colors"},
	LEF_CLI_LABEL("Generators"),
	{cmd_r100,   "r100",   "Print 100 rows"},
	{cmd_r1000,  "r1000",  "print 1000 rows"},
	{cmd_r10000, "r10000", "print 10000 rows"},
	{cmd_help,   "help",   "Print help information"},
};

ISR(TIMER1_COMPA_vect) {
	TIMER1_RELOAD(0);
	LEF_TimerUpdate(&timer1);
}

const PROGMEM char cc[][10] = {
	E_BLACK, E_RED, E_GREEN, E_YELLOW, E_BLUE, E_MAGENTA,
	E_CYAN, E_GRAY, E_DARKGRAY, E_BR_RED, E_BR_GREEN, E_BR_YELLOW,
	E_BR_BLUE, E_BR_MAGENTA, E_BR_CYAN, E_WHITE
};

void cmd_c16(char *args) {
	uint16_t i;
  char buf[16];
	UNUSED(args);
	for (i=0; i<ARRAY_LENGTH(cc); i++) {
		strcpy_P(buf, cc[i]);
		printf("%s Color "E_END"\n", buf);
	}
}

#define E_FG256(x) "\e[38;5;"#x"m"
#define E_BG256(x) "\e[48;5;"#x"m"
#define E_FG256P   "\e[38;5;%dm"
#define E_BG256P   "\e[48;5;%dm"

void cmd_c256(char *args) {
	int i;
	char buf[128];
	char *p;
	UNUSED(args);

	p = buf;
	printf("\n");
	for (i=16; i<256; i++) {

		printf(E_FG256P" %3d "E_END,i,i);
		p += sprintf(p, E_BG256P" %3d "E_END,i,i);
		p++;
		p[0] = ' ';
		p--;
		if (((i-15) % 6)==0) {
			p = buf;
			printf("  %s\n",buf);
		}
	}
}

void print_rows(int r) {
	int i;
	for (i=1; i<=r; i++) {
		printf("Row %d\n",i);
	}
}

void cmd_r100(char *args) {
	UNUSED(args);
	print_rows(100);
}

void cmd_r1000(char *args) {
	UNUSED(args);
	print_rows(1000);
}

void cmd_r10000(char *args) {
	UNUSED(args);
	print_rows(10000);
}

void cmd_help(char *args) {
	UNUSED(args);
	LEF_Cli_print();
}

void printInfo(char *a, char *b) {
	  defprintf(E_BR_MAGENTA"%-20s"E_END" "E_CYAN"%s\n"E_END, a, b);
}

void printSysInfo(void) {
	  char buf[16];
	  printInfo("Build:",__DATE__"  "__TIME__);
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

	  sprintf(buf,"%d",sizeof(void*));
	//  printf("Size %d\n",sizeof(void*));

	  printInfo("Pointer size:", buf);
}

void hw_init(void) {
  stdout = &mystdout;

	// Timer 1 (16 bit)
	TIMER1_CLK_PRES_256();  // set prescaler to 1/1024
	TIMER1_OCA_SET(625);
	TIMER1_OCA_IE();        // enable output compare A interrupt
	
  uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
  sei();  // Enable all interrupts
}

int main() {
	uint16_t ch;
	LEF_Event event;
	
	LEF_Init();

	LEF_TimerInit(&timer1, EVENT_Timer1);
	LEF_TimerStartRepeat(&timer1, 10);
	
	//LEF_Button_init(&button, EVENT_Button);
	//LEF_Buzzer_init();
//	LEF_CliInit(commands, sizeof(commands) / sizeof((commands)[0]) );
	LEF_Cli_init(commands, LARRAY_LENGTH(commands));

	hw_init();

	printf("\n\nArduino serial port testprogram\n\n");

	printSysInfo();
	
	while (1) {
		LEF_Wait(&event);
		
		switch (event.id) {
		 case EVENT_Timer1:
			ch = uart_getc();
			while ((ch & 0xff00) != UART_NO_DATA ) {
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
