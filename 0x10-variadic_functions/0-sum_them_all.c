#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters.
 * @n: parameters.
 *
 * Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int result;

	if (n == 0)
		return (0);

	va_start(args, n);
	result = 0;

	for (i = 0; i < n; i++)
		result = result + va_arg(args, int);
	va_end(args);

	return (result);
}
