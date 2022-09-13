#include "main.h"

/**
 * _abs - function that computes the absolute values
 * @c: int that we will use for the calculations
 *
 * Return: 0
 *
 */

int _abs(int c)
{
	if (c >  0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
