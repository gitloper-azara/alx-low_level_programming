#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the index, or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*
	 * shift the bits of the number n to the right by index positions
	 * and extract the least significant bit using the bitwise AND
	 * operator
	 */
	return ((n >> index) & 1);
}
