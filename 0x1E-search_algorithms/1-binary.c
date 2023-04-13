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
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = mid + 1;
		} else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
