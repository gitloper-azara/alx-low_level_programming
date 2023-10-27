#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* create a variable with the value of 1 */
	unsigned int x = 1;
	/* use a pointer to interpret the variable as bytes */
	char *c = (char *)&x;

	/*
	 * if the first byte of the variable is 1, it is little endian
	 * if 0, it is big endian
	 */
	return (*c == 1);
}
