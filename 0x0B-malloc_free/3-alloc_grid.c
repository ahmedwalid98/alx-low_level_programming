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
	int *ptr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int *) malloc((width * height) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < width * height; i++)
		ptr[i] = 0;

	return (ptr);
}
