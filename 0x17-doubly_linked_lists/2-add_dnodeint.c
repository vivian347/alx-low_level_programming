#include "lists.h"

/**
 * add_dnodeint - adds a new node at start of list
 * @head: pointer to head
 * @n: data to be entered
 *
 * Return: address of new elem or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	(*head) = newNode;

	return (newNode);
}
