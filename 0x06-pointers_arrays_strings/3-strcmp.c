#include "main.h"

/**
 * _strcmp- checks if two strings are identical
 *@s1: first string
 * @s2: second string
 * Return: interger.
 */
int _strcmp(char *s1, char *s2)
{
    int lens1 = 0, lens2 = 0, i = 0;

    while (s1[i] != '\0')
    {

        lens1++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {

        lens2++;
        i++;
    }
    if (lens1 == lens2)
    {
        i = 0;

        while (i < lens1)
        {
            if (s1[i] < s2[i])
            {
                return (+2);
            }
            if (s1[i] > s2[i])
            {
                return (-2);
            }

            i++;
        }
        return (0);
    }
    return (-10);
}