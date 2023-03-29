#include "main.h"
/**
 * _strncpy - Copies string
 * @dest: The final result
 * @src: the string to be copied
 * @n: Length of string
 * Return: A string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;
	int i = 0;

	while (i < n && *dest != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (s);
}

