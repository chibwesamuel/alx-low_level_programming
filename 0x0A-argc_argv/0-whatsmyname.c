#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of arguments supplied
 * @argv: pointers to strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;

	return (0);
}
