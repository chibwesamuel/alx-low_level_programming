#include <stdlib.h>
#include "../search_algos.h"

/**
 * print_list - function that prints content of a list
 * @list: pointer to list ending
 */
void print_list(const listint_t *list)
{
	printf("List :\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
