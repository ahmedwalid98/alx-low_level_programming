#include "hash_tables.h"
/**
 * hash_table_get - get item in the list
 * @ht: the table
 * @key: key of the item
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	new_node = ht->array[index];
	return ((new_node == NULL) ? NULL : new_node->value);
}
