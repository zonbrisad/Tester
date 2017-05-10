/*
 * File:   main.c
 * Author: pmg
 *
 * Created on den 16 september 2012, 16:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#include "def.h"

void initNcurses() {
  initscr();			// Start curses mode 		  
  refresh();			// Print it on to the real screen 
  cbreak();                     // turn off unput buffering
  noecho();                     // turn off automatic echoing
  keypad(stdscr, TRUE);         // enables F1, F2 etc
	curs_set(0);    // turn off cursor
	start_color();  // init colors
}


void printAttribute(WINDOW *win, char *str, int attr) {
  wattron(win, attr);
  wprintw(win,"%s\n",str);
  wattroff(win, attr);
}

void printLineGraphics(WINDOW *win, char *str, int ch) {
  printw("%10s ", str);
  addch(ACS_BLOCK);
  printw("\n");
}

void attributeTest(WINDOW *win) {
  int ch;
   
  initNcurses();

  init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_BLUE, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_RED);
	
  printAttribute(win, "Standout",  A_STANDOUT);
  printAttribute(win, "Reverse",   A_REVERSE);
  printAttribute(win, "Blink",     A_BLINK);
  printAttribute(win, "Dim",       A_DIM);
  printAttribute(win, "Bold",      A_BOLD);
  printAttribute(win, "Protect",   A_PROTECT);
  printAttribute(win, "Underline", A_UNDERLINE);
   
  printAttribute(win, "\nColor pair 1", COLOR_PAIR(1));
  printAttribute(win, "Color pair 2", COLOR_PAIR(2));
  printAttribute(win, "Color pair 3", COLOR_PAIR(3));
  printAttribute(win, "Color pair 4", COLOR_PAIR(4));
  printAttribute(win, "Color pair 5", COLOR_PAIR(5));
  printAttribute(win, "Color pair 6", COLOR_PAIR(6));
/*
  printLineGraphics("Block",      ACS_BLOCK);
  printLineGraphics("Board",      ACS_BOARD);
  printLineGraphics("Btee",       ACS_BTEE);
  printLineGraphics("Ckboard",    ACS_CKBOARD);
  printLineGraphics("Darrow",     ACS_DARROW);
  printLineGraphics("Degree",     ACS_DEGREE);
  printLineGraphics("Diamond",    ACS_DIAMOND);
  printLineGraphics("GEqual",     ACS_GEQUAL);
  printLineGraphics("HLine",      ACS_HLINE);
  printLineGraphics("LANTERN",    ACS_LANTERN);
  */ 
 // ch = getch();		        // Wait for user input            
 // endwin();			// End curses mode		  
}

void keyboardTest() {
  int ch;
  initNcurses();
  
  printw("Hello World !!!");	/* Print Hello World		  */
  
  while (1) {
    ch = getch();			/* Wait for user input            */

    switch (ch) {
      case KEY_F(1): printw("F1 pressed\n"); break;
      case KEY_UP:   printw("Upp pressed\n"); break;
       
     default: printw("Key %c pressed\n", ch);
    }
  }
  
  endwin();			/* End curses mode		  */
   
}

WINDOW *create_newwin(int height, int width, int starty, int startx) {
  WINDOW *local_win;
   
  local_win = newwin(height, width, starty, startx);
//  box(local_win, 0 , 0);/* 0, 0 gives default characters 
//			 *  * for the vertical and horizontal
//			  *  * lines*/
  wrefresh(local_win);/* Show that box */
   
  return local_win;
}

typedef struct {
	WINDOW *win;
	int startx;
	int starty;
	int hight;
	int width;
} nWin;

nWin wins[] = {
	{ NULL, 0, 0, 4, 70 },
	{ NULL, 0, 5, 4, 70 },
};


void statusRowTest() {
  int ch;
	int cnt = 0;
  WINDOW *win1;
	WINDOW *win2;
	WINDOW *statusBar;

	initNcurses();
	
  win1 = create_newwin(LINES-1,COLS/2,0,0);
	win2 = create_newwin(LINES-1,COLS/2,0,COLS/2 + 1);
	statusBar = create_newwin(1,COLS,LINES-1,0);

	wprintw(statusBar,"Kalle");
	wrefresh(statusBar);
	
	attributeTest(win2);
	scrollok(win1, TRUE);  // Enable scrolling in window
	scrollok(win2, TRUE);

	wprintw(win2, "windows size lines=%2d cols=%d\n", LINES, COLS);
	wprintw(win2, E_RED"Lite röd färg"E_END );
	
	wrefresh(win2);
	
  while (1) {
    ch = getch();			// Wait for user input            
    cnt++;
    switch (ch) {
     case KEY_F(1):  wprintw(win1, "F1 pressed\n"); break;
     case KEY_UP:    wprintw(win1, "Upp pressed\n"); break;
		 case KEY_DOWN:  wprintw(win1, "Down pressed\n"); break;
		 case KEY_LEFT:  wprintw(win1, "Left pressed\n"); break;
		 case KEY_RIGHT: wprintw(win1, "Right pressed\n"); break;
		 case 'q': endNcurses(); exit(0); break;	
//		 case KEY_SUP:    wprintw(win1, "Shift Upp pressed\n"); break;
//		 case KEY_SDOWN:  wprintw(win1, "Shift Down pressed\n"); break;
		 case KEY_SLEFT:  wprintw(win1, "Shift Left pressed\n"); break;
		 case KEY_SRIGHT: wprintw(win1, "Shift Right pressed\n"); break;
			
		 case KEY_HOME: wprintw(win1, "Home pressed\n"); break;
		 case KEY_DC: wprintw(win1, "Delete pressed\n"); break;
		 case KEY_NPAGE: wprintw(win1, "Page Up pressed\n"); break;
		 case KEY_PPAGE: wprintw(win1, "Page Down pressed\n"); break;
		 case KEY_IC: wprintw(win1, "Insert pressed\n"); break;
		 case KEY_END: wprintw(win1, "End pressed\n"); break;

     //case KEY_SLEFT: wprintw(win1, "Shift left\n"); break;      
      
     default: wprintw(win1,"Key %c pressed\n", ch);
    }
		//wprintw(win1,"Counter %4d\n", cnt);
		
		wmove(statusBar, 0, 0);
		wprintw(statusBar, "Counter %5d", cnt);
    wrefresh(win1);
		wrefresh(win2);
		wrefresh(statusBar);
  }   
}

void endNcurses() {
	  endwin();			// End curses mode
}


/*
 * 
 */
int main(int argc, char** argv) {

//	UNUSED(argc);
//	UNUSED(argv);

	statusRowTest();
//  keyboardTest();

 
  return (EXIT_SUCCESS);
}

