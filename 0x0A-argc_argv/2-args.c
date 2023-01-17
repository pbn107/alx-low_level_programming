#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
