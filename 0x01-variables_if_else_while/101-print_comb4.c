#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0 ; b <= 9; b++)
		{
			for (c = 0 ; c <= 9; c++)
			{
				if ((a < b) && (b < c))
				{
					putchar((a % 10) + 48);
					putchar((b % 10) + 48);
					putchar((c % 10) + 48);
					if (!(a == 7 && b == 8 && c  == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}

