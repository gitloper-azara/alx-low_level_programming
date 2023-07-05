#include "main.h"

/**
 * check_int - checks int as candidate for square root
 * @square: square int
 * @x: int
 *
 * Return: -1
 */

int check_int(int square, int x)
{
	if (x * x == square)
	{
		return (x);
	}
	else if (x > square / x)
	{
		return (check_int(square, x - 1));
	}
	else if (x < square / x)
	{
		return (check_int(square, x + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a given number
 * @n: int
 *
 * Return: int - square root, if none, -1
 */

int _sqrt_recursion(int n)
{
	int z;

	z = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (check_int(n, z));
	}
}
