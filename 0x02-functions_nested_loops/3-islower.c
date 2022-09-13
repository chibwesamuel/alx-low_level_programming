#include "main.h"

/**
 * _islower - this function checks lowercase charaters
 * @c: this int will be used for the argument
 *
 * Return: 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' &&c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
