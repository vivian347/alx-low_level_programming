#include "main.h"

/**
 * *_strchr - locates char in astring
 * @s: string
 * @c: character to be located
 *
 * Return: pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return ('\0');
}
