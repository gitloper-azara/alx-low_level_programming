#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number to convert
 * @index: index, starting from '0' of the bit to set
 *
 * Return: 1 on success, -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*
	 * create a mask, 'not' with a 0 in the position of the bit to clear
	 * and 1s everywhere else
	 */
	unsigned long int not;

	not = ~(1UL << index);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*
	 * perform a bitwise AND between 'n' and the mask 'not' to clear the
	 * bit at the given index, leaving other bits intact
	 */
	*n = *n & not;
	return (1);
}
