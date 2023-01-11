#include "main.h"

/**
 * argstostr - changes arguments to an array of strings
 * @ac: arguments
 * @av: array of arguments
 */

char *argstostr(int ac, char **av[])
{
	int i = 0, j = 0;
	char *arr = (char*)malloc(sizeof(char) * 500);

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	while (i <= ac)
	{
		j = 0;
		while( av[i][j] != '\0')
		{
			arr[i+j] = av[i][j]; 
			j++;
		}
		arr[i+j] = '\0';
		i++;
	}
	return (arr);
}

