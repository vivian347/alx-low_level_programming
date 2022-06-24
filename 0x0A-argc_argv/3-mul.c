#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies 2 numbers
 * @argc: count of arguments
 * @argv: an array of pointers tothe arguments
 */

int main(int argc,char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prod = n1 * n2;
	printf("%d\n", prod);
	return (0);
}
