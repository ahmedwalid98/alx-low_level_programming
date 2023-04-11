#include "main.h"
/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: the character
 * Return: return a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *s = (char *) malloc(sizeof(char) * size);
	int i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	free(s);
	return (s);
}
