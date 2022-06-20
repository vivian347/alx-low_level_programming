#include "main.h"

/**
 * _strspn - gets len of a prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes ininitial seg
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int len;

	while (*s)
	{
		for (len = 0 ; accept[len] ; len++)
		{
			if (*s == accept[len])
			{
				count++;
				break;
			}
			else if (accept[len + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
