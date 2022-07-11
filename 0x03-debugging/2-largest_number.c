#include "main.h"

/**
  * largest_number - returns largest number of 3
  * @a: first int
  * @b: second int
  * @c: third int
  *
  * Return: largest int
  */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
		largest = a;
	if (b > a && b > c)
		largest = b;
	if (c > a && c > b)
		largest = c;

	return (largest);

}
