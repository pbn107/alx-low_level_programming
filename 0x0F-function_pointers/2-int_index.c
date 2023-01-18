#include "function_pointers.h"

/**
 * int_index - checks if a number is in an array
 * @array: array of numbers to to be manipulated
 * @size: size of the array
 * @cmp: function to be applied to each element
 * Return: the index of the element otherwise -1 (fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
