#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sumof the 2 diagonals in a matrix
 * @a: matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0, d2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		d1 += a[i++];
		a += size;
	}
	a -= size;
	for (i = 0 ; i < size ; i++)
	{
		d2 += a[i++];
		a -= size;
	}
	printf("%d, %d\n", d1, d2);
}
