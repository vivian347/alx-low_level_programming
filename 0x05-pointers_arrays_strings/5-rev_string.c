#include "main.h"

/**
 * rev_string - prints reverse.
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char *r = s;

	while (*(r + 1) != '\0')
		r++;

	while (r > s)
	{
		char temp = *r;
		*r = *s;
		*s++ = temp;
	}
	_putchar(*r);
	_putchar('\n');
}
