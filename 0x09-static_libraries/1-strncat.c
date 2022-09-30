#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings add number of bytes
 * @src: string to be completed
 * @dest: string to be appended upon
 * @n: integer that compares index
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
