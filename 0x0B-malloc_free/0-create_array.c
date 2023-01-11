#include "main.h"
#include <stdio.h>


char *create_array(unsigned int size, char c)
{
	char *arr = malloc((size * c) + 1);

	if (size == 0)
	{
		return (0);
	}

	int  = 0;

	while (arr[i] <= size)
	{
		arr[i] = c;
		i++;
	}

	return arr;
}





