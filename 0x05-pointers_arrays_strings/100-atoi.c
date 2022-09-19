#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int i;

	i = atoi(s);

	putchar("i = %d\n",i);
}
