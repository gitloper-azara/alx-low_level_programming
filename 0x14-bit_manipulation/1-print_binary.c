#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/* base case: if n > 1, recursively call the function */
	if (n > 1)
		/* right shift 'n' till n <= 1 */
		print_binary(n >> 1);
	/* extract and print the binary of 'n' using its least signif bit */
	_putchar((n & 1) + '0');
}
