#include "main.h"
/**
 * _strchr - Locates character in a string
 * @s: The string
 * @c: The character to be located
 * Return: String started from located char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

