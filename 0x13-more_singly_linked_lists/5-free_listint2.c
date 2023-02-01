#include "lists.h"

/**
 * free_listint2 - frees memory allocated to a linked list
 * @head: linked lists
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (*head != NULL)
	{
		listint_t *tmp1 = *head;

		while (tmp1->next != NULL)
		{
			tmp = tmp1;
			tmp1 = tmp1->next;
			free(tmp);
		}
		free(tmp1);
		*head = NULL;
	}
}

