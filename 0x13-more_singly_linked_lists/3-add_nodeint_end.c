#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the ln=inked list
 * @head: pointer to the linked list
 * @n: number to store in a linked list
 * Return: pointer to the heade of the linked list
 */
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

		return (tmp);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	return (node);
}

