#include "main.h"

/**
 * *_strcpy - copy to another location
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
