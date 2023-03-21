#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Check if the input is alpha or not
 * @c: The character to be checked
 *
 * Return: 1 if its character, 0 if its not
 */
int _isalpha(int c)
{
	int value = isalpha(c);

	if (value != 0)
		return (1);
	else
		return (0);
}
