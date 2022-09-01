#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a list
 * @head: pointer to pointer to head
 * @n: data to be added
 *
 * Return: address of new elem or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_new = malloc(sizeof(dlistint_t));

	if (end_new == NULL)
		return (NULL);

	end_new->n = n;
	end_new->next = NULL;

	if (*head == NULL)
	{
		end_new->prev = NULL;
		*head = end_new;
		return (end_new);
	}

	while ((*head)->next != NULL)
	{
		(*head)->next = *head;
	}
	(*head)->next = end_new;
	end_new->prev = *head;

	return (end_new);
}
