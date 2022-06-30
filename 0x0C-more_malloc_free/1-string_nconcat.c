#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - prints s1 followed bythe first nbytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to be printed
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len = n;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		ret[len++] = s1[i];
	for (i = 0 ; s2[i] && i < n ; i++)
		ret[len++] = s2[i];
	ret[len] = '\0';
	return (ret);
}
