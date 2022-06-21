#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: String
 * @needle: substring
 *
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	b = needle;

	if (*b == 0)
	{
		return ((char *)haystack);
	}
	for (; haystack != 0 ; haystack += 1)
	{
		if (*haystack != *b)
			continue;
		a = haystack;

		while (1)
		{
			if (*b == 0)
				return ((char *)haystack);
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return ('\0');
}

