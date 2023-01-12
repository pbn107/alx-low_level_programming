#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of numbers
 */

int main(int argc, int *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i", (argv[1] * argv[2]));
	return (0);
}
