#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: the int to be checked
 *
 * Return: the absolute value of int
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
