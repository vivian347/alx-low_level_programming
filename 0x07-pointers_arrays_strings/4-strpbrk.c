#include "main.h"

/**
 * *_strpbrk - searches strin for any set of bytes
 * @s: stringto be searched
 * @accept: set of bytes
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
