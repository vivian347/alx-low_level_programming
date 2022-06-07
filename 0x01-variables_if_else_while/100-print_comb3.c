#include <stdio.h>

/**
 * main- Entry point.
 *
 * Return:Always 0.
 */

int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '8')
	{
		while (b <= '9')
		{
			if (a < b)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');

				if (!(a == '8' && b == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}

			b++;
		}

		b = '8';
		a++;
	}

	putchar('\n');

	return (0);
}
