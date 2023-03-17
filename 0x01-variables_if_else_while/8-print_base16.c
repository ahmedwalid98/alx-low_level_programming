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
	}
	for (i = 49; i < 55; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
