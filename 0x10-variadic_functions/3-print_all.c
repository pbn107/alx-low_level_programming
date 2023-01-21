#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments of a function
 * @format: string of formats
 * ...: rest of the arguments
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0, j = 0;

	va_start(ls, format);
	while (format[j] != '\0')
	{
		if (i != 0 && (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
			printf(", ");
		if (format[j] == 'c')
		{
			printf("%c", va_arg(ls, int));
			i++;
		}
		else if (format[j] == 'i')
		{
			printf("%i", va_arg(ls, int));
			i++;
		}
		else if (format[j] == 'f')
		{
			printf("%f", va_arg(ls, double));
			i++;
		}
		else if (format[j] == 's' && va_arg(ls, char *) == NULL)
			printf("nil");
		else if (format[j] == 's')
			printf("%s", va_arg(ls, char *));
		j++;
	}
	printf("\n");
}

