#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings passed as arguments
 * @separator: string to separate strings
 * @n: number of strings
 * @...: other strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	int i;

	va_start(ls, n);

	for (i = 0; i < (int)n; i++)
	{
		if (i == 0)
		{
			printf("%s", va_arg(ls, char *));
		}
		else
		{
			printf("%s%s", separator, va_arg(ls, char *));
		}
	}
	va_end(ls);
	printf("\n");
}

