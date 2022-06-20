#include "main.h"

/**
 * *_memset - memory set
 * @s: pointer
 * @b: constant byte
 * @n: variable
 *
 * Return: pointer tomemory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		*(s + i) = b;
	return (s);
}
