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
	(void) argc;
	printf(" %s\n", argv[0]);

	return (0);
}
