#include "main.h"
#include <ctype.h>
/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * check - check if s is plaindrome
 * @s: string
 * @i: first index
 * @j: last index
 * Return: 1 if plaindrome 0 if not
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - Checks if string is plaindrome
 * @s: the string to be checked
 * Return: 1 if its plaindrome 0 if not
 */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}
