#include "main.h"

/**
 * factorial - returns factorialof number
 * @n: integer given
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
