#include "main.h"

/**
 * clear_bit - sets the value if a bit to 0 at a given index
 * @n: Pointer to the number
 * @index: Index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*
	 * create a mask with a 0 in the position of the bit
	 * I want to clear and 1s everywhere else
	 */
	unsigned long int mask = ~(1UL << index);

	/* check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*
	 * perform a bitwise AND operation between the number
	 * and the mask
	 * This is to clear the bit at the given index while leaving
	 * other bits intact
	 */
	*n = *n & mask;

	return (1);
}
