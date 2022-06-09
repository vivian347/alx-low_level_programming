#include "main.h"

/**
 * print_numbers - prints numbers from 0-9.
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num);
		num += 1;
	}

	_putchar('\n');
}
