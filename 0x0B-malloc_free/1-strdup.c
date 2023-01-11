#include "main.h";

/**
 * _strdup - check the code for ALX School students.
 * @str: string
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *arr = malloc(sizeof(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

