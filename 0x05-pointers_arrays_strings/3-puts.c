#include "main.h"
/**
 * _puts - Print string followed by new line
 * @str: String to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
