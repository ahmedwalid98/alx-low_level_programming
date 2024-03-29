#include "variadic_functions.h"
/**
 * sum_them_all - sum all of parameters
 * @n: parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
