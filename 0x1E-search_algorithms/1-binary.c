#include "search_algos.h"
/**
 * binary_search -  function that searches for a value
 * in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the array
 * @size: size of the array
 * @value: the value to be found
 * Return: -1 if not found the index if else
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
