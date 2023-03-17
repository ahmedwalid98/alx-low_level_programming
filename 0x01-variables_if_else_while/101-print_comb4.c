#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + x);
				if (j == 8 && i == 7 && x == 9)
					continue;
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
