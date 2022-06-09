#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints values.
 * @c: char to be checked.
 *
 * Return: 0.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
