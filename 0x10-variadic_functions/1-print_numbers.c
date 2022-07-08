#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string used toseparate numbers
 * @n: number of integers to be passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num, i;
	va_list ap;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
