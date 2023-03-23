#include "main.h"
/**
 * print_triangle - Make triangle shape
 * @size: Size of triangle
 */
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		_putchar('\n');
	} else
	{
		int i, j, x = size;

		while (x > 0)
		{
			for (i = 1; i < x; i++)
			{
				_putchar(' ');
			}
			for (j = i; j <= size; j++)
			{
				_putchar('#');
			}
			x--;
			_putchar('\n');
		}
	}
}
