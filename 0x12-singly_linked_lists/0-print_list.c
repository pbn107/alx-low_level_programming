#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	list_t *node = NULL;

	for (node = (list_t *)h; node != NULL; node = node->next)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n",node->len, node->str);
		}
		nodes++;
	}
	return (nodes);
}
