#include "main.h"

/**
 * check_int - check to see if number is candidate for prime
 * @a: int
 * @b: int
 *
 * Return: int
 */

int check_int(int a, int b)
{
	if (b < 2 || b % a == 0)
	{
		return (0);
	}
	else if (a > b / 2)
	{
		return (1);
	}
	else
	{
		return (check_int(b, a + 1));
	}
}

/**
 * is_prime_number - returns a prime
 * @n: int
 *
 * Return: 1 if true, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (check_int(2, n));
	}
}
