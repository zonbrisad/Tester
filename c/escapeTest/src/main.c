
#include <stdio.h>
#include <unistd.h>
#include "def.h"


void printColor(char *str, char *color) {
	printf("%s%-15s Example text and chars #/-_+!@$%%&{}() %s\n", color, str, E_END); 
}
void printColor2(char *str, char *color, char *bg) {
	printf("%s%s%-15s Example text and chars #/-_+!@$%%&{}() %s\n", bg, color, str, E_END); 
}

char *bgColors[] = {E_ON_WHITE, E_ON_YELLOW,E_ON_RED, E_ON_BLUE, E_ON_GREEN, E_ON_CYAN, E_ON_MAGENTA,  NULL};
char *fgColors[] = {E_WHITE, E_RED, E_BR_RED, E_BLUE, E_BR_BLUE, E_GREEN, E_BR_GREEN, 
	                  E_MAGENTA, E_BR_MAGENTA, E_CYAN, E_BR_CYAN, E_YELLOW, E_BR_YELLOW, NULL};
void printColors(void) {
	int i;
	printColor("Green",          E_GREEN);
	printColor("Bright Green",   E_BR_GREEN);
	printColor("Red",            E_RED);
	printColor("Bright Red",     E_BR_RED);
	printColor("Blue",           E_BLUE);
	printColor("Bright Blue",    E_BR_BLUE);
	printColor("Cyan",           E_CYAN);
	printColor("Bright Cyan",    E_BR_CYAN);
	printColor("Magenta",        E_MAGENTA);
	printColor("Bright Magenta", E_BR_MAGENTA);
	printColor("Gray",           E_GRAY);
	printColor("Dark Gray",      E_DARKGRAY);
	printColor("Yellow",         E_YELLOW);
	printColor("Bright Yellow",  E_BR_YELLOW);
	printColor("White",          E_WHITE);
	
	i = 0;
	while (bgColors[i]!=NULL) {
		printColor2("", E_WHITE, bgColors[i] );
		i++;
	}
}



void bar1(int x) {
	int i;
	char buf[30];
 
	for (i=0;i<20;i++) {
		if (i<x) {
			buf[i] = '=';
		} else {
			buf[i] = ' ';
		}
	}
	buf[20] = '\0';
	printf("[%s] %2d\n",buf, x);
}

#define BUF1 30
#define BUF2 10
#define BUF3 10

void bar(int x) {
	int i;
	char buf1[BUF1];
	char buf2[BUF2];
	char buf3[BUF3];
 
	for (i=0;i<BUF1;i++) {
		if (i<x) {
			buf1[i] = '=';
		} else {
			buf1[i] = ' ';
		}
	}
	
	for (i=0;i<BUF2;i++) {
		if ((i + BUF1 )<x) {
			buf2[i] = '=';
		} else {
			buf2[i] = ' ';
		}
	}
	for (i=0;i<BUF3;i++) {
		if ((i + BUF1 + BUF2 )<x) {
			buf3[i] = '=';
		} else {
			buf3[i] = ' ';
		}
	}
	buf1[BUF1-1] = '\0';
	buf2[BUF2-1] = '\0';
	buf3[BUF3-1] = '\0';
	printf("["E_BR_GREEN"%s%s%s%s%s%s] %2d\n", buf1, E_BR_YELLOW, buf2, E_BR_RED, buf3, E_END, x);
}

void barTest(void) {
	int i;
	for (i=0;i<50;i++) {
		bar(i);
		//printf(E_CUR_RETURN);
		bar(50-i);
		printf(E_CUR_RETURN E_CUR_UP);
		usleep(80000);
	}
	printf("\n\n");
}


int main(int argc, char *argv[]) {
	
	printf("Escape sequence test.\n\n");
	
	printColors();
	
	barTest();
	
 
	
	return 0;

}
