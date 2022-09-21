#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @src - source string
 * @dest - destination string
 *
 * Return: string character
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		while (src[i] != '\0')
		{
			dest[j + 1] = src[i];
			i++;
		}
	return (dest);
}
