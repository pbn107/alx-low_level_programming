#include "lists.h"

/**
 * len - length of a string
 * @str: string
 * Return: len
 */

int len(char *str)
{
	int len = 0, i = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * add_node - add a ode at the beginning of a linked list
 * @head: pointer to the head
 * @str: string
 * Return: pointer to a linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;

	node = malloc(sizeof(list_t *));

	if (node == NULL)
	{
		printf("Error!\n");
	}

	node->str = strdup(str);
	node->len = len((char *)str);
	node->next = *head;
	*head = node;

	return (*head);
}


