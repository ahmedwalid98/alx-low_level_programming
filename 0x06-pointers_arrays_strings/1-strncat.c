#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The desireable string
 * @src: The second string
 * @n: Length of string
 * Return: A string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (s);
}
