#include "main.h"
/**
 * binary_to_uint - converts a binary to number
 * @b: the binary code
 * Return: the number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x;

	x = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		x = x << 1;
		if (b[i] == '1')
			x = x + 1;
	}
	return (x);
}
