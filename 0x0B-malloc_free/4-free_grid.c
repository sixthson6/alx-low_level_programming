#include <stdlib.h>

/**
 * free_grid - free memory
 * @grid: 2-dim grid
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
