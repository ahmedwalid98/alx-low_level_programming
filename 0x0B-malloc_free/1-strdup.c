#include "main.h"
#include <stdlib.h>
/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: copied string
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		len++;
		str++;
	}
	s = (char *) malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
		s[i] = str[i];

	return (s);
}
