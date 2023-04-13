#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the length
 * Return: a pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char  *string;

	while (s1[i] != '\0')
	{
		i++;
	}

	string = malloc((sizeof(char) * i) + (n + 1));
	if (string == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		string[j] = s1[j];
		j++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}
