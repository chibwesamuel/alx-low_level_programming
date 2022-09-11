#include <stdio.h>

/**
 * main - prints all possible combinations
 *
 * Description: the main function prints all possible
 * combinatiotions of numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i <= '8')
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
