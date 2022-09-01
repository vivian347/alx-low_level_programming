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
	int countNodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		countNodes += 1;
		temp = temp->next;
	}
	printf("\n");
	return countNodes;
}
