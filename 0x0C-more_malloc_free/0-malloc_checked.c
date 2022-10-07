#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates
 * memory using malloc
 * @b: pointer to the allocated memory
 *
 * Return: 0 on success
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
