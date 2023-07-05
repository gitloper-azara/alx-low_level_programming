#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: int to be raised
 * @y: int to use to raise x
 *
 * Return: -1 on error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
