#include "main.h"

/**
 * print_rev - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content as it be
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
