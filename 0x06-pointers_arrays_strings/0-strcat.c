#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The desireable string
 * @src: The second string
 * Return: A string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
