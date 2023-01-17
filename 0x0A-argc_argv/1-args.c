#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always zero
 */
int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);
	return (0);
}
