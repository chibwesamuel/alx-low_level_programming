#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 *
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;
	
	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
