#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: str tobe printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
