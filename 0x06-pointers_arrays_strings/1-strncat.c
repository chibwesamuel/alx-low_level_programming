#include "main.h"

/**
 * _strncat - function that concatenates two strings add number of bytes
 * @src: string to be completed
 * @dest: string to be appended upon
 * @n: integer that compares index
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
