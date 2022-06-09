#include "main.h"

/**
 * _isupper - prints uppercase letters.
 * @c: character to be checked.
 *
 * Return: Returns 1 if upper,
 * otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
