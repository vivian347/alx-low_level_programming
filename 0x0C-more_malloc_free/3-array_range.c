#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: the minimum integer
 * @max: themaximum integer
 *
 * Return: NULL if min > max || if malloc fails
 */

int *array_range(int min, int max)
{
	int *new_arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	new_arr = malloc(sizeof(int *) * (size + 1));
	if (new_arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		new_arr[i] = min++;
	return (new_arr);
}
