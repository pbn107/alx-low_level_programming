#include "main.h"

/**
 * malloc_checked - check the code
 * @b: number of bytes
 * Return: memory of void type.
 */

void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);

	if (arr == NULL)
	{
		return (void *)98;
	}
	return (arr);
}

