#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - executes basic operations on numbers
 * @argc: number of arguments
 * @argv: array of strings
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error");
		return (98);
	}

	/*get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));*/
	printf("working %s\n", argv[1]);
	return (0);
}
