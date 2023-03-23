#include "main.h"
#include <ctype.h>
/**
 * _isdigit - Checks the parm is digit or not
 * @c: The parameter to be cheked
 * Return: 1 if its digit 0 if its not
 */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
