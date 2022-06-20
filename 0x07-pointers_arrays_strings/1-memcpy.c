#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: source mem area
 * @n: integer
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *newsrc = (char *)src;
	char *newdest = (char *)dest;

	for (i = 0; i < n ; i++)
	{
		newdest[i] = newsrc[i];
	}
	return (dest);
}
