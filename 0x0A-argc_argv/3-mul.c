#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: arguments counter
 * @argv: array of strings
 * Return: always success (0)
 */
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		pritf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
