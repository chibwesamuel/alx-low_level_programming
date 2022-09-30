#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @args: argument count
 * @argv: Argument vector for values
 *
 *
 * Return: 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
