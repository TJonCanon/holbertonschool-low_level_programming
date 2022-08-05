#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size
 *
 * Return: hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int count;
	hash_table_t *hash = malloc(sizeof(hash_table_t));

	if (!hash)
		return (NULL);

	hash->array = malloc(sizeof(hash_table_t *) * size);

	if (!hash->array)
		return (NULL);

	hash->size = size;

	for (count = 0; count < size; count++)
		hash->array[count] = NULL;

	return (hash);
}
