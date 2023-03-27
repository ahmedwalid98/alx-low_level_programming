#include "main.h"
/**
 * puts_half - Print the second half of string
 * @str: String t bw printed
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (*(str + len) != '\0')
	{
		len++;
	}
	n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(*(str + i));
	}
}
