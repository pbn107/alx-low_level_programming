#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	list_t * node = NULL;

	if (h == NULL)
	{
		return (1);
	}

	for (node = (list_t *)h; node != NULL; node = node->next)
	{
		nodes++;
	}
	return (nodes);
}
