#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *entry, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			entry = ht->array[i];
			while (entry != NULL)
			{
				tmp = entry->next;
				free(entry->key);
				free(entry->value);
				free(entry);
				entry = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
