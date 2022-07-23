#include "main.h"

/**
 * set_bit - sets val of a bit to 1 at a give index
 * @n: number
 * @index: position
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long num = *n;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	num ^= (1 << index);
	return (1);
}
