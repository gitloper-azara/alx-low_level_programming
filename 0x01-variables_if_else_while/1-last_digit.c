#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that will assign a random number
 *        to the variable n each time it is executed.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and and is less than 6", n, n);
		printf("and not 0\n");
	}
	return (0);
}
