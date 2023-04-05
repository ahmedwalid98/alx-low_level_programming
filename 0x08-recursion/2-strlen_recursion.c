#include "main.h"
/**
 * _strlen_recursion - Length of the number
 * @s: String
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion);
	else
		return (0);
}
