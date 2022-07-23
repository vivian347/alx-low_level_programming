#include "main.h"

/**
 * set_bit - sets valof a bit to 1 at givenindex
 * @n: bit
 * @index: index
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	num ^= (1 << index);
	return (1);
}