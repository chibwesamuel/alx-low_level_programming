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

int main(int argc, char* argv)
{
    if (argc > 0)
        printf("argc = %s\n", argv);

    return 0;
}
