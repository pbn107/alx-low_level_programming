#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of numbers
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while ( i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%i\n", sum);
	return (0);
}
