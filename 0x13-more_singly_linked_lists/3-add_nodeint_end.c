#include "lists.h"


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t *));
	listint_t *tmp = *head;


	node->n = (int)n;
	node->next = NULL;

	if (*head == NULL)
	{
		tmp = node;
		*head = tmp;

		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (*head);
}


	
