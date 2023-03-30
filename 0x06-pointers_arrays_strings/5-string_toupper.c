#include "main.h"
/**
 * string_toupper - Changes all lowercase to uppercase
 * @s: The string
 * Return: The new string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
