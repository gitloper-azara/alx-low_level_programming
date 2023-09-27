#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: given integer.
 *
 * Return: factorial of an integer, -1 on error.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
