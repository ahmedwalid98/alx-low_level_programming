#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
