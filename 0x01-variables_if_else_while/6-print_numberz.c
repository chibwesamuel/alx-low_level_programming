#include <stdio.h>

/**
 * main - prints numbers 0 - 9
 *
 * Description: Using the main function we list numbers from 0 - 9
 *
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = '0'; x < 9; x++)
		putchar(x);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
