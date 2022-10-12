#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: the array containing elements
 * @size: the size of the aray
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size -- > 0)
	{
		action(*array);
		array++;
	}
}
