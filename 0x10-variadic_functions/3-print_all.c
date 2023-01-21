#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments of a function
 * @format: string of formats
 * ...: rest of the arguments
 */

void print_all(char *format, ...)
{
	char *fmt = format;
	va_list ls;
	int i = 0;

	va_start(ls, format);

	while (*fmt)
	{
		if (*fmt == 'c')
		{
			if (i != 0)
				printf(", ");
			printf("%c", va_arg(ls, int));
			i++;
		}
		else if (*fmt == 'i')
		{
			if (i != 0)
				printf(", ");
			printf("%i", va_arg(ls, int));
			i++;
		}
		else if (*fmt == 'f')
		{
			if (i != 0)
				printf(", ");
			printf("%f", va_arg(ls, double));
			i++;
		}
		else if (*fmt == 's')
		{
			if (i != 0)
				printf(", ");
			printf("%s", va_arg(ls, char *));
			i++;
		}
		fmt++;
	}
	printf("\n");
}

