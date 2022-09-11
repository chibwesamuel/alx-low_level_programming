#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Description: the main function takes numbers
 * in base 16 and prints them in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
