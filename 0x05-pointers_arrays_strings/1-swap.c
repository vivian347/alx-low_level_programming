#include "main.h"

/**
 * swap_int - swaps values of 2integers.
 * @a: 1st int
 * @b: 2nd int
 */

void swap_int(int *a, int  *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
