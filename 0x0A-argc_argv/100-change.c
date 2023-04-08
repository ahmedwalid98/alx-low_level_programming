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
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	int i, j, sum = 0;
	int changes[] = {25, 10, 5, 2, 1};

	for (i = 1; i < argc; i++)
	{
		j = 0;
		int cents = atoi(argv[i]);

		while (cents > 0)
		{
			if (cents >= changes[j])
			{
				cents -= changes[j];
				sum++;
			} else
			{
				j++;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
