#include "lists.h"
#include <stdlib.h>
void free_list(list_t *head)
{	
	while (head != NULL)
	{
		list_t *node  = head->next;
		free(head->str);
		free(head);
		head = node;
	}		
}

