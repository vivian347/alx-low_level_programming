#include "main.h"

int prime(int num, int i);
int is_prime_number(int n);

/**
 * prime - finds prime numbers
 * @num: num to check whether it is prime
 * @i: divisor)
 *
 * Return: prime
 */

int prime(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i * i > num)
		return (1);
	return (prime(num, i + 1));
}

/**
 * is_prime_number - returns 1 if prime
 * @n : integer to be computed
 *
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime(n, i));
}
