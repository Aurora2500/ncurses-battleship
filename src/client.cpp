#include <ncurses.h>

void print_menu()
{
	int rows, cols;
	getmaxyx(stdscr, rows, cols);
	int width = 20;
	int height = 10;
	WINDOW *menu = newwin(height, width, (rows-width)/2, (cols-height)/2);

	box(menu, 0, 0);

	mvwprintw(menu, 1, 1, "Start game");
	mvwprintw(menu, 2, 1, "Join game");
	mvwprintw(menu, 3, 1, "Exit");

	refresh();
	wrefresh(menu);
}

void run_client()
{
	initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);
	curs_set(0);

	print_menu();

	getch();
	endwin();
}