#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive num
 * @argc: count of arguments
 * @argv: an array ofpointers to the argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, dig, sum = 0;

	for (n = 1 ; n < argc ; n++)
	{
		for (dig = 0 ; argv[n][dig] ; dig++)
		{
			if (argv[n][dig] < '0' || argv[n][dig] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
