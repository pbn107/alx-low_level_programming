#include "main.h"

/**
 * _strdup - check the code for ALX School students.
 * @str: string
 * Return: pointer to a string
 */

int len(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return len;
}

char *_strdup(char *str)
{
	int i = 0, l = len(str);
	char *arr = (char *)malloc(l * sizeof(char));

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

