#include "hash_tables.h"

/**
 * key_index - function that gives you index of the key
 *
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
