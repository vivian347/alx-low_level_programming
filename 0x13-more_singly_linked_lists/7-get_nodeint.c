#include "lists.h"

/**
 * get_nodeint_at_index - get nth node at given index
 * @head: head of linked list
 * @index: position at which wanted node is at
 *
 * Return: node or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int node = 0;

	while (node < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		node++;
	}
	return (head);
}
