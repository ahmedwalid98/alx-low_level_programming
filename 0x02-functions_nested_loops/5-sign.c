#include "main.h"
/**
 * print_sign - Check if the number is greater than zer or not
 * @n: The number to check
 *
 * Return: Return 1 if its gretaer, -1 if its less and 0 if it zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);
}
