#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 * @i: index for the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i > n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
