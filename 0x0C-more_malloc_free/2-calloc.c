#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: number of array elements
 * @size: number of bytes
 *
 * Return: NULL if nmemb/size is 0 or when malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int i, nb;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nb = size * nmemb;
	a = b = malloc(nb);
	if (a == NULL)
		return (NULL);
	for (i = 0 ; i < nb ; i++)
	b[i] = '\0';
	return (a);
}
