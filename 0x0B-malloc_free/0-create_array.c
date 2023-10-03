#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char.
 * @size: size of the memory to allocate.
 * @c: char to consider.
 *
 * Return: NULL if size is 0, pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
