#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	listint_t *tmp = (listint_t *)h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		nodes++;
		printf("%i\n", tmp->n);
		tmp = tmp->next;
	}
	return (nodes);
}
