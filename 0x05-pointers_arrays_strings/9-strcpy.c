#include "main.h"
/**
 * _strcpy - Copies string pointed by src
 * @src: The source string
 * @dest: The copied string
 * Return: Destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
