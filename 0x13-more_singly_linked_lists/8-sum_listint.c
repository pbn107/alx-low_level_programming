
#include "lists.h"

/**
 * sum_listint - sums thenumbers in a linked list
 * @head: pointer to a linked list
 * Return:sum of the numbers in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (tmp == NULL)
		return (sum);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
