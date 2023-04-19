#include "function_poiters.h"
/**
 * int_index - searches for integer
 * @array: arr to be searched in
 * @size: size of the array
 * @cmp: a pointer to function
 * Return: index of the first element, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
