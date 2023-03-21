#include "main.h"
/**
 * print_alphapet_x10 - To print all alphapets in lowercase 10 times
 */
void print_alphapet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
