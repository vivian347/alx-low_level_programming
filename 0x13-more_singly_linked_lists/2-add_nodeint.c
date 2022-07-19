#include "lists.h"

/**
 * add_nodeint - adds node at  start of linked list
 * @head: firstnode
 * @n: data tobe added
 *
 * Return: new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
