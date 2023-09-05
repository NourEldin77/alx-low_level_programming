#include "maim.h"
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: int pointer
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[i]);
	}
	free(grid);
}
