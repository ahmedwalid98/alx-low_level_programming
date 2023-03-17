#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (j == 9 && i == 8)
				continue;
			putchar(44);
			putchar(' ');
		}
	}

	return (0);
}
