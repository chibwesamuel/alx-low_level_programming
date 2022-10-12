#include "main.h"

/**
 * print_name - function that prints a name.
 * @name: pointer to name in function
 * @f: pointer to the function in question
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
