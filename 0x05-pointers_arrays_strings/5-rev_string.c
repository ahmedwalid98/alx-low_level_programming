#include "main.h"
/**
 * rev_string - Reverse string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len, i;
	char tmp;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		tmp = *(s + i);
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
