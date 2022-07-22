#include "main.h"

/**
 * get_bit - returns val of a bit at a gven index
 * @n: bit
 * @index: index
 *
 * Return: val of bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
