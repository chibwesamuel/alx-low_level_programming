#include "main.h"

/**
 * _isalpha - function to print whether the value of c
 * is a letter regardless of case
 *
 * @c: int that will be used for the argument
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <=	'Z'))
	{
		return (1);
	}
	else
	return (0);
}
