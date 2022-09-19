#include "main.h"
#include <stdio>
#include <string.h>

/**
 * puts_half - function prints half of a string followed
 * by a line
 * @str: is the principal parameter
 */

void puts_half(char *str)
{
	int i, len, m;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	if ((len  % 2) == 0)
		m = (len / 2);
	else
		m = (len + 1) / 2;

	for (i = m; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
