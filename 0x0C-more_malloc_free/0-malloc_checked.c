#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates emory using malloc
 * @b: integer to be assigned mem
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
