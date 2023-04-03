#include "main.h"
/**
 * _strstr - Loacates substring
 * @haystack: First string to be searched
 * @needle: Substring to be found
 * Return: A pointer to sub string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && needle[0] == haystack[i])
		{
			if (haystack[i + 1] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		} else
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
