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
	if (argc < 3)
	{
		pritf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	return (0);
}
