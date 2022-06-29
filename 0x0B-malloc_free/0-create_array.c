#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of char and initilizes it with specific char
 * @size: size of the array
 * @c: charcter to initialize array
 *
 * Return: pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
