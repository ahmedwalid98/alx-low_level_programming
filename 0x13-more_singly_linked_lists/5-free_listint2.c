#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head->next;
		free(*head);
		*head = temp;
	}
	free(head);
}
