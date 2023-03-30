#include "main.h"
/**
 * string_toupper - Changes all lowercase to uppercase
 * @s: The string
 * Return: The new string
 */
char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 'a' - 'A';
		}
		s++;
	}
	return (s);
}
