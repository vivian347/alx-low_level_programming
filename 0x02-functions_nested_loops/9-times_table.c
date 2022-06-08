#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int n, result, mult;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar('0');

		result  = n * 9;

		if (n < 10)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) = '0');
		}

		_putchar('\n');
	}
}
