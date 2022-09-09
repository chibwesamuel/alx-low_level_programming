#include <stdlib.h>

/**
 *
 * main - prints the alphabet in lowercase, followed by a new line
 * Description: function that implements main
 *
 * Return: Always 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar("\n");
	return (0);
}
