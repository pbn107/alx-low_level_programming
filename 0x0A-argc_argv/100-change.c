#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of numbers
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
    int change = 0, cents = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    change = atoi(argv[1]);
    while (change > 0)
    {
        if (change >= 25)
        {
            change -= 25;
            cents += 1;
        }
        if (change >= 10 && change < 25)
        {
            change -= 10;
            cents += 1;
        }
        if (change >= 5 && change < 10)
        {
            change -= 5;
            cents += 1;
        }
        if (change >= 2 && change < 5)
        {
            change -= 2;
            cents += 1;
        }
        if (change >= 1 && change < 2)
        {
            change -= 1;
            cents += 1;
        }
    }
    printf("%i\n", cents);
    return (0);
}