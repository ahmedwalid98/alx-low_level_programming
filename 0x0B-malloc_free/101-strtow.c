#include "main.h"
#include <stdlib.h>
/**
 * wordcount - get word count from string
 *             without spaces
 *
 * @s: string to count words present
 *
 * Return: The number of words
*/
int wordcount(char *s)
{
	int words = 0;

	while (*s)
	{
		if (*s == ' ')
			s++;
		else
		{
			while (*s != ' ' && *s != '\0')
				s++;
			words++;
		}
	}
	return (words);
}
/**
 * free_array - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}
/**
 * strtow - splits string into words
 * @str: string to be splitted
 * Return: pointer to 2d arr
 */
char **strtow(char *str)
{
	int i, j, k, str_l, word;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordcount(str);
	s = (char **) malloc(sizeof(char *) * (str_l + 1));
	if (str_l == 0 || s == NULL)
		return (NULL);

	for (i = j = 0; i < str_l; i++)
	{
		for (word = j; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				j++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
				s[i] = (char *) malloc(sizeof(char) * (word - j + 2));
				if (s[i] == NULL)
				{
					free_array(s, i);
					return (NULL);
				}
				break;
		}

		for (k = 0; j <= word; j++, k++)
			s[i][k] = str[j];
		s[i][k] = '\0';
	}
	s[i] = NULL;
	return (s);
}
