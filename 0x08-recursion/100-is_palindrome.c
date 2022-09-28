#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @start: starting point in check
 * @end: finishing point
 * @flag: warning indicator
 * Return: 1 if true and 0 if false
 */

void check(char *s, int start, int end, int *flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start + 1, end - 1, flag);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to be copied
 *
 * Return: 1 if true and 0 if false
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, strlen(s) - 1, &flag);
	return (flag);
}
