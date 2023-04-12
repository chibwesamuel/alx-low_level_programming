#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int array[] = {
		10, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value %d found at index %zu\n", value, i);
			return (i); /*return index at which value is found*/
		}
	}
	printf("Value %d not found\n", value);
	return (-1); /*value is not present in array*/
}
