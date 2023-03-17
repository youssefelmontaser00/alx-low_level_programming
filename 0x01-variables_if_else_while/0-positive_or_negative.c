/*
 * File: 0-positive_or_negative.c
 * Auth: Youssef EL Montaser
 * Description: states whather is positive or negative or zero
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @parameter: describe the parameter
 *
 * Return:Always 0 (success)
 */



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("@d is positive\n",n);
	else if(n < 0)
		printf("@d is negative\n",n);
	else
		printf("@d is zero\n",n);

	return (0);
}
