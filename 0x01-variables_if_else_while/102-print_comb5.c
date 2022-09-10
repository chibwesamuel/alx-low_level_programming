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
	int x;
	int y;

	for (x = 0; x <= 100; x++)
		for (y = 0; y <= 100; y++)
			if (y > x)
				putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	putchar(' ');
	putchar((y / 10) + '0');
	putchar((y % 10) + '0');
	if (x != 98)
		putchar(',');
	putchar('\n');
	return (0);
}
