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
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
