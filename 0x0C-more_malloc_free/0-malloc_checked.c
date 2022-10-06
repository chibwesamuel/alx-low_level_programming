#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: pointer to the allocated memory
 *
 * Return: 0 on success
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit (98);

	return (m);
}
