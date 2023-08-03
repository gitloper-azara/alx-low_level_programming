#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number or 0 if one or more chars is not 0 and 1
 * or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	/* check if b is NULL */
	if (b == NULL)
		return (0);

	while (*b)
	{
		/* check if one or more chars is not 0 or 1 */
		if (*b != '0' && *b != '1')
			return (0);

		res = res * 2 + (*b - '0');
		b++;
	}
	return (res);
}
