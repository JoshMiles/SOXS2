#include "terminal.h" // the important call to terminal.h

int printf(const char* format, ...)
{	
	// this obviously needs fixing.
	terminal_writestring(format);
	return 0;
}
