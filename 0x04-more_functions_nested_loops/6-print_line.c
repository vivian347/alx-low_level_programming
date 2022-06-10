#include "main.h"

/**
 * print_line - prints a horizontal line
 * @n: length
 */

void print_line(int n)
{
	int length;

	for (length = 0 ; length < n ; length++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
