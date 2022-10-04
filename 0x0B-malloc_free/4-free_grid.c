#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function
 * @grid:array pointer of int
 * @height: the height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
