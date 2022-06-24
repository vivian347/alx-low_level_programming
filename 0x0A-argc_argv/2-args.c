#include <stdio.h>
#include "main.h"

/**
 * main - prints all arg it recieves includig the 1st one
 * @argc: count of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
