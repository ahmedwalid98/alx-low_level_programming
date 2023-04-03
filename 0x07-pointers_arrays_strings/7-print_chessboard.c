#include "main.h"
/**
 * print_chessboard - Prints chessboard
 * @a: The array to be printed
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (a[i][j] != '\0')
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
