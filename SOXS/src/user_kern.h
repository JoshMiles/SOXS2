#include <stdio.h>
#include "user2.h" // Include other files in the kernel
#include "user3.h"

int entry_point()
{
	test();
	test2();
	printf("Testing newline char and testing tabbing!\n");
	printl("This is tabbed:\tHell yes!");
	return 0;
}
