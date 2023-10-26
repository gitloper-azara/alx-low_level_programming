#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of '0' and '1' chars
 *
 * Return: the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* check if b is NULL */
	if (b == NULL)
		return (0);

	while (*b)
	{
		/* check for the absence of 0 and 1 */
		if (*b != '0' && *b != '1')
			return (0);
		/* convert 0 and 1 to uint */
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
