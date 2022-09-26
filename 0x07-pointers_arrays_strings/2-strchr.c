#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to each in
 * @c: character in string
 *
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s);
	{
		if (*s != c)
			*s++;
		else
			return (s);
	}
	if (*s == '\0')
		return (s);

	return (NULL);
}
