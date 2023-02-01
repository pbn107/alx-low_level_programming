#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h:linked list
 * Return: linked lists
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	listint_t *tmp = (listint_t *)h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		nodes++;
		_putchar(tmp->n + 48);
		_putchar(10);
		tmp = tmp->next;
	}
	return (nodes);
}
