#include <stdio.h>
#include "lists.h"

void bmain(void) __attribute__((constructor));

void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
