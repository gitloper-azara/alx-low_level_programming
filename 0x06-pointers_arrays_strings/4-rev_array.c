#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
	return (void);
}
