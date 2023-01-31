#include "search_algos.h"
#include <math.h>

/**
 * min - minimum
 * @a: first elem
 * @b: second elem
 *
 * Return: least between the 2 elems
 */
size_t min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - implement jump search algo
 * @array: array
 * @size: len of array
 * @value: val to search for
 *
 * Return: 1st idx where the val is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = prev = 0; prev < size && array[prev] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		i = prev;
		prev += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev);

	prev = prev < size - 1 ? prev : size - 1;
	for (; i < prev && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
