#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
