#include "lists.h"
#include <string.h>

/**
 * print_listint - prints elemsnts of a list
 * @h: linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
