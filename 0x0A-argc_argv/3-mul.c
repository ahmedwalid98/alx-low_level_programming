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
	int first, second;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	printf("%d\n", first * second);
	return (0);
}
