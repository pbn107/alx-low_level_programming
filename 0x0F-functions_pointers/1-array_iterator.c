#include "function_pointers.h"

/**
 * array_iterator - loops over numbers in an array applying a function on them
 * @array: array of numbers
 * @size: size of the array;
 * @action: function to be appied to each element
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
