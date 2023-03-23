#include "main.h"
/**
 * print_diagonal - Make diagonal shape
 * @n: Number of lines
 */
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 2; j < i + 1; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
