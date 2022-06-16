#include "main.h"

/**
 * reverse_array - reverses string
 * @a: string
 * @n: number of el in aray
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
