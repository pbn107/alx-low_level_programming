#include "main.h"

/**
 * alloc_grid - allocate memory
 * @width: length of the inside array
 * @height: length of the outside
 * Return: number
 */

int **alloc_grid(int width, int height)
{
    int i, j;
    int **arr = (int**)malloc(sizeof(int*) * height);
    
    if( height <= 0 || width <= 0)
    {
        return NULL;
    }
    
    if (arr == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < height; i++)
    {
        arr[i] = (int*)malloc(sizeof(int) * width);
    }
    
    for(i = 0; i < height; i++)
    {
        for(j= 0; j < width; j++)
        {
            arr[i][j] = 0;
        }
    }
    
    return arr;
    
}

