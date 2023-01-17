#include "main.h"

/**
 * array_range - stores numbers n an array from min to max (inclusively)
 * @min: minimum number
 * @max: maximum number
 * Return: a pointer to the array of numbers
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *)malloc((max + 1) * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < ((max + 1) -min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
