#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed str)
 * @len: length of str
 * @next: points to next node
 *
 * Description: singly linked list node struct
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
