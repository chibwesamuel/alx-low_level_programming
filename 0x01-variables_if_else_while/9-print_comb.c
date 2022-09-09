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

	for (i = 48; i <= 57; i++)
		putchar(i);
	if (i != 57)
		putchar(',');
	
	putchar('\n');
	return (0);
}
