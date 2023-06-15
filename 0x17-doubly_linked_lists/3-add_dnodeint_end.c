#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end
 * @head: pinter the the node
 * @n: the value
 * Return: the final node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;

	if (h == NULL)
		return (NULL);

	while (h)
		h = h->next;

	h->next = new;
	new->prev = h;
	*head = h;
	return (new);
}
