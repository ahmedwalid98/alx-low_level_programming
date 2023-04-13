#include "main.h"
/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 * Return: a pointer to integer array
 */
int *array_range(int min, int max)
{
	int *arr, i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
