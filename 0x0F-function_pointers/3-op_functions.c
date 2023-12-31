#include "3-calc.h"

/**
 * op_add - adds a and b.
 * @a: int a.
 * @b: int b.
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a.
 * @a: int a.
 * @b: int b.
 *
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b.
 * @a: int a.
 * @b: int b.
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 * @a: int a.
 * @b: int b.
 *
 * Return: result of a by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - divides a by b.
 * @a: int a.
 * @b: int b.
 *
 * Return: remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
