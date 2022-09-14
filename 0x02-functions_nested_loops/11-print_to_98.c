#include "main.h"

/**
 * print_to_98 - function prints natural numbers from n to 98
 * separated by a comma
 * @n: the initial number
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
	       printf("%d\n", n);	
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
