#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

int main() {



refresh();
getch(); //does nothing except wait for you to press a character so you can see the results on the screen
endwin();
return(0);
}

/*to use this example program,  cut/paste any one of the
examples into the main method above.  put it between the comments.
compile and run to see what happens.   You'll have to delete one to try 
the next one*/

/*---------------------------------------
example one
---------------------------------------*/
/*

initscr();
printw("Hello World");

*/
/*---------------------------------------
example two
---------------------------------------*/
/*

initscr();
for (i=1; i<10; i++)
{
   move(i, i*5);
   printw("Hello World");

}


*/

/*---------------------------------------
example three
---------------------------------------*/
/* 

initscr();
move(4, 15);
printw("Hello World")*/




/*---------------------------------------
example four
---------------------------------------*/

/*

  int rows;
  int cols; 
  char * message;
  char input[5];
  int i;
  int tall;
  int wide;
 
  initscr();
  getmaxyx(stdscr, rows, cols);
  message = "Enter the height ";
  mvprintw(rows-2, 0, "%s", message);
  getstr(input);
  tall = (int)strtol(input, NULL, 10);
  message = "Enter the width    ";
  mvprintw(rows-2, 0, "%s", message);
  getstr(input);
  wide = (int)strtol(input, NULL, 10);
  for (i=0; i<wide; i++)
    {
      mvaddch(0, i, '#');
    }
   for (i=0; i<tall; i++)
   {
     mvaddch(i, 0, '#');
     mvaddch(i, wide, '#');
   }
   for (i=0; i<wide; i++)
    {
      mvaddch(tall, i, '#');
    }


*/
