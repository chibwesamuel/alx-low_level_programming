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

	for (i = 0; i <= 89; i++)
		for (x = 0; x <= 89; x++)
			if (x > i)
				putchar(i + '0');
	putchar(x + '0');
	if (i != 89)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
