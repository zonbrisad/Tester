/*
 * File:   main.c
 * Author: pmg
 *
 * Created on den 16 september 2012, 16:11
 */

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


void initNcurses() {
  initscr();			// Start curses mode 		  
  refresh();			// Print it on to the real screen 
  cbreak();                     // turn off unput buffering
  noecho();                     // turn off automatic echoing
  keypad(stdscr, TRUE);         // enables F1, F2 etc

}


void printAttribute(char *str, int attr) {
  attron(attr);
  printw("%s\n",str);
  attroff(attr);
}

void printLineGraphics(char *str, int ch) {
  printw("%10s ", str);
  addch(ACS_BLOCK);
  printw("\n");
}

void attributeTest() {
  int ch;
   
  initNcurses();
  
  printAttribute("Standout",  A_STANDOUT);
  printAttribute("Reverse",   A_REVERSE);
  printAttribute("Blink",     A_BLINK);
  printAttribute("Dim",       A_DIM);
  printAttribute("Bold",      A_BOLD);
  printAttribute("Protect",   A_PROTECT);
  printAttribute("Underline", A_UNDERLINE);
   
  printAttribute("\nColor pair 1", COLOR_PAIR(1));
  printAttribute("Color pair 2", COLOR_PAIR(2));
  printAttribute("Color pair 3", COLOR_PAIR(3));
  printAttribute("Color pair 4", COLOR_PAIR(4));
  printAttribute("Color pair 5", COLOR_PAIR(5));
  printAttribute("Color pair 6", COLOR_PAIR(6));

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
   
  ch = getch();		        // Wait for user input            
  endwin();			// End curses mode		  
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

void statusRowTest() {
  int ch;
  WINDOW *win;
  initscr();			/* Start curses mode 		  */
  printw("Hello World !!!");	/* Print Hello World		  */
  refresh();			/* Print it on to the real screen */
  cbreak();
  noecho();
  keypad(stdscr, TRUE);         // enables F1, F2 etc

  win = create_newwin(4,70,0,0); 
  while (1) {
    ch = getch();			/* Wait for user input            */
    
    switch (ch) {
     case KEY_F(1):  wprintw(win, "F1 pressed\n"); break;
     case KEY_UP:    wprintw(win, "Upp pressed\n"); break;
     case KEY_SLEFT: wprintw(win, "Shift left\n"); break;      
      
     default: wprintw(win,"Key %c pressed\n", ch);
    }
    wrefresh(win);
  }
  
  endwin();			/* End curses mode		  */
   
}


/*
 * 
 */
int main(int argc, char** argv) {
   
  attributeTest();
	statusRowTest();
  keyboardTest();

 
  return (EXIT_SUCCESS);
}

