#include "main.h"

/**
 * _islower- returns 1 if letter is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
