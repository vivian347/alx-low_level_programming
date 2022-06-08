#include "main.h"

/**
 * print_to_98 - naturalnumbers to 98.
 * @n: integer to be computed.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			
			n -= 1;
		}
		_putchar(',');                                                                                                  
		_putchar(' ');

		_putchar((n % 10) + '0');
	}
	else
	{
		while (n < 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');

			n++;
		}

		_putchar((n % 10) + '0');
	}
}

