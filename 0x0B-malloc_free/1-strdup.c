#include "main.h"

/**
 * len - check the length of a string.
 * @s: string
 * Return: len
 */

int len(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _strdup - copies a string given as a parameter.
 * @str: string
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int i = 0, l = 0;

	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	l = len(str);
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

