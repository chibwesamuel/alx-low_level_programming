#include <stdio.h>

void _attribute__((constructor)) hare(void);

/**
 * hare - Function that prints a string before executing main function
 *
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
