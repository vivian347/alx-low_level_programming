#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a randomnumber and specifies if it is 
 * 	 positive,negative or zero
 *
 *
 * Return: always 0
*/

int main(void){
	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if(n > 0){
		printf("%d is  positive\n");
	}else if(n < 0){
		printf("%d is negatuve\n");
	}else{
		printf("%d is zero\n");
	}

	return (0);
}
