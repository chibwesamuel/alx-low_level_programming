#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the
 * sum of all its parameters
 * @n: parameter placeholder
 * @...: additional parameters
 * Return: Sum of given parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;
	int sum = 0;

	va_start(nums, n);

	if (n == 0)
		return (0);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
