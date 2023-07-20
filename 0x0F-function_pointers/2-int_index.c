#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an int
 * @array: int array
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which cmp function does not
 * return 0, if no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
