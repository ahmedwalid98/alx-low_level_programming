#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: argmuents counter
 * @av: arguments
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *args, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j++])
			len++;

		len++;
	}
	args = (char *) malloc(sizeof(char) + 1);
	if (args == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;
		while (s[k])
		{
			args[j] = s[k];
			j++;
			k++;
		}
		args[j++] = '\n';
	}
	args[j] = '\0';

	return (args);
}
