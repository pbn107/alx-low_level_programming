#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node from an index
 * @head: pointer to the head
 * @index: index at which to delete a nod
 * Return: numbers
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	unsigned int pos = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *node = *head;

		*head = tmp->next;
		free(node);

		return (0);
	}

	while (tmp != NULL)
	{
		if (pos + 1 == index)
		{
			listint_t *node = tmp->next;

			tmp->next = tmp->next->next;
			free(node);
			return (0);
		}
		pos++;
		tmp = tmp->next;
	}
	return (-1);
}
