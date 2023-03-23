#include "main.h"
/**
 * print_number - Print all the integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
	} else
	{
		int tmp = n, i = 1;

		while (tmp != 0)
		{
			i *= 10;
			tmp /= 10;
		}
		i = i / 10;
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		while (i != 0)
		{
			_putchar(n / i + '0');
			n = n % i;
			i = i / 10;
		}
	}
}
