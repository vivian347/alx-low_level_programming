#include "lists.h"

int currSize(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n);

/**
 * currSize - returns currents size of list
 * @head: points to start of list
 * Return: size
 */

int currSize(listint_t *head)
{
	int size = 0;

	while (head)
	{
		head = head->next;
		size++;
	}
	return (size);
}

/**
 * insert_nodeint_at_index - inserts node at nth position
 * @head: points to start of list
 * @idx: index at which new node is to inserted
 * @n: data to be contained in node
 *
 * Return: address of new node or NULL
 */


listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	unsigned int size = currSize(*head);
	listint_t *temp, *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;
	if (idx > size)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		temp = (*head);
		while (--idx)
			temp = temp->next;
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
