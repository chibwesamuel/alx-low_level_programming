#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @n: size of table
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int row, column, tableValue, n;
	n = 10;
	for (column = 1; column <= n; column++)
		printf(" %3d", column);
	_putchar('\n');
	
	for (row = 1;row <= n; row++)
		printf(" %2d", row);
	_putchar('\n');
	
	for (column = 1; column <= n; column++)
		tableValue = row * column;
	_putchar('\n');
	if (row <= 0 || row >= 15)
	_putchar('null');
	else
		printf(" %3d", tableValue);

	return (0);
}
