#include <stdio.h>

/**
 * *main - print 2 digit numbers.
 *  *
 *   *Return: Always 0.
*/

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
																				putchar((digit2 % 10) + '0');
	
																			if (digit1 == 8 && digit2 == 9)
																			{
																				break;
																			}
																							
																				putchar(',');
																				putchar(' ');
																			}
	}

	putchar('\n');

	return (0);
}

