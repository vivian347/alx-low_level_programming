#include "main.h"

int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);

/**
 * _strlen - returns length of str
 * @s: string
 * Return: length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b:ponter to a string of 0s and 1s
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int j = 0;
	int i;
	unsigned int len;

	len = _strlen(b);
	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			j += k;
		}
		k *= 2;
	}
	return (j);
}
