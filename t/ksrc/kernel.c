#include "user_kern.h" // the code generated from Sangira lang will go into this file

void kernel_main()
{
	// we have to presume that user_kern makes includes terminal.h somewhere along the way
	terminal_initialize(); // self explanitory
	entry_point(); // calls the entry_point method in user_kern.h
}
