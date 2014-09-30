#include <stdio.h>

int entry_point()
{
	change_color(COLOR_YELLOW, COLOR_BLACK);
	printf("Testing newline char and testing tabbing!\n");
	change_color(COLOR_GREEN, COLOR_MAGENTA);
	printl("This is tabbed:\tHell yes!");
	change_color(COLOR_BLACK, COLOR_WHITE);
	printf("Josh, you've got to write some documentation on this...");
	return 0;
}
