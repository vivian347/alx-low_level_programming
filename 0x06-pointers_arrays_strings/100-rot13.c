#include "main.h"

/**
 * *rot13 - encodes using rot13
 * @str: stringto be encoded
 *
 * Return: string
 */

char *rot13(char *str)
{
	int i, len = strlen(str);

	for (i = 0 ; i < len ; i++)
	{
		if ((*(str + i) >= 'a' && *(str + i) <= 'n' ||
					*(str + i) >= 'A' && *(str + i) <= 'N'))
			*(str + i) += 13;
		else if ((*(str + i) >= 'm' && *(str + i) <= 'z' ||
					*(str + i) >= 'M' && *(str + i) <= 'Z'))
			*(str + i) -= 13;
	}
	return (str);
}
