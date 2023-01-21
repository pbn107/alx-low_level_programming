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
	int i = 0, j = 0;

	va_start(ls, format);
	while (fmt[j] != '\0')
	{
		if (i != 0 && (fmt[j] == 'c' || fmt[j] == 'i' || fmt[j] == 'f' || fmt[j] == 's'))
			printf(", ");
		if (fmt[j] == 'c')
		{
			printf("%c", va_arg(ls, int));
			i++;
		}
		else if (fmt[j] == 'i')
		{
			printf("%i", va_arg(ls, int));
			i++;
		}
		else if (fmt[j] == 'f')
		{
			printf("%f", va_arg(ls, double));
			i++;
		}
		else if (fmt[j] == 's' && va_arg(ls, char *) == NULL)
			printf("nil");
		else if (fmt[j] == 's')
			printf("%s", va_arg(ls, char *));
		j++;
	}
	printf("\n");
}

