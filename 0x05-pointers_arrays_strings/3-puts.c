#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	for (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
