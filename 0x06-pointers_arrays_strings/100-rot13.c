#include "main.h"
/**
 * rot13 - Encodes string using rot13
 * @s: String to be encoded
 * Return: The encoded string
 */
char *rot13(char *s)
{
	char *tmp = s;

	while (*s != '\n')
	{
		if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
		{
			*s += 13;
		} else if (*s >= 'N' && *s <= 'Z' || (*s >= 'n' && *s <= 'z'))
		{
			*s -= 13;
		}
		s++;
	}
	return (tmp);
}
