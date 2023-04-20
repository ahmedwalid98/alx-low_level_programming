#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: separate two strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ls;

	va_start(ls, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char*);
		if (str == NULL)
			str == "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
