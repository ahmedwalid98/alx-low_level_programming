#include "lists.h"
/**
 * print_list - prints all elements of the list
 * @h: the list
 * Return:  the size
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}