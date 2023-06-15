#include "lists.h"
/**
 * dlistint_len - get the list length
 * @h: the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
