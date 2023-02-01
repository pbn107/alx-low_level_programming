#include "lists.h"

/**
 * pop_listint - removes a node from a linked list
 * @head: pointer to a linked list
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head, *tmp1 = *head;
	int num = tmp1->n;

	*head = tmp1->next;

	if (*head == NULL)
	{
		return (0);
	}
	free(tmp);
	return (num);
}
