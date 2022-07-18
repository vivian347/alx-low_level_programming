#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds new node at end of linked list
 * @head: node at the beginning of list
 * @str: string to be added at new node
 *
 * Return: end-node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *end_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (end_node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(end_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	end_node->str = dup;
	end_node->len = len;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (0);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = end_node;
	return (0);

	return (end_node);
}
