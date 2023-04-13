#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: members of array
 * @size: size of every member
 * Return: pointer to new array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb * size == 0)
		return (NULL);
	i = malloc(nmemb * size);
	if (i == NULL)
		return (NULL);
	for (j = 0; j < nmemb * size; j++)
		i[j] = 0;
	return (i);
}
