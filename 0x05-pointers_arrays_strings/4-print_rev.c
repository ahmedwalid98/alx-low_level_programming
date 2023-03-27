#include "main.h"
/**
 * print_rev - Print string in reverse order
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
