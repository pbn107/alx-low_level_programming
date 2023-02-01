#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at the given index
 * @head: pointer to ha linked list
 * @idx: index to insert a new node at
 * @n: number to be sytored in a linked list
 * Return: linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int pos = 0;
	listint_t *tmp = *head;

	if (tmp == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		listint_t * node = malloc(sizeof(listint_t *));

		node->n = n;
		node->next = *head;
		*head = node;

		return (node);
	}

	while (tmp != NULL)
	{
		if (pos + 1 == idx)
		{
			listint_t *node = malloc(sizeof(listint_t *));

			node->n = n;
			node->next = tmp->next;
			tmp->next = node;
			return (node);
		}
		pos++;
		tmp = tmp->next;
	}
	return (NULL);
}
