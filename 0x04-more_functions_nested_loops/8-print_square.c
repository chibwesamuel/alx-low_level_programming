#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
