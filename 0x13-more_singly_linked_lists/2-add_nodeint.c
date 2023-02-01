#include "lists.h"

/**
 * add_nodeint - adds the node to  linked list
 * @head: pointer to the heade of a linked list
 * @n:number to be stored in a node
 * Return: pointer to the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t *));

	tmp->n = (int)n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);

}
