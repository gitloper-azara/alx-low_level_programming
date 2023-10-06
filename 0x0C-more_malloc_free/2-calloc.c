#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: element size.
 * @size: size of bytes to allocate.
 *
 * Return: pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *array;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;

	return (array);
}
