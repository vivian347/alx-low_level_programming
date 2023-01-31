#include "search_algos.h"

/**
 * binary_search - implement binary search algo
 * @array: pointer to 1st el in array
 * @size: number of elements in array
 * @value: val to search for
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = array[0];
	size_t high = array[size-1];
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

