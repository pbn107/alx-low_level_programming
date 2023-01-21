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
		if (i != 0 && (*fmt == 'c' || *fmt == 'i' || *fmt == 'f' || *fmt == 's'))
		{
			printf(", ");
		}

		if (*fmt == 'c')
		{
			printf("%c", va_arg(ls, int));
			i++;
		}
		else if (*fmt == 'i')
		{
			printf("%i", va_arg(ls, int));
			i++;
		}
		else if (*fmt == 'f')
		{
			printf("%f", va_arg(ls, double));
			i++;
		}
		else if (*fmt == 's' && va_arg(ls, char *) == NULL)
		{
			printf("nil");
		}
		else if (*fmt == 's')
		{
			printf("%s",va_arg(ls, char *));
		}
		fmt++;
	}
	printf("\n");
}

