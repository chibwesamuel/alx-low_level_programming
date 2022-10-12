#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 * @array: array containing integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!array || !cmp)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
