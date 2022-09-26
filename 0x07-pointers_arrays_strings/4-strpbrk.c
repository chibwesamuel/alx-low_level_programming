#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search in
 * @accept: stores bytes of results
 *
 * Return: pointer to the byte in s
 * @accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
