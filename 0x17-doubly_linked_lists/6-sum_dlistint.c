#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a list
 * @head: pointer to head node
 *
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int _sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		_sum += head->n;
		head = head->next;
	}
	return (_sum);
}
