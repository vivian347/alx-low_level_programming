#include <stdio.h>

/**
 * *main -prints inbase 16.
 *  *
 *   *Return: Always 0.
*/

int main(void)
{
	char ch;
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar((num % 10) + '0');

	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
