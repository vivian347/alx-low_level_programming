#include "main.h"

/**
 * print_diagonal - prints diagonal line.
 * @n: number oftimes \ will be printed
 */

void print_diagonal(int n)
{
	int size, i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (size = 0 ; size < i ; size++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
