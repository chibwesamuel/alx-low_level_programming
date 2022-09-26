#include "main.h"
#include <stdlib.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to each in
 * @c: character in string
 *
 * Return: pointer to the first occurrence of the character
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			*s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
