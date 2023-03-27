#include "main.h"
/**
 * print_rev - Print string in reverse order
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int length;

	length = _strlen(s) - 1;
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
}
