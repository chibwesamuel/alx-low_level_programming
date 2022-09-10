#include <stdio.h>

/**
 * main - all possible different combinations of two digits
 *
 * Description: through the main function this program
 * all possible different combinations of two digits
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
		for (x = 0; x <= 9; x++)
			if (x > i)
				putchar(0 + i);
	putchar(0 + x);
	if (i != 8)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
