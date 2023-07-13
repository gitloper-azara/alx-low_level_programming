#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concatenated upon
 * @s2: string to concatenate
 * @n: number of times to work out bytes
 *
 * Return: NULL on error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int length3, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	length3 = length1 + length2;

	if (n >= length2)
		n = length2;
	s = malloc(sizeof(char) * length3 + 1);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		s[i] = s1[i];
	for (j = 0; j < length2; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
	return (s);
}
