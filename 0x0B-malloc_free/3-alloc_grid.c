#include "main.h"
#include <stdlib.h>

/**
 * int **alloc_grid - returns pointer to a 2 dimensional array
 * @width: number of columns of matrix
 * @height: number of rows
 *
 * Return: pointer to matrix
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		array[i] = malloc(width * sizeof(int *));
		if (array[i] == NULL)
		{
			for (; i >= 0 ; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0  ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			array[i][j] = 0;
	}
	return (array);
}
