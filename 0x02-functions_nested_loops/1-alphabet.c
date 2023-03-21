#include "main.h"

/**
 * print_alphabet - print all alphapet in lowercase
 *
 * main -Entry point
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
