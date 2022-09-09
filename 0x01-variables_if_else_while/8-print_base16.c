#include <stdio.h>

/**
 * main - prints base 16 numbers in lowercase
 *
 * Description: the main function takes numbers in base 16 and prints them in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	
		putchar(c);
	
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
