#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: the character
 * Return: return a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
