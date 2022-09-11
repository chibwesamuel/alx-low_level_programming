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

	for (i = 0; i <= 89; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i <= 88)
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
