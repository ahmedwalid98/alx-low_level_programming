#include "lists.h"
/**
 * listint_len - find the len of the list
 * @h: the list
 * Return: the length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
