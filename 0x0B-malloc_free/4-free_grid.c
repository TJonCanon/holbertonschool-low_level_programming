#include "main.h"

/**
 * free_grid - frees 2 dimensional grid created by alloc_grid
 *
 * @grid: grid
 *
 * @height: height
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
