#include "main.h"
/**
 * _memset - Fills memory with constants bytes
 * @s: String to be replaced
 * @b: String to replace
 * @n: The total bytes
 * Return: Final string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
