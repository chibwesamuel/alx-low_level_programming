#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9
 *
 * Return: 0 - 9 followed by a new line
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
		putchar(i);

	putchar(10);
}
