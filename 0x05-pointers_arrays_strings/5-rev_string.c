#include "main.h"
/**
 * rev_string - Reverse string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len, i, j;
	char *rev;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	j = 0;
	for (i = len - 1; i >= 0; i++)
	{
		*(rev + j) = *(s + len);
		j++;
	}
}
