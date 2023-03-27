#include "main.h"
/**
 * swap_int - Swapping to numbers by their memory address
 * @a: The first address
 * @b: Second address
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
