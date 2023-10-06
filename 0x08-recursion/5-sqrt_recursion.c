#include "main.h"
/**
 * check_num - checks if number is a prospect of natural sqrt.
 * @sq: square number given.
 * @x: iterator.
 *
 * Return: prospect.
 */

int check_num(int sq, int x)
{
	if (x * x == sq)
		return (x);
	else if (x < sq / x)
		return (check_num(sq, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 *
 * Return: an int.
 */

int _sqrt_recursion(int n)
{
	int y = 1;

	if (n < 0)
		return (-1);
	else
		return (check_num(n, y));
}

