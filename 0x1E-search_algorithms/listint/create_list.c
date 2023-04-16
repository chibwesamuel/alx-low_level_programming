#include <stdlib.h>
#include "../search_algos.h"

void free_list(listint_t *list);
/**
 * create_list - function that creates a singly-linked list
 * @array: pointer to array
 * @size: array size
 *
 * Return: Pointer to head of list or NULL upon failure
 */

listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
