#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to convert to binary
 * @index: number of places to right shift starting from 0 of the bit to get
 *
 * Return: the value of the bit at index 'index', or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*
	 * shift the bits of 'n' to the right by 'index' positions and extract
	 * the least significant bit using bitwise AND
	 */
	return ((n >> index) & 1);
}
