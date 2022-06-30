#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -allocate memusing malloc
 * @b: integer
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
