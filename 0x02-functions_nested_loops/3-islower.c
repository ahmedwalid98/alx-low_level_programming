#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int value = islower(c);

	if (value == 0)
		return (1);
	else
		return (0);
}
