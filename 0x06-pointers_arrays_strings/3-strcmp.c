#include "main.h"
#include <stdio>

/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if equal,neg if s1 < s2 otherwise +
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
