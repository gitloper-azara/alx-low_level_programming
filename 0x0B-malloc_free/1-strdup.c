#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string given as a parameter.
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string on Success.
 */

char *_strdup(char *str)
{
	int i, j;
	char *array;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	array = malloc(i * sizeof(char) + 1);

	if (array == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		array[j] = str[j];
		j++;
	}
	array[i] = '\0';

	return (array);
}
