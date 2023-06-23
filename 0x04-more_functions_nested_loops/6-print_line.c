#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character is printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
