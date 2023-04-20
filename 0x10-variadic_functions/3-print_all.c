#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list ls;

	va_start(ls, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ls, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ls, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(ls, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ls);
}
