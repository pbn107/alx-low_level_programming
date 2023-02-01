#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a given index
 * @head: pointer to a linked list
 * @index: index ofthe pointer
 * Return: nod
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		if (pos == index)
		{
			return (tmp);
		}

		tmp = tmp->next;
		pos++;
	}
	return (NULL);
}
