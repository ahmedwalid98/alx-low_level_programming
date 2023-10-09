#include "search_algos.h"
/**
 * linear_search - function that search about element
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to be found
 * Return: -1 if not found index if found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
