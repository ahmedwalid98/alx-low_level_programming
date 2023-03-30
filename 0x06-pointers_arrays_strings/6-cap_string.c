#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @s: The sentence
 * Return: The final string
 */
char *cap_string(char *s)
{
	char *tmp = s;
	int i = 0;

	while (*s != '\0')
	{
		if (i == 0 && (*s >= 'a' && *s <= 'z'))
		{
			*s -= 'a' - 'A';
			i++;
		}
		if (*s == ',' || *s == ';' || *s == '.' || *s == '!' || *s == '?'
				|| *s == '"' || *s == '(' || *s == ')'
				|| *s == '{' || *s == '}' || *s == ' '
				|| *s == '\t' || *s == '\n')
		{
			if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
			{
				*(s + 1) -= 'a' - 'A';
				s += 2;
			}
		}
		s++;
	}
	return (tmp);
}
