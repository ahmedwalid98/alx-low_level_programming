#include "main.h"
/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
		int i = 0;

		while (i <= 9)
		{
		int j = 0;

		while (j <= 9)
		{
			int result = i * j;

			if (result / 10 == 0)
			{
				_putchar(' ');
			} else
			{
				_putchar(result / 10 + '0');
			}
			if (j == 9)
			{
				_putchar(result % 10 + '0');
				break;
			}
			_putchar(result % 10 + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
