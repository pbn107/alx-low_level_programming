#include "lists.h"

/**
 * pop_listint - removes a node from a linked list
 * @head: pointer to a linked list
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head, *tmp1 = *head;
	int num = 0;

	if (*head == NULL)
	{
		return (0);
	}
	num = tmp1->n;
	*head = tmp1->next;
	free(tmp);
	return (num);
}
