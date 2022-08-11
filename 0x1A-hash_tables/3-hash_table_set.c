#include "hash_tables.h"

/**
 * hash_table_set - makes a hash table set.
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 1 or 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;

	if (!ht || !key || !value)
	{
		return (0);
	}

	i = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if(!new)
		return (0);

	if (ht->array[i] == NULL)
	{
		new->next = NULL;
	}
	else
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
		}
		new->next = ht->array[i];
	}

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	ht->array[i] = new;

	return (1);
}