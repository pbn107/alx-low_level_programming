#include <stdio.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	int i;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", va_arg(ls, int);
		}
		else
		{
			printf("%s%d", separator, va_arg(ls, int);
		}
	}
	va_end(ls);
	printf("\n");
}

