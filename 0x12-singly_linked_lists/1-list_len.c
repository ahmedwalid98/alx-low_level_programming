#include "lists.h"
/**
 * list_len - counts number of elements
 * @h: the linked list
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
