#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Print the last digit in the number
 * @n: The number we will print its last digit
 *
 * Return: Return the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = abs(n % 10);

	_putchar('0' + lastDigit);
	return (lastDigit);
}
