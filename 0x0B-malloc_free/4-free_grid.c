#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * @grid: input
 * @height: input
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
