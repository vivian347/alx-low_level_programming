#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table to add or update key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Returns: 1 on success or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int i, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if(value_cpy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if(strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if(new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[i];
	ht->array[i] = new;

	return (1);
}
