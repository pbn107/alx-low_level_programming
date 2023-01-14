#include "main.h"

/**
 * cap_string - capitalise a string
 * @str: string
 * Return: pointer to a string.
 */

char *cap_string(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == 32 || str[i] == '.'|| str[i] == '\n'|| str[i] == '\t')
        {
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
            {
                str[i + 1] = str[i + 1] - 32;
            }
        }
        i++;
    }
    return (str);
}

