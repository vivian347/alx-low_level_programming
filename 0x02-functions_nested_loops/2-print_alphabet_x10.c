#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10x.
 */

void print_alphabet_x10(void)
{
	int count;
	char ch;

	for (count = 0 ; count <= 10 ; count++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
			_putchar('\n');
		}
	}
}

