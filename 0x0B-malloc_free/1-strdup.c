#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string given as a parameter
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string on Success
 */

char *_strdup(char *str)
{
	int n, i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	array = (char *) malloc(n * sizeof(char) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < n)
	{
		array[i] = str[i];
		i++;
	}
	array[n] = '\0';

	return (array);
}
