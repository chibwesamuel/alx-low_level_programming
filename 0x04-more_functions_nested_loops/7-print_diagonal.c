#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: always returns 0
 */

void print_diagonal(int n)
{
	int co, sp;
	
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
			{
				for (sp = 1; sp < co; sp++)
				{
					putchar(' ');
				}
				putchar('\\');
				putchar('\n');
			}
	}
}
