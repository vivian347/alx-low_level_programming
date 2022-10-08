#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * 
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *entry;
	long unsigned int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		if (entry != NULL)
		{
			if (flag == 1)
				printf(", ");
			for (;;)
			{
				printf("'%s' : '%s'", entry->key, entry->value);
				if (entry->next == NULL)
				break;
				entry = entry->next;
				if (entry != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
