#include <stdio.h> 

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: all tasks are completed in the main function
 *
 * Return: 0
 *
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
		for (b = 0; b <= 9; b++)
			for (c = 0; c <= 9; c++)
				if (c > b && b > a)
					putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a != 7)
		putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
