#include "main.h"

/**
 * print_binary - prints binary repof number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 15; i > 0; i >>= 1)
		printf("%u", !!(n & i));
}
