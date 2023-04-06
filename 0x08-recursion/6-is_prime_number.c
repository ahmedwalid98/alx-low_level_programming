#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int check(int a, int b)
{
	if (a == b)
		return (1);
	if (a > b)
		return (0);
	return (check(a + 2, b));
}
/**
 * is_prime_number - Checks if the number is prime
 * @n: The number to be checked
 * Return: 1 if its prinme 0 if its not
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (check(3, n));
}
