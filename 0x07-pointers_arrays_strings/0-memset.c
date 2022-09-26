#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area
 * @b: bytes of the memory area pointed to
 * @n: memory area
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;
	return (s);
}
