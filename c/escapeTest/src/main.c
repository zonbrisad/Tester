
#include <stdio.h>
#include "def.h"


void printColor(char *str, char *color) {
	printf("%s%-15s Example text and chars #/-_+!@$%&{}() %s\n", color, str, E_END); 
}
void printColor2(char *str, char *color, char *bg) {
	printf("%s%s%-15s Example text and chars #/-_+!@$%&{}() %s\n", bg, color, str, E_END); 
}

char *bgColors[] = {E_ON_WHITE, E_ON_YELLOW,E_ON_RED, E_ON_BLUE, E_ON_GREEN, E_ON_CYAN, E_ON_MAGENTA,  NULL};
char *fgColors[] = {E_WHITE, E_RED, E_BLUE, E_GREEN, E_MAGENTA, E_CYAN, E_YELLOW, E_BR_RED, E_BR_BLUE, E_BR_GREEN, E_BR_MAGENTA, E_BR_CYAN, E_BR_YELLOW, NULL};
void printColors() {
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
	
/*
	printColor("",        E_);
	printColor("Bright", E_BR_);
*/i = 0;
	while (fgColors[i]!=NULL) {
		printColor("XXX", fgColors[i] );
		i++;
	}
	
	i = 0;
	while (bgColors[i]!=NULL) {
		printColor2("XXX", E_BLUE, bgColors[i] );
		i++;
	}
}

int main(int argc, char *argv[]) {

	printf("Escape sequence test.\n\n");
	
	printColors();
	
	return 0;

}
