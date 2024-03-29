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
	int cents, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else if (cents >= 1)
				cents -= 1;
			sum += 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
