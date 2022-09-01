#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t countNodes = 0;

	while (temp != NULL)
	{
		countNodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (countNodes);
}
