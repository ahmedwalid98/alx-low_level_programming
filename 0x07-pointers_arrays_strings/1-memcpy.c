#includ "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: The first string
 * @src: Second string
 * @n: The bytes
 * Return: The destination srting
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
