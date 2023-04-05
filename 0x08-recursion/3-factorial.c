#include "main.h"
/**
 * factorial - Return the factorial of given numebr
 * @n: The number
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
