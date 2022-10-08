#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hashtable
 * @key: key
 * Return: value assciated with element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int slot = key_index((const unsigned char *)key, ht->size);
	hash_node_t *entry = ht->array[slot];

	if(entry == NULL)
		return (NULL);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}
	return (entry->value);

}
