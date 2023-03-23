#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks if char is uppercase or not
 * @c: Character to be checked
 * Return: Return 1 if its uppercase and 0 if its not
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
