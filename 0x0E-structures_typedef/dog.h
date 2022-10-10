#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This stucture defines a dog and links
 * this data with owner
 */

struct dog
{
	char *name;
	float age;
	char *name;
};

/**
 *  * void prototypes()
 *   * int prototypes()
 *    */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
