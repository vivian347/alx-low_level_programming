#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to pointer
 * @index: position to del
 *
 * Return: 1 on success or -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (count < index)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (-1);
		count++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}

