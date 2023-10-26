#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number to convert to binary
 * @index: number of positions to left shift, index of the bit to set starting
 * from '0'
 *
 * Return: 1 on success, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index falls within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/* use the bitwise OR to set the bit at the given index */
	*n |= (1UL << index);
	return (1);
}
