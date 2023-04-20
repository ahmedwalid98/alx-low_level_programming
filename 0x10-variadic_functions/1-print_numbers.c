#include "variadic_function.h"
/**
 * print_numbers - prints numbers followed by new line
 * @separator: separate numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", setparator);
		}
	}
	printf("\n");
	va_end(nums);
}
