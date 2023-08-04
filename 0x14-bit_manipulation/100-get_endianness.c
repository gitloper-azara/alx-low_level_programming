#include "main.h"

/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1; /* create a variable with the value 1 */
	char *c = (char *)&x; /* use a pointer to interpret the var as bytes */

	/*
	 * if the first byte of the var is 1, it is little endian
	 * Otherwisw, it is big endian
	 */
	return (*c == 1);
}
