#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional array
 * @grid: 2d arr
 * height: size of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
