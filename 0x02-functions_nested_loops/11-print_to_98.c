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
			printf("%d, ", n--);

		printf("%d", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);

		printf("%d", n);
	}
}

