#include "main.h"
/**
 * _strpbrk - Searches string for any set of bytes
 * @s: Frist string
 * @accept: Second String
 * Return: The final string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
