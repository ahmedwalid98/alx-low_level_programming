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
	char *f;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = strtol(argv[i], &f, 10);
			if (*f)
			{
				printf("Error\n");
				return (1);
			} else
			{
				sum += n;
			}
		}
		printf("%d\n", sum);
	} else
	{
		printf("0\n");
	}
	return (0);
}
