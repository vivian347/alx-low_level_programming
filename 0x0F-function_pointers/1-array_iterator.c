#include "function_pointers.h"

/**
 * array_iterator - executes a fn given as a paramete
 * r on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer to fn
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
