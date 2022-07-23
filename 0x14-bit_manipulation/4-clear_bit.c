#include "main.h"

/**
 * clear_bit - sets val of a bit to 0 at a given index
 * @n: number
 * @index: position
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned int long) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
