#include "main.h"

/**
 * print_number - prints an integer
 * @n: inputs integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((unsigned int) n % 10 + '0');
}
