#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - return ponter to newly allocated space in mem
 * @str: orriginal string
 *
 * Return: pointer toduplicate string
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *dupp;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; i < str[i] ; i++)
	{
		len++;
	}

	dupp = malloc(sizeof(char) * (len + 1));
	if (dupp == NULL)
		return (NULL);
	for (i = 0 ; str[i] ; i++)
		dupp[i] = str[i];
	dupp[len] = '\0';
	return (dupp);
}
