#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 *
 * Return: Void
 */

void print_binary(unsigned long int n)
{
	/*
	 * Base case: if n is greater than 1, recursively call
	 * the function */
	if (n > 1)
		print_binary(n >> 1); /* Shift n right by one bit position */

	/* Print the least significant bit of n */
	_putchar((n & 1) + '0'); /* Extract and print the binary digit */
}
