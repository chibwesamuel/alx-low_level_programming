#include "main.h"

/**
 * _sqrt - returns a number's square root
 * @n: number to be tested
 * @x: square to be used
 *
 * Return: square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to be worked on
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
