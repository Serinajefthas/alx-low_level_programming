#include "hash_tables.h"

/**
 * hash_table_create - creates an empty has table
 * @size: size of hash table
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *htable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!htable)
	return (NULL);

	htable->size = size;
	htable->array = (hash_node_t **)calloc(htable->size, sizeof(hash_node_t *));

	for (i = 0; i < htable->size; i++)
		htable->array[i] = NULL;

	return (htable);
}
