#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: number to be worked on
 *
 * Return: void
 */

int factorial(int n)
{
	if (n <= 1)
		return 1;
	
	return n * factorial(n - 1);
}
int main()
{
	printf("%i\n", factorial(n));
	return (0);
}
