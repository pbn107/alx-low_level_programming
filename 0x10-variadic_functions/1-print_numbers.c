#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers passed as arguments
 * @separator: string that separates numbers
 * @n: number of arguments
 * ...: remaining arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	int i;

	va_start(ls, n);

	for (i = 0; i < (int)n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(ls, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(ls, int));
		}
	}
	va_end(ls);
	printf("\n");
}

