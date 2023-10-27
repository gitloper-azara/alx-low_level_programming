#include "main.h"

/**
 * flip_bits - a function that returns the number of bits needed to flip from
 * one number to another
 * @n: first num
 * @m: second num
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int numDigits = 0;

	while (xor > 0)
	{
		numDigits += (xor & 1);
		xor = xor >> 1;
	}
	return (numDigits);
}
