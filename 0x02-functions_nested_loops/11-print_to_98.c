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
			_putchar(n);
			
			n -= 1;
		}
		_putchar(',');                                                                                                  
		_putchar(' ');

		_putchar(n);
	}
	else
	{
		while (n < 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');

			n++;
		}

		_putchar(n);
	}
}

