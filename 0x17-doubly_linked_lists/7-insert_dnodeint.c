#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: pointer to pointer of head node
 * @idx: index for insertion
 * @n: data to be inserted at position
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		*h = new;
		return (new);
	}
	while (count < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		count++;
	}
	new->next = temp->next;
	temp->next->prev = new;
	temp->next = new;
	new->prev = temp;

	return (new);
}
