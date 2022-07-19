#include "lists.h"

/**
 * listint_len - prints number of el in a list
 * @h: pointer to start of list
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
