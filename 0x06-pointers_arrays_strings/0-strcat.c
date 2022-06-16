#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 *Return: return pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char str[1000];
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		str[j] = dest[i];
		i++;
		j++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		str[j] = src[i];
		i++;
		j++;
	}

	str[i] = '\0';
	return (str);
}
