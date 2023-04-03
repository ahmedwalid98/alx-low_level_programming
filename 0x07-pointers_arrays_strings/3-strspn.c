#include "main.h"
/**
 * _strspn - Gets the length of prefix
 * @s: First String
 * @accept: Second String
 * Return: Length pf prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}
