#include "main.h"
/**
 * print_most_numbers - To print numbers from 0 to 9 excepct 2, 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
