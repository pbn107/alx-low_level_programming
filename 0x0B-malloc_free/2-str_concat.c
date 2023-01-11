#include "main.h"

/**
 * _str_concat - check the code for ALX School students.
 * @s1: first string
 * @s2: second string
 * Return: pointer to a string.
 */
char *str_concat(char *s1, char *s2)
{
	char * arr,*tmp = " ";
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (tmp);
	}
	if (s1 == NULL)
	{
		s1 = tmp;
	}
	if (s2 == NULL)
	{
		s2 = tmp;
	}
	arr = malloc(sizeof(s1) + sizeof(s2) + 1);

	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}


	while (s2[j] != '\0')
	{
		arr[i + j] = s2[j];
		j++;
	}
	arr[i + j] = '\0';
	return (arr);
}
