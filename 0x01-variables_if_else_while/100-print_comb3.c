#include <stdio.h>

/**
 * *main - print 2 digit numbers.
 *  *
 *   *Return: Always 0.
*/

int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0 ; dig1 < 10 ; dig1++)
	{
		for (dig2 = 1 ; dig2 < 10 ; dig2++)
		{
			putchar((dig1 % 10) + '0');
			putchar((dig2 % 10) + '0');

			if (((dig1 == 8) && (dig2 == 9)) && (dig1 != dig2) && ((dig1 != 1) && (dig2 != 0)))
			
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	 return (0);
}

