#include "main.h"

/**
 * string_nconcat: joins 2 strings but copies n bytes from the 2nd string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy 
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = (char*)malloc(sizeof(s1) + n + 1);
	int i = 0, j = 0;

	if (str == NULL)
	{
		return NULL;
	}

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}


	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';

	return str;
}

