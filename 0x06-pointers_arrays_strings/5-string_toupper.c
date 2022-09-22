#include "main.h"
#include <stdio.h>

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @str: this is the string to be changed
 *
 * Return: string address
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}
