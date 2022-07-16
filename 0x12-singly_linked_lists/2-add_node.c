#include "lists.h"
#include <string.h>

/**
 * add_node - adds new node to start of list
 * @head: pointer to head
 * @str: str to be added
 *
 * Return: address ofnew element or null
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];  len++)
		len++;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
