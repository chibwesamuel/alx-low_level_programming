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

	for (size_t size = 0; size_t size < value; size_t size++)
	{
		if (size_t size == value)
		{
			printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
			printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
			printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
			return (EXIT_SUCCESS);
		}
		break;

		if (size_t size != value)
		{
			printf("Not present in aray");
			return (-1);
		}
	}
}
