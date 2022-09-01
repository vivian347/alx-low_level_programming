#include "lists.h"

/**
 * dlistint_len - returns number of elem in linked list
 * @h: pointer to head
 *
 * Return: number of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
