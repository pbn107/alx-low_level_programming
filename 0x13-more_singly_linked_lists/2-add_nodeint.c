#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t *));

	tmp->n = (int)n;
	tmp->next = *head;
	*head = tmp;

	return (*head);

}
