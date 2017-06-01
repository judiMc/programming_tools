#include <ncurses.h>
#include <string.h>
#define character "@"
#define wall '#';

void getPos(int *, int *);
int main()
{
    int c;
    int maxX;
    int maxY;
    int y;
    int x;
    int i;
    
    
    y = 0;
    x = 0;
    
    
    printf("Ncurses demo of moving the cursor.\n\nUse i,j,k,m to move the cursor\nPress any key to begin.");
    getchar();
    initscr();
    noecho();
    getmaxyx(stdscr,maxY,maxX);
    
    for(i = 0; i <= (maxX/2); i ++)
    {
        mvaddch(0,i,'#');
        mvaddch(maxY/2,i,'#');
    }
    
    for(i = 0; i <= (maxY/2); i ++)
    {
        mvaddch(i,0,'#');
        mvaddch(i,maxX/2,'#');
    }
    
    
    mvprintw(1,1,character);
    move(1,1);
    
    
    c = getch();
    


    
    while (c != 'q')
    {
    /*printw("%d",c);*/
        if(c == 'i') /*Wanting to move upwards*/
        {
          getPos(&y,&x);
            if(y > 1) /* than we can move up because were not at the top of the screen */
            {
                printw(" "); /*remove what the cursor is curently ontop of should be '@'*/
                mvprintw((y - 1), (x),character); /*Print the character in the new position */
                move(y -1 , x); /*re place the cursor into the correct position */
                
            }
          
          /*printw("Y : %d , X : %d, Max Y : %d, Max X : %d \n",y,x,maxY,maxX);*/
        }
        else if (c == 'j') /*Wanting to move left*/
        {
            getPos(&y,&x);
            if(x > 1)
            {
                    printw(" ");
                    mvprintw(y,(x - 1),character);
                    move(y,(x - 1));
            }
            
        }
        else if(c == 'm') /*Wanting to move down*/
        {
            getPos(&y,&x);
            if(y < (maxY - 2))
            {
                printw(" ");
                mvprintw((y+1), x,character);
                move((y + 1), x);
            }
        }
        else if (c == 'k') /*Wanting to move right*/
        {
            getPos(&y,&x);
            if(x < (maxX - 2))
            {
                printw(" ");
                mvprintw(y,(x+1),character);
                move(y,(x+1));
                
            }
        }
    refresh();
    c = getch();
    }
    endwin();
    
    
    return 0;
}

void getPos(int * y, int * x)
{
    * y = getcury(stdscr);
    * x = getcurx(stdscr);
    return;
}
