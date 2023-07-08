#include "hash_tables.h"

/**
 * key_index - returns index of key given
 * @key: key given
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = hash_djb2(key);


