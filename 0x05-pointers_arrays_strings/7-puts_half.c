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
	for (n = ((len - 1) / 2) + 1; n < len; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
