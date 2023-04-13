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
	j = max - min
	arr = malloc(j + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < j + 1; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
