#include <stdio.h>
/**
 * main - print letters of the alphabet in lowercase reversed
 *
 * Description: using the main function
 * this program prints letters of the alphabet in reverse order
 *
 * Return: 0
 */

int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
		putchar(y);

	putchar('\n');
	return (0);
}
