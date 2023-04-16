#include <stdlib.h>
#include"../search_algos.h"

/**
 * free_list - frees a previously filled list
 * @list: pointer to linked list that is to be freed
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
