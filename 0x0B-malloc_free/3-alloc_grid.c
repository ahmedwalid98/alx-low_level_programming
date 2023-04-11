#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc((width + height) * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	free(ptr);
	return (ptr);
}
