#include "main.h"

/**
 * more_numbers - numbers 0-14 10x.
 */

void more_numbers(void)
{
	int count = 0;
	int num;

	while (count <= 10)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			_putchar((num % 10) + 48);
		}

		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
