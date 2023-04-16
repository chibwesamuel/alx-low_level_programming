#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - frees memory of singly linked list
 * @list: pointer to the list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
