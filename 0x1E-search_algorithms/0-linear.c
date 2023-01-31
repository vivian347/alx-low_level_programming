#include "search_algos.h"

/**
 *  linear_search - Implements linear search algorithm
 *  @array: pointer to first element of array to search in
 *  @size: number of el in array
 *  @value: value to search for
 *
 *  Return: 1st index where val is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
