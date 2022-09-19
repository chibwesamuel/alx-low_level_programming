#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to reverse
 * Return: 0
 */

void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
}	
