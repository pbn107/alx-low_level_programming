#include "main.h"

/**
 * reverse_array- check the code
 * @a: array of numbers
 * @n: number of elements
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
    int i = n - 1;
    n -= 1;


    while (n >= 0)
    {
        if (n == i)
        {
            printf("%i", a[n]);
        }
        else
        {
            printf(", %i", a[n]);
        }
        n--;
    }
    printf("\n");
}