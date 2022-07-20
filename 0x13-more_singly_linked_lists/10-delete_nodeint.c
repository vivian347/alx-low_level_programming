#include "lists.h"

/**
 * delete_nodeint_at_index - deltes node at nth position
 * @head: points tofirts node
 * @index: index at which node is to be deleted
 * Return: 1 if successful or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int j;
	listint_t *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (j = 0; temp != NULL && j < (index - 1); j++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
