#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);

/**
 * strtow - function that splits a string into words.
 * @str: string to be split in two
 *
 * Return: split string
 */

char **strtow(char *str)
{
	char **d;
	int i;
	int j = 0;
	int con = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
			con++;
	}

	d = malloc(sizeof(char) * con);

	if (d == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
		{
			*d[j] = str[i];
			j++;
		}
	}
	return (d);
}
