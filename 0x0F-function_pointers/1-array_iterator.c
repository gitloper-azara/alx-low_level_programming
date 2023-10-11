#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a param on each element of an
 * array.
 * @array: int array.
 * @size: the size of the array.
 * @action: pointer to the function needed to use.
 *
 * Return: void.
 */

void array_iterator(int array[], size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < size; n++)
		action(array[n]);
}
