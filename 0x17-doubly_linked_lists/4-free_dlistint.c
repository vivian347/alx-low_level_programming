#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
