#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of two diagonals
 * @a: The array
 * @size : Size of array
 */
void print_diagsums(int *a, int size)
{
	int i, sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_1 += a[i];
		sum_2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", sum_1);
	printf("%d\n", sum_2);
}
