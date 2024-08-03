
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <avr/sleep.h>
#include <util/delay.h>
#include <util/atomic.h>
#include <stdio.h>
#include <stdlib.h>

#include "def.h"
#include "def_avr.h"
#include "uart.h"
#include "main.h"

#include "channel.h"

#define UART_BAUD_RATE 57600

void hw_init(void);


static FILE mystdout = FDEV_SETUP_STREAM((void*)uart_putc, NULL, _FDEV_SETUP_WRITE);

void hw_init(void) {
  stdout = &mystdout;
  uart_init(UART_BAUD_SELECT(UART_BAUD_RATE, F_CPU));
  sei();  // Enable all interrupts
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

//	  sprintf(buf,"%d",sizeof(void*));
	//  printf("Size %d\n",sizeof(void*));

//	  printInfo("Pointer size:", buf);

}









void print_channels(CHANNEL *chns) {
	int i = 0;
	int j;
	printf("%s\n",CHANNEL_toString(NULL));
	
	while (chns[i].mode != CHANNEL_MODE_LAST) {
		printf("  %s\n", CHANNEL_toString(&chns[i]));
		i++;
	}
	for (j=0; j<(i+1); j++) {
		printf(E_PREVLINE);
	}
}

void maintest() {
  int i;
  CHANNEL *chns;

  CHANNEL channels[] = {
		    CHANNEL_SINE("Sinus", "Sin", 1000, 50), // 0
		    CHANNEL_SQUARE("Square", "Sqr", 4),
		    CHANNEL_MIN("Min", "", -2),
		    CHANNEL_MAX("Max", "", -3),
		    CHANNEL_COUNT("Count", "", 100, -4),
		    CHANNEL_DERIVATE("Derivate","", -5),
		    CHANNEL_LIMIT("Limit", "", 0, 700, -6),
		    CHANNEL_DIVIDE("Div / 10", "", 10, -1),
		    CHANNEL_INTEGRATE("Integrate","", -1),
		    CHANNEL_MULTIPLY("x2","", 2, -3),
		    CHANNEL_SQUARE("Square", "S2",  5), // 10
		    CHANNEL_INVERSE("Inverse", "", -1),
		    CHANNEL_COUNT("Count", "", 0, -2),
		    CHANNEL_SQUARE("Square slow", "SL",  20),
		    CHANNEL_DELAY("Delay", "", 5, -1),
		    CHANNEL_MULTIPLY("Mult", "", 100, -2), // 15
//		    CHANNEL_RATELIMIT("Rate", "", 10, -1),
//		    CHANNEL_NORMAL("Dissabled", "", CHANNEL_MODE_NORMAL, -1),
//		    CHANNEL_PWM("PWM test", "", 1, 4),


		    CHANNEL_LAST()
	};


  chns = channels;

//  CHANNEL_Enable(&chns[17], false);

  i = 0;
  while (chns[i].mode != CHANNEL_MODE_LAST) {
		if (chns[i].src.init != 0) {
			chns[i].src.ptr   = &chns[i + chns[i].src.init];
		}
		//    CHANNEL_Init(&chns[i], 0, 10);
		i++;
	}

  while(1) {
		
		i = 0;
		while (chns[i].mode != CHANNEL_MODE_LAST) {
			CHANNEL_Update(&chns[i], 0, 10);
			i++;
		}
		print_channels(chns);
		_delay_ms(200);
	}
}


int main() {
  hw_init();

	_delay_ms(1000);

	printf(E_END);
	printf("\n\nInit mmtest AVR\n");

  if (IS_POWER_ON_RESET())
		printf("Power on reset\n");

	if (IS_BROWN_OUT_RESET())
		printf("Brown out reset\n");

	if (IS_WATCH_DOG_RESET())
		printf("Watchdog reset\n");

	if (IS_EXTERNAL_RESET())
		printf("External reset\n");

  CLEAR_RESETS();

	
	printSysInfo();
	
	printf("\n");
	printf("Size of channel struct: %u\n", sizeof(CHANNEL));
	printf("\n");
	
	
	maintest();

	ARDUINO_LED_INIT();
	while (1){
			_delay_ms(100);
			uart_putc('B');
			ARDUINO_LED_TOGGLE();
		}
	
	printf("Test ended\n");
  return 0;
}
