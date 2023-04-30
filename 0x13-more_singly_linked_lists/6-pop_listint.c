#include "lists.h"
/**
 * pop_listint - deletes the first node
 * @head: pointer to pointer point to list
 * Return: the node value
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	return (tmp->n);
}
