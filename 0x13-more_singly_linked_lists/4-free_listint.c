#include "lists.h"


/**
 * free_listint - frees memory allocated to a linked list
 * @head: pointer to the first element of a linked list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			tmp = head;
			head = head->next;
			free(tmp);
		}
		free(head);
	}
}
