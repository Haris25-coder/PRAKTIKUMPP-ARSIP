#include <ncurses\curses.h>
#include <windows.h>
using namespace std;

int main(){
    system("color C5");
    initscr();

    mvprintw(2,2,"A");
    refresh();
    Sleep(500);

    mvprintw(3,2,"N");
    refresh();
    Sleep(1000);

    mvprintw(4,2,"I");
    refresh();
    Sleep(1500);

    mvprintw(5,2,"S");
    refresh();
    Sleep(500);

    mvprintw(6,2,"A");
    refresh();

    getch();
    endwin();
    return 0;
}
