#include "lists.h"

/**
 * print_list - prints all el of list_t
 * @h: pointer
 *
 * Return: numberof nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
