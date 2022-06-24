#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: count of number of arguments passed
 * @argv: array of pointer to the arguments
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
