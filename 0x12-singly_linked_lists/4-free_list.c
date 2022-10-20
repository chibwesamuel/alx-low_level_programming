#include "lists.h"
#include <string.h>

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the start of next list
 *
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
