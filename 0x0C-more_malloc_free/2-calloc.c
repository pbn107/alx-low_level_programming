#include "main.h"

/**
 * __calloc - alocate memory for an array using malloc
 * @nmemb: number of members
 * @size: size of an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = (void *)malloc(nmemb);
	int i = 0, j = 0;

	if (mem == NULL)
	{
		return (void *)NULL;
	}

	for (i = 0; i < nmemb; i++)
	{
		mem[i] = (void *)malloc(size);
	}

	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			mem[i][j] = {0};
		}
	}
	return mem;
}
