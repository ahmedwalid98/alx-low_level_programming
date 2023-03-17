#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
			continue;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
