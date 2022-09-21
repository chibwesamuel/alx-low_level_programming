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
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[len++] = src[index];
	return (dest);
}
