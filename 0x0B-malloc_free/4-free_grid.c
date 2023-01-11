#include "main.h"

/**
 * free_grid - frees memory
 * @grid: memory to be freed
 * @height: height of the array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

