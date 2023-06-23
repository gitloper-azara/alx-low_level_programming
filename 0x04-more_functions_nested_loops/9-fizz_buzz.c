#include <stdio.h>
#include "main.h"

/**
 * main - program entry point
 *
 * Description: prints the number 1 - 100
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 101)
			printf(" ");
	}
	printf("\n");
	return (0);
}
