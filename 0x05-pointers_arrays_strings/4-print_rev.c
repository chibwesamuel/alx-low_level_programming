#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content as it be
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
