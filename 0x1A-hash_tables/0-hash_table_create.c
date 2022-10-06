#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 *
 * @size: is the size of the array
 * Return: a pointer t the newly created arrayor NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	if (hashtable == NULL)
		return (NULL);

	hashtable->size = size;

	hashtable->array = calloc(hashtable->size, sizeof(hash_node_t));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	return (hashtable);
}
