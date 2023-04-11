#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: firs string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len_1 = 0, len_2 = 0, i, j;
	char *conc;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[len_1] != '\0')
		len_1++;

	while (s2[len_2] != '\0')
		len_2++;

	conc = (char *) malloc((sizeof(char) * len_1) + (sizeof(char) * len_2) + 1);
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		conc[i] = s1[i];

	for (i = len_1, j = 0; j < len_2; i++, j++)
		conc[i] = s2[j];

	conc[len_2] = '\0';
	return (conc);
}
