#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument numbers
 * @argv: arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(*argv[1]);
	n2 = aroi(*argv[3]);
	op = *argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
