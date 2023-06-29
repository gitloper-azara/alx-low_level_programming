#include "main.h"

/**
 * _strncat - concatenates 2 strings using 'n' number of bytes from src
 * @dest: char
 * @src: char
 * @n: number of bytes from src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		i[j++] = src[i];
	}
	return (dest);
}
