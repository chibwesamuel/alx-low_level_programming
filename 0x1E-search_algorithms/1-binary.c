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

/**
 * main - entry point for the function
 * Return: value and index found
 */

int main(void)
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	size_t size = sizeof(array) / sizeof(array[0]);
	int value = 2, 5, 999;

	int index = binary_search(array, size, value);

	if (index == -1)
	{
		printf("Value not found");
	} else
	{
		printf("Found %d at index: %d\n", value, index);
	}
	return (0);
}
