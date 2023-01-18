#include "3-calc.h"
#include <stdio.h>

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

int i;
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if ((char)ops[i].op) == (char)(s))
		{
			return(ops[i].f(a, b);
		}
	}
	return (NULL);
} 
