#include "search_algos.h"

/**
 * interpolation_search - implement interpolation search algo
 * @array: array
 * @size: len of array
 * @value: val to search for
 *
 * Return: 1st idx where the val is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = array[0];
	size_t hi = array[size - 1];
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	for (lo = 0, hi = size -1; hi >= lo;)
	{
		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			return (-1);
		}
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));

		if (pos < size)
			printf("Value checked array[%ld] =[%d]\n",  pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			lo = pos + 1;

		if (array[pos] > value)
			hi = pos - 1;
	}
	return (-1);
}	
