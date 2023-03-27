#include "main.h"
/**
 * _strlen - Calcualte the length of string
 * @s: String to be calculated
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
