#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to head
 * @index: position of nth node
 *
 * Return: NULL or node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp->next = temp;
	}
	return (NULL);
}
