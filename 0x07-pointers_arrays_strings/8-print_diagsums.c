#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sumofthe 2 diag
 * @a: matrix
 * @size: dimensions of matrix
 */

void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, index;

	for (index = 0 ; index < size ; index++)
	{
		d1 += a[index];
	}
	a -= size;
	for (index = 0 ; index < size ; index++)
	{
		d2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", d1, d2);
}
