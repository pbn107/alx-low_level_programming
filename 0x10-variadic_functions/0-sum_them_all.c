#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments passed
 * @n: number of arguments
 * @...: other arguments
 * Return: 0 if no arguments and sum if there are arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i;
	va_list ls;

	if (n == 0)
	{
		return (0);
	}
	va_start(ls, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ls, int);
	}
	return (sum);
}
