#include <stdio.h>
#include <main.h>
/**
 * main - this finction is meant to print out _putchar
 *
 * Description: the main function runs the commands
 * 
 * Return: the value is Zero
 *
 */

int main(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar("\n");
	return (0);
}
