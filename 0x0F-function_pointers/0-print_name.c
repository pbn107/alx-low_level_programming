#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: string
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
