#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to a linked list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *node  = head->next;

		free(head->str);
		free(head);
		head = node;
	}
}

