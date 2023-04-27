#include "lists.h"
/**
 * add_node - add node of beginnig of list
 * @head: double pointer
 * @str: pointer to string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
