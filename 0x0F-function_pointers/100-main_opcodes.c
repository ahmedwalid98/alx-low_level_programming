#include <stdlib.h>
#include <stdio.h>

/**
 * print_op - print op codes
 * @a: the code
 * @n: number of bytes
 */
void print_op(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: array og arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_op((char *)&main, n);
	return (0);
}
