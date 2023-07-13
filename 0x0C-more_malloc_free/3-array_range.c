#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min int to begin with
 * @max: max int to end with
 *
 * Return: NULL if min > max, NULL on error
 */

int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	j = (max - min) + 1;

	ptr = malloc(sizeof(int) * j);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
