#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
	char x;
	for(char x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x));
	for(char x = 'a'; x <= 'z'; x++)
		putchar(x);
	return (0);
}
