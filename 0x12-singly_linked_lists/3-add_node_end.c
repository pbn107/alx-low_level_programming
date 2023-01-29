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
 * add_node_end - adds a node to the end of linked list
 * @head: pointer to the end of a linked list
 * @str: string
 * Return: pointer to the linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL;
	list_t *tmp = *head;

	node = (list_t *)malloc(sizeof(list_t *));

	if (node == NULL)
	{
		printf("Error!\n");
	}

	node->str = strdup(str);
	node->len = len((char *)str);
	node->next = NULL;

	if (tmp == NULL)
	{
		tmp = node;
		*head = tmp;
		return (*head);
	}

	for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
	{
	}
	tmp->next = node;
	return (*head);
}


