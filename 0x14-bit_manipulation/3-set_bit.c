#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: A pointer to the number
 * @index: the index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*
	 * use the bitwise OR operator to set the bit at
	 * the given index
	 */
	*n |= (1UL << index);

	return (1);
}
