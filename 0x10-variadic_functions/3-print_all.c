#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_int(va_list ap);
void print_char(va_list ap);
void print_float(va_list ap);
void print_str(va_list ap);
void print_all(const char * const format, ...);

/**
 * print_int - prints integers
 * @ap: list of arg pointing to int tobe passed
 */

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_char - prints characters
 * @ap: list of arg
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: list of arg
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_str - prnts a string
 * @ap: list ofarg
 */

void print_str(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{

		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints all types
 * @format: string of characters rep argument type
 *
 * Description: any arg noot of type int, char, float
 *  or string isn'y printed
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};

	va_start(ap, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(ap);
			separator = ", ";
		}

		i++;
	}
	printf("\n");
	va_end(ap);
}
