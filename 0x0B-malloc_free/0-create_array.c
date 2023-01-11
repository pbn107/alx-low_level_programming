#include "main.h"
#include <stdio.h>

/**
 * create_array - creates a string of size n and initializes each character to c
 * @size: size of the string
 * @c: char to initialiaze the string with
 * Return: pointer to a string
 */

char *create_array(unsigned int size, char c)
{
	int i =0;
	char *arr = malloc((size * c) + 1);

	if (size == 0)
	{
		return (0);
	}

	while (arr[i] <= size)
	{
		arr[i] = c;
		i++;
	}

	return arr;
}







