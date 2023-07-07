#include "hash_tables.h"
/**
 * hash_table_create - crate a hash table
 * @size: the size of the hash table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->siza = size;
	hash->array = malloc(size * sizeof(hash_node_s));

	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	return (hash);
}
