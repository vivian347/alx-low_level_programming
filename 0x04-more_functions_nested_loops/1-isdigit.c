#include "main.h"

/**
 * _isdigit - return 1 if digit
 * @c: integer to be computed.
 *
 * Return: return 1 if digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
