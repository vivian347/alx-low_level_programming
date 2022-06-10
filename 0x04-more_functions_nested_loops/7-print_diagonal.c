#include "main.h"

/**
 * print_diagonal - prints diagonal line.
 * @n: number oftimes \ will be printed
 */

void print_diagonal(int n)
{
	int size, i;
	char b_slash = '\';

	for (i = 0 ; i < n ; i++)
	{
		for (size = 0 ; size < n ; size++)
		{
			if (size == i)
				_putchar(b_slash);
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}


