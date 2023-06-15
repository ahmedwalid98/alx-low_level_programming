#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: the list
 * Return: number of members
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++num;
	}
	return (num);
}
