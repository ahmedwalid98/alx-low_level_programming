#include "main.h"
/**
 * _strcmp - Compares to strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 * Return: 0 if both equals, < 0 if s2 > s1, > 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
