#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to head
 *
 * Return: 0 or result
 */

int pop_listint(listint_t **head)
{
	listint_t *ref = *head;
	int result = ref->n;

	if (*head == NULL)
		return (0);
	(*head) = (*head)->next;
	free(ref);
	return (result);
}
