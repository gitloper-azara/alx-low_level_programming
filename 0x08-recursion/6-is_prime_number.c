#include "main.h"

/**
 * check_num - checks to see if integer is a prospect for being a prime number.
 * @x: int.
 * @y: int.
 *
 * Return: prospect.
 */

int check_num(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_num(x + 1, y));
}
/**
 * is_prime_number - returns 1 if integer is a prime number, otherwise 0.
 * @n: integer to check.
 *
 * Return: 1 if int is a prime number, 0 if otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (check_num(2, n));
}
