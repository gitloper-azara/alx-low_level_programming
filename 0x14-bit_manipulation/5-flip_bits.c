#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to get from
 * one number to the other
 * @n: First number
 * @m: Second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* xor operation to find differing bits */
	unsigned long int xor = n ^ m;
	/* counter to keep track of the differing bits */
	unsigned int count = 0;

	/* iterate through each bit in the XOR result */
	while (xor > 0)
	{
		/* if rightmost bit is 1, bit differs between n and m */
		count = count + (xor & 1);

		/* right-shift the XOR result to check the next bit */
		xor = xor >> 1;
	}
	return (count);
}
