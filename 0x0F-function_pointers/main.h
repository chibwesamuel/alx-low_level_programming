#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * author: Chibwe Samuel Mukosa
 * description: this is a header file containing all prototypes
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
