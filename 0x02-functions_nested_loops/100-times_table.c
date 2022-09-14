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
	
	for (row = 1;row <= n; row++)
		printf(" %2d", row);
	
	for (column = 1; column <= n; column++)
		tableValue = row * column;
	if (row <= 0 || row >= 15)
		break;
	else
		printf(" %3d", tableValue);

	return (0);
}
