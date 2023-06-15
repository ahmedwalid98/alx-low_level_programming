#include "lists.h"
/**
 * add_dnodeint - add node to first
 * @head: the node
 * @n: the noce value
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;


	new->next = h;

	if (h)
		h->prev = new;
	*head = new;
	return (new);
}
