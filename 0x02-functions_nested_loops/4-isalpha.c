#include "main.h"

/**
 * _isalpha - returns 1 if its a letter.
 * @c: character to be checked.
 *
 * Return: returns 1 if letter, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
