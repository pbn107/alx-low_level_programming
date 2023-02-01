#include "lists.h"

/**
 * listint_len - calculates the length of the linked list
 * @h: linked list
 * Return: length of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	listint_t *tmp = (listint_t *)h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
