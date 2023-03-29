#include "main.h"
/**
 * reverse_array - Reverses the content of array
 * @a: Arraye to be reversed
 * @n: Length of array
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	while (i < (n / 2))
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = tmp;
		i++;
	}
}
