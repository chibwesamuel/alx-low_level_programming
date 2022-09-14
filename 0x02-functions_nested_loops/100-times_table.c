#include "main.h"
#include <stdio>

/**
 * print_times_table - Entry point
 * @n: size of table
 * Return: Always 0 (Success)
 *
 */

void print_times_table(int n)
{
	int row, column, tableValue, n;

	n = 10;

	for (column = 1; column <= n; column++)
		printf_s(" %3d", column);
	
	for (row = 1;row <= n; row++)
		printf_s(" %2d", row);
	
	for (column = 1; column <= n; column++)
		tableValue = row * column;

	if (row <= 0 || row >= 15)
		break;
	else
		printf_s(" %3d", tableValue);

	return (0);
}
