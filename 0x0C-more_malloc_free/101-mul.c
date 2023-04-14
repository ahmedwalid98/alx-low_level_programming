#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_prod(char *final_prod, char *next_prod, int next_len);
/**
 * findlen - calc length of string
 * @str: the string
 * Return: the length
 */
int find_len(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * create_xarray - create array of x
 * @size: size of array
 * Return: pointer to array
 */
char *create_xarray(int size)
{
	char *arr;
	int i;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size - 1); i++)
		arr[i] = 'x';
	arr[i] = '\0';
	return (arr);
}
/**
 * iterate_zeroes - check if a string has non zeroes
 * @str: the string
 * Return: pointer to char;
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}
/**
 * get_digit - get digit from char
 * @c: the character
 * Return: the digit
 */
int get_digit(char c)
{
	int dig = c - '0';

	if (dig < 0 || dig > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (dig);
}
/**
 * get_prod - get the product of multi
 * @prod: buffer to store the production
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: necessary number of leading zeroes
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mul_size, num, tens = 0;

	mul_size = find_len(mult) - 1;
	mult += mul_size;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mul_size >= 0; mul_size--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num & 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}
/**
 * add_prod - add the numbers in to string
 * @final_prod: buffer hold the last prod
 * @next_prod: next num to be added
 * @next_len: len of product
 */
void add_prod(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;


	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		next_prod--;
		final_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}
/**
 * main - entry point
 * @argc: arguments counter
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	char *final_prod, *next_prod;
	int size, i, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);

	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (i = find_len(argv[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(argv[2] + i));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_prod(final_prod, next_prod, size - 1);
	}

	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');
	free(next_prod);
	free(final_prod);
		return (0);
}
